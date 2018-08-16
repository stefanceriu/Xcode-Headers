//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBConnection.h>

@class NSString;

@interface IBAbstractActionConnection : IBConnection
{
    NSString *_trigger;
}

+ (BOOL)prototypeMatchConnectionContextIsValid:(id)arg1 forConnectingFromObject:(id)arg2 toObject:(id)arg3 document:(id)arg4;
+ (BOOL)canMakeSourceCodeConnectionsFromObject:(id)arg1 toObject:(id)arg2 document:(id)arg3;
+ (Class)connectionContextClass;
+ (void)refactorConnectionsInExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 fromObject:(id)arg4 toObject:(id)arg5 context:(id)arg6;
+ (id)insertConnectionsFromExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 context:(id)arg4;
+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
+ (id)prototypeConnectionsForObject:(id)arg1;
+ (BOOL)objectAggregatesAllActions:(id)arg1;
+ (id)normalizeDestination:(id)arg1 withParent:(id)arg2;
+ (BOOL)canObjectFireActions:(id)arg1 inDocument:(id)arg2;
+ (id)actionTriggersForObject:(id)arg1 inDocument:(id)arg2;
@property(copy, nonatomic) NSString *trigger; // @synthesize trigger=_trigger;
- (void).cxx_destruct;
- (id)connectionByCompletingWithConnectionContext:(id)arg1;
- (id)messageForConnectingAcrossRepeatingStoryboardRelationship;
- (id)endPointForStoryboardCrossRepetitionWarning;
- (void)populateExternalConnectionRepresentation:(id)arg1 forContainer:(id)arg2 fromContainer:(id)arg3 otherExternalConnections:(id)arg4 context:(id)arg5;
- (BOOL)insertingFromPasteboardShouldRetargetEndPoint:(long long)arg1;
- (BOOL)sourceIsFirstResponder;
- (BOOL)shouldFollowDestinationToPasteboardAsExternalConnection;
- (id)endPointForEstimatingUnlabeledConnection;
- (id)displayDescriptionInDocument:(id)arg1;
- (id)categoryNameForRefactoringRequest:(id)arg1 inDocument:(id)arg2;
- (id)typeNameForRefactoringRequest:(id)arg1 inDocument:(id)arg2;
- (BOOL)shouldRefactorLabelForRenameRefactoringRequest:(id)arg1 inDocument:(id)arg2;
- (id)_descriptionSubstringForDestination;
- (id)explicitDisplayNameWithRespectToPredecessors:(id)arg1;
- (id)displayValuesWithRespectToPrototype:(id)arg1 inDocument:(id)arg2;
- (id)displayGroupFromReferenceEndPoint:(id)arg1;
- (id)displayGroupForDragFromObject:(id)arg1 toObject:(id)arg2;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (BOOL)canCoexistWithOtherConnectionsHavingSameEndPoint;
- (BOOL)isExclusiveTo:(id)arg1 inObjectContainer:(id)arg2;
- (id)exclusivityHintInObjectContainer:(id)arg1;
- (id)equivalentPrototypeWithRespectToEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (id)prototypeWithRespectTo:(id)arg1;
- (BOOL)validateSource:(id)arg1;
- (id)missingComponents;
- (BOOL)validateDestination:(id)arg1;
- (BOOL)isPrototypeFor:(id)arg1;
- (BOOL)isEquivalentToPrototypeFor:(id)arg1 inDocument:(id)arg2;
- (BOOL)isEqualToPrototype:(id)arg1;
- (long long)previousConnectionStateIndicatorForDragFromObject:(id)arg1 toObject:(id)arg2 inDocument:(id)arg3;
- (long long)relationshipType;
- (id)archivingKeyForEndPoint:(long long)arg1;
- (long long)endPointToArchive;
- (BOOL)useConnectionSourceForSearchLocation;
- (id)archivingKeyForLabel;
- (BOOL)triggerMatchesConnection:(id)arg1;
- (void)copyInstanceStateToClone:(id)arg1 withContext:(id)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 label:(id)arg2 destination:(id)arg3 trigger:(id)arg4;
- (id)initWithSource:(id)arg1 label:(id)arg2 destination:(id)arg3;
- (id)initWithDestination:(id)arg1 trigger:(id)arg2;
- (id)connectionDefinitionForObject:(id)arg1;

@end

