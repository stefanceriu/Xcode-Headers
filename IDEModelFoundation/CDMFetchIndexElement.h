//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelFoundation/CDMIdentification-Protocol.h>
#import <IDEModelFoundation/CDMXMLCoding-Protocol.h>
#import <IDEModelFoundation/DVTInvalidation-Protocol.h>
#import <IDEModelFoundation/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class CDMFetchIndex, CDMModel, CDMProperty, DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEFileReference, NSArray, NSExpression, NSImage, NSMutableDictionary, NSNull, NSNumber, NSString, NSURL, NSUndoManager, _TtC13DVTFoundation9DVTSymbol;

@interface CDMFetchIndexElement : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, CDMIdentification, CDMXMLCoding, DVTInvalidation>
{
    NSNumber *_uniqueID;
    NSMutableDictionary *_decodingContext;
    BOOL _ascending;
    CDMProperty *_property;
    NSExpression *_expression;
    long long _expressionType;
    unsigned long long _elementType;
    CDMModel *_model;
    CDMFetchIndex *_fetchIndex;
}

+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingRepresentsExpression;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingInspectedExpressionString;
+ (id)keyPathsForValuesAffectingExpressionTypeIndex;
+ (id)keyPathsForValuesAffectingSelectedPropertyIndex;
+ (id)keyPathsForValuesAffectingAvailablePropertyIndexes;
+ (id)keyPathsForValuesAffectingAvailablePropertyNames;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(retain) CDMFetchIndex *fetchIndex; // @synthesize fetchIndex=_fetchIndex;
@property(retain) CDMModel *model; // @synthesize model=_model;
@property(copy) NSNumber *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (void)generateBackwardsCompatibilityErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
@property(readonly) BOOL representsEntityExpression;
@property(readonly) BOOL representsSelfExpression;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(getter=isAscending) BOOL ascending; // @synthesize ascending=_ascending;
@property unsigned long long elementType; // @synthesize elementType=_elementType;
@property(readonly) BOOL representsExpression;
@property long long expressionType; // @synthesize expressionType=_expressionType;
@property(retain) NSExpression *expression; // @synthesize expression=_expression;
@property(retain) CDMProperty *property; // @synthesize property=_property;
- (id)encodeXMLElement;
- (void)awakeAfterXMLDecoding;
- (id)initWithXMLElement:(id)arg1 owner:(id)arg2 error:(id *)arg3;
- (void)primitiveInvalidate;
- (id)init;
- (id)initInModel:(id)arg1;
@property(readonly) NSUndoManager *undoManager;
- (void)_registerUndoBlockForFoundFetchIndexElement:(CDUnknownBlockType)arg1;
- (BOOL)validateInspectedExpressionString:(inout id *)arg1 error:(out id *)arg2;
@property(copy) NSString *inspectedExpressionString;
@property unsigned long long selectedExpressionTypeIndex;
@property(readonly, copy) NSArray *availableExpressionTypeIndexes;
@property(readonly, copy) NSArray *availableExpressionTypeNames;
@property unsigned long long selectedPropertyIndex;
@property(readonly, copy) NSArray *availablePropertyIndexes;
@property(readonly, copy) NSArray *availablePropertyNames;
- (id)availableProperties;
@property(readonly, nonatomic) NSString *navigableItem_name;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
