//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/CDMProperty.h>

@class NSArray, NSString;

@interface CDMAttribute : CDMProperty
{
    long long _attributeType;
    NSString *_defaultValueString;
    NSString *_minValueString;
    NSString *_maxValueString;
    NSString *_regularExpressionString;
    NSString *_valueTransformerName;
    BOOL _allowsExternalBinaryDataStorage;
    NSString *_customClassName;
    BOOL _preserveAfterDeletion;
    long long _preferredType;
}

+ (id)keyPathsForValuesAffectingUsesScalarValueType;
+ (id)keyPathsForValuesAffectingMaxValueObject;
+ (id)keyPathsForValuesAffectingMinValueObject;
+ (id)keyPathsForValuesAffectingDefaultValueObject;
+ (id)keyPathsForValuesAffectingInspectedAttributeType;
+ (id)keyPathsForValuesAffectingInspectedClassName;
+ (id)keyPathsForValuesAffectingInspectedModuleName;
@property long long preferredType; // @synthesize preferredType=_preferredType;
@property(copy, nonatomic) NSString *valueTransformerName; // @synthesize valueTransformerName=_valueTransformerName;
@property(copy, nonatomic) NSString *regularExpressionString; // @synthesize regularExpressionString=_regularExpressionString;
@property(copy, nonatomic) NSString *maxValueString; // @synthesize maxValueString=_maxValueString;
@property(copy, nonatomic) NSString *minValueString; // @synthesize minValueString=_minValueString;
@property(copy, nonatomic) NSString *defaultValueString; // @synthesize defaultValueString=_defaultValueString;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)encodeXMLElement;
- (void)awakeAfterXMLDecoding;
- (id)xmlElementAttributes;
- (id)initWithXMLElement:(id)arg1 owner:(id)arg2 error:(id *)arg3;
@property(readonly) NSString *attributeTypeString;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 inModel:(id)arg2;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (id)undoManager;
- (BOOL)mapsDirectlyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property BOOL preserveAfterDeletion; // @synthesize preserveAfterDeletion=_preserveAfterDeletion;
@property(copy, nonatomic) NSString *customClassName; // @synthesize customClassName=_customClassName;
@property BOOL allowsExternalBinaryDataStorage; // @synthesize allowsExternalBinaryDataStorage=_allowsExternalBinaryDataStorage;
@property BOOL usesScalarValueType;
@property(nonatomic) long long attributeType; // @synthesize attributeType=_attributeType;
@property(readonly, copy) id maxValueObjectNonNilValue;
@property(copy, nonatomic) id maxValueObject;
@property(nonatomic) BOOL hasMaxValueObject;
@property(readonly, copy) id minValueObjectNonNilValue;
@property(copy, nonatomic) id minValueObject;
@property(nonatomic) BOOL hasMinValueObject;
@property(readonly, copy) id defaultValueObjectNonNilValue;
@property(retain) id defaultValueObject;
@property(nonatomic) BOOL hasDefaultValueObject;
- (id)stringForValueObject:(id)arg1 withType:(long long)arg2;
- (id)valueObjectForString:(id)arg1 withType:(long long)arg2;
- (id)_dateFormatter;
- (void)cascadeChangesToLegacyAttribute:(id)arg1;
- (id)initWithLegacyAttribute:(id)arg1 belongingToEntity:(id)arg2 inModel:(id)arg3;
- (id)initInModel:(id)arg1;
- (void)_registerUndoBlockForFoundAttribute:(CDUnknownBlockType)arg1;
- (void)setAttributeTypeIndex:(long long)arg1;
- (long long)attributeTypeIndex;
@property long long inspectedAttributeType;
@property(copy) NSString *inspectedClassName;
@property(copy) NSString *inspectedModuleName;
@property(readonly, copy) NSArray *possibleModuleDisplayValues;
@property(readonly, copy) NSArray *possibleModuleNameObjects;
- (id)validateStringValue:(id)arg1 asType:(unsigned long long)arg2;
- (id)code_effectiveCustomClassModuleName;
- (id)code_effectiveCustomClassName;
- (id)code_propertyParameter;
- (id)code_propertyTypeScalarSwift;
- (id)code_propertyTypeScalarObjC;
- (id)code_propertyTypeSwift;
- (id)code_propertyTypeObjC;
- (id)code_propertyType;

@end

