//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/CDMProperty.h>

@class CDMEntity, NSNumber;

@interface CDMRelationship : CDMProperty
{
    CDMEntity *_destinationEntity;
    unsigned long long _minCount;
    unsigned long long _maxCount;
    long long _deletionRule;
    CDMRelationship *_inverseRelationship;
    BOOL _toMany;
    BOOL _ordered;
}

+ (id)keyPathsForValuesAffectingInspectedToMany;
+ (id)keyPathsForValuesAffectingInspectedMaxCount;
+ (id)keyPathsForValuesAffectingInspectedMinCount;
+ (id)keyPathsForValuesAffectingInspectedInverseRelationship;
+ (id)keyPathsForValuesAffectingInspectedDestinationEntity;
+ (id)keyPathsForValuesAffectingFilteredRelationshipsWithNoInverse;
+ (id)keyPathsForValuesAffectingPossibleInverseRelationships;
@property(nonatomic) BOOL ordered; // @synthesize ordered=_ordered;
@property(readonly) BOOL toMany; // @synthesize toMany=_toMany;
@property(retain, nonatomic) CDMRelationship *inverseRelationship; // @synthesize inverseRelationship=_inverseRelationship;
@property(nonatomic) long long deletionRule; // @synthesize deletionRule=_deletionRule;
@property(readonly) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(readonly) unsigned long long minCount; // @synthesize minCount=_minCount;
@property(retain, nonatomic) CDMEntity *destinationEntity; // @synthesize destinationEntity=_destinationEntity;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)encodeXMLElement;
- (id)xmlElementAttributes;
- (void)awakeAfterXMLDecoding;
- (id)initWithXMLElement:(id)arg1 owner:(id)arg2 error:(id *)arg3;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 inModel:(id)arg2;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (BOOL)mapsDirectlyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property NSNumber *inspectedToMany;
- (unsigned long long)inspectedMaxCountNonNilValue;
- (void)setInspectedMaxCount:(id)arg1;
- (id)inspectedMaxCount;
- (unsigned long long)inspectedMinCountNonNilValue;
- (void)setInspectedMinCount:(id)arg1;
- (id)inspectedMinCount;
@property(retain) CDMRelationship *inspectedInverseRelationship;
- (void)setDestinationEntity:(id)arg1 andInverseRelationship:(id)arg2;
@property(retain) CDMEntity *inspectedDestinationEntity;
- (id)filteredRelationshipsWithNoInverse;
- (id)possibleInverseRelationships;
- (void)setMinCount:(unsigned long long)arg1 maxCount:(unsigned long long)arg2 toMany:(BOOL)arg3;
- (void)primitiveInvalidate;
- (void)cascadeChangesToLegacyRelationships:(id)arg1 givenModernToLegacyEntityMapping:(id)arg2;
- (id)initWithLegacyRelationship:(id)arg1 andEntityMapping:(id)arg2 belongingToEntity:(id)arg3 inModel:(id)arg4;
- (id)initInModel:(id)arg1;
- (void)_registerUndoBlockForFoundRelationship:(CDUnknownBlockType)arg1;
- (id)code_accessorsObjC;
- (id)code_accessorsSwift;
- (id)code_accessors;
- (id)code_relationshipDestinationClass;
- (id)code_relationshipSetType;
- (id)code_propertyParameter;
- (id)code_propertyTypeObjC;
- (id)code_propertyTypeSwift;
- (id)code_propertyType;

@end

