//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAutolayoutGuide.h>

#import <IBCocoaTouchToolFoundation/IBAutolayoutItem-Protocol.h>

@class IBCocoaTouchTargetRuntime, NSArray, NSObject, NSSet, NSString;
@protocol IBAutolayoutItem, IBCollection, IBOrderedCollection, IBUIViewAutolayoutGuideDelegate;

@interface IBUIViewAutolayoutGuide : IBAutolayoutGuide <IBAutolayoutItem>
{
    struct CGRect _cachedLayoutFrame;
    IBCocoaTouchTargetRuntime *_targetRuntime;
    long long _systemType;
    id <IBUIViewAutolayoutGuideDelegate> _delegate;
    unsigned long long __spacerTag;
}

@property(nonatomic, setter=_setSpacerTag:) unsigned long long _spacerTag; // @synthesize _spacerTag=__spacerTag;
@property(nonatomic) __weak id <IBUIViewAutolayoutGuideDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long systemType; // @synthesize systemType=_systemType;
@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (unsigned long long)ibAmbiguityStatusForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (void)ibDidMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (id)ibOverriddenDesignableContentItem;
- (BOOL)ibShouldMapIntoLayoutEngineAsSpacerView;
@property(readonly, nonatomic) BOOL ibIgnoreNearestNeighborProximityThreshold;
@property(readonly, nonatomic) NSSet *ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
@property(readonly, nonatomic) id ibWindowForArbitration;
- (BOOL)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (BOOL)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (BOOL)ibShouldIgnoreAmbiguityAndMisplacementIssuesBecauseLayoutIsExplicitlyManaged;
@property(nonatomic) double ibShadowedVerticalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedHorizontalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedVerticalContentHuggingPriority;
@property(nonatomic) double ibShadowedHorizontalContentHuggingPriority;
@property(nonatomic) BOOL ibExternalExplicitTranslatesAutoresizingMaskIntoConstraints;
- (id)ibNextAncestorItemForFindingReferencingConstraintsInLayoutInfo:(id)arg1;
@property(readonly, nonatomic) id <IBCollection> ibTurnedOnButPossiblyUninstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibCandidateReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibInstalledReferencingConstraints;
- (id)ibReferencingConstraintsWithScope:(long long)arg1;
- (id)ibLayoutInfoProvider;
@property(retain, nonatomic) id <IBOrderedCollection> ibTurnedOnButPossiblyUninstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibInstalledConstraints;
@property(readonly, nonatomic) id <IBOrderedCollection> ibInstalledConstraintsWithInstalledAncestors;
@property(retain, nonatomic) id <IBOrderedCollection> ibCandidateConstraints;
- (unsigned long long)ibAllowedSiblingEdgesForGuidesToSelectedItems:(id)arg1;
- (BOOL)ibAllowsSiblingGuidesToSelectedItems:(id)arg1 ofType:(long long)arg2;
- (BOOL)ibAllowsConstraintSpacingFromInsideEdgesForSiblings;
- (BOOL)ibShouldConsiderGuidesToEdgeWithAttribute:(unsigned long long)arg1 fromEdgeWithAttribute:(unsigned long long)arg2 ofSelectedItems:(id)arg3;
- (id)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(id)arg1;
- (struct CGRect)ibBoundsForLayoutBounds:(struct CGRect)arg1;
- (struct CGRect)ibLayoutFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)ibFrameForLayoutFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGRect ibLayoutFrame;
@property(readonly, nonatomic) struct CGRect ibLayoutFrameworkBounds;
@property(readonly, nonatomic) struct CGRect ibLayoutBounds;
- (void)ibInvalidateAutoresizingMaskConstraints;
- (void)setNeedsUpdateConstraints;
- (void)exerciseAmbiguityInLayout;
- (id)constraintsAffectingLayoutForOrientation:(unsigned long long)arg1;
- (BOOL)ib_hasAmbiguousLayout;
- (void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentCompressionResistancePriorityForOrientation:(unsigned long long)arg1;
- (void)setContentHuggingPriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentHuggingPriorityForOrientation:(unsigned long long)arg1;
- (void)removeConstraints:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)addConstraints:(id)arg1;
- (void)addConstraint:(id)arg1;
@property(readonly, nonatomic) NSArray *constraints;
- (void)setIbCanFrameDecideEvenWhenAmbiguousForNextStatusUpdate:(BOOL)arg1;
- (BOOL)ibCanFrameDecideEvenWhenAmbiguousForNextStatusUpdate;
@property(readonly, nonatomic) long long ibFrameDecisionStrategy;
@property(readonly, nonatomic) BOOL ibIsSelfManagedContainerInEngine;
- (CDUnion_42e99c75)convertKnobPosition:(CDUnion_42e99c75)arg1 fromView:(id)arg2;
- (CDUnion_42e99c75)convertKnobPosition:(CDUnion_42e99c75)arg1 toView:(id)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 fromView:(id)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 toView:(id)arg2;
- (CDStruct_d2b197d1)convertInset:(CDStruct_d2b197d1)arg1 fromView:(id)arg2;
- (CDStruct_d2b197d1)convertInset:(CDStruct_d2b197d1)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 toView:(id)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (CDUnion_42e99c75)ib_convertKnobPosition:(CDUnion_42e99c75)arg1 fromItem:(id)arg2;
- (CDUnion_42e99c75)ib_convertKnobPosition:(CDUnion_42e99c75)arg1 toItem:(id)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 fromItem:(id)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 toItem:(id)arg2;
- (CDStruct_d2b197d1)ib_convertInset:(CDStruct_d2b197d1)arg1 fromItem:(id)arg2;
- (CDStruct_d2b197d1)ib_convertInset:(CDStruct_d2b197d1)arg1 toItem:(id)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 toItem:(id)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 fromItem:(id)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 toItem:(id)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 fromItem:(id)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 toItem:(id)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 fromItem:(id)arg2;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1;
- (struct NSEdgeInsets)ibLayoutMargins;
- (BOOL)ibSupportsLayoutMargins;
- (BOOL)ibSupportsFirstBaseline;
- (BOOL)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(CDUnion_42e99c75)arg2;
- (double)ibBaselineAtIndex:(long long)arg1 inCoordinateSpaceOfItem:(id)arg2;
@property(readonly, nonatomic) long long ibBaselineCount;
@property(readonly, nonatomic) double ibShadowedFirstBaselineOffsetFromTop;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) CDStruct_d2b197d1 ibLayoutInset;
@property(nonatomic) BOOL translatesAutoresizingMaskIntoConstraints;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)setFrameSize:(struct CGSize)arg1;
@property(nonatomic) struct CGRect frame;
- (void)addSubview:(id)arg1;
- (void)removeFromSuperview;
@property(readonly, nonatomic) id window;
@property(readonly, nonatomic) NSArray *subviews;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *superview;
@property(readonly, nonatomic) BOOL ibExternalEffectiveTranslatesAutoresizingMaskIntoConstraints;
- (id)initAsEngineSpacerItemWithInitialLayoutFrame:(struct CGRect)arg1;
- (id)ibEffectiveRootCoordinateSystemForConversions;
- (id)ibEffectiveWindowForConversions;
@property(readonly, nonatomic, getter=isFlipped) BOOL flipped;
- (id)ibEffectiveItemForRuntimeConstraintAdjustingConstant:(double *)arg1 attribute:(unsigned long long *)arg2 orConstraintClassIfNeeded:(Class *)arg3 context:(id)arg4;
@property(readonly, nonatomic) NSArray *ibChildItemsEligibleForNearestNeighborConstraints;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *ibParentItem;
- (id)_containingView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

