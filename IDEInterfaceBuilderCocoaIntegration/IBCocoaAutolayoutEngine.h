//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAutolayoutEngine.h"

@class IBDocument, NSWindow, NSWindowTemplate;

@interface IBCocoaAutolayoutEngine : IBAutolayoutEngine
{
    NSWindowTemplate *topLevelRealWindowTemplate;
    NSWindow *window;
}

+ (id)defaultWindowForContentViewSize:(struct CGSize)arg1;
@property(readonly) NSWindow *window; // @synthesize window;
- (void).cxx_destruct;
- (id)candidateRedundantRepresentedConstraints;
- (id)viewForApplyingSystemRequiredConstraints;
- (BOOL)internalTryToAddConstraint:(id)arg1 toRepresentedView:(id)arg2 roundingAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (void)invalidateConstraintsForRepresentedItems:(id)arg1;
- (void)updateConstraintsIfNeeded;
- (void)layoutIfNeeded;
- (Class)spacerItemClass;
@property(readonly) IBDocument *document;
- (id)internalEngine;
@property(readonly) NSWindowTemplate *windowTemplate;
- (id)prepareViewHierarchyAndReturnAddedRepresentedConstraintsForRepresentedViews;
- (id)initWithArbitrationUnit:(id)arg1 options:(unsigned long long)arg2;

@end

