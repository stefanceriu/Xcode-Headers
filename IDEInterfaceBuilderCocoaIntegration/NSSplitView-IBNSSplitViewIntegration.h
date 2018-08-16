//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSplitView.h>

@class NSArray;
@protocol IBOrderedCollection;

@interface NSSplitView (IBNSSplitViewIntegration)
+ (id)ibDirectSubviewsRelationshipName;
+ (id)keyPathsForValuesAffectingIbInspectedVertical;
+ (id)keyPathsForValuesAffectingIbShadowedHoldingPriorities;
@property(copy, nonatomic) id <IBOrderedCollection> ibDirectSubviewCandidates;
- (id)ibLocalPerConfigurationToManyChildRelationshipKeyPaths;
- (id)ibViewsRelevantToPriorityOfKeyPath:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)ibLabelForPriorityOfKeyPath:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)ibShouldEnsureChildViewHasTranslatesAutoresizingMaskIntoConstraintsInCanvas:(id)arg1;
- (void)ibEnableAutolayoutInDocument:(id)arg1 context:(id)arg2;
@property(nonatomic) BOOL ibShadowedSplitViewIntegralizesInUserSpace;
@property(nonatomic) BOOL ibShadowedSplitViewAlwaysLaysOutAccordingToAlignmentRects;
- (BOOL)ibChildAutolayoutItem:(id)arg1 hasOwnedSizeLayoutInDocument:(id)arg2;
- (BOOL)ibChildViewHasCustomLayoutButAllowsAlignmentConstraints:(id)arg1;
- (BOOL)ibChildViewHasCustomLayoutButAllowsSpacingConstraints:(id)arg1;
- (BOOL)ibChildViewHasCustomLayoutButAllowsEqualSizeConstraints:(id)arg1;
- (BOOL)ibChildViewHasCustomLayoutButAllowsExplicitSizeConstraints:(id)arg1;
- (BOOL)ibChildViewDerivesInternalConstraintsBasedUponInitialFrameSize:(id)arg1;
- (BOOL)ibCanEmbedDirectlyInSplitView;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (double)ibPriorityStrongerThanInternalWeakSizeConstraintsForCompressingViewInLayoutEngineForOrientation:(unsigned long long)arg1;
- (unsigned long long)ibOrientationsWithInternalConstraintsThatWeaklyDefineViewSize;
- (void)setIbArchivedSubviews:(id)arg1 withConfigurationPropertyStorage:(id)arg2;
- (id)ibArchivedSubviewsWithConfigurationPropertyStorage:(id)arg1;
- (id)ibArchiveKeyForConfigurableRelationship:(id)arg1;
- (BOOL)ibChildView:(id)arg1 canHaveUninitializedAutolayoutAmbiguityStatusInDocument:(id)arg2;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (void)setIbInspectedVertical:(BOOL)arg1;
- (BOOL)ibInspectedVertical;
@property BOOL ibShadowedVertical;
- (void)ibSetValue:(id)arg1 forInsertingPasteboardObjectsIntoToManyRelationship:(id)arg2 document:(id)arg3 insertionContext:(id)arg4;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (id)ibPasteboardTypes;
- (id)ibDividerHitTestRects;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (void)ibCustomizeForInsertionIntoNSView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibSwizzledAutosaveSubviewLayoutIfNecessary;
- (void)ibAwakeInDocument:(id)arg1;
- (id)ibSwizzledInitWithCoder:(id)arg1;
- (void)setInitingDesignableSplitView:(BOOL)arg1;
- (BOOL)isInitingDesignableSplitView;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibSuggestLayoutAllowingResizingTopLevelView:(BOOL)arg1;
- (BOOL)ibIsChildViewMovable:(id)arg1;
- (BOOL)ibIsChildViewSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
@property(copy, nonatomic) NSArray *ibShadowedHoldingPriorities;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
@property(nonatomic) BOOL ibExternalArrangesAllSubviews;
- (void)setIbShadowedSubviews:(id)arg1;
- (Class)ibEditorClass;
- (BOOL)ibIsNSAppearanceContainer;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibTurnOffChildren:(id)arg1 document:(id)arg2;
- (BOOL)ibCanTurnOffChildren:(id)arg1 document:(id)arg2;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
@end

