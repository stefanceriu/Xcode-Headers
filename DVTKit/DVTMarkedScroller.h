//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScroller.h"

#import "CALayerDelegate.h"

@class CALayer, DVTObservingToken, NSString, _DVTMarkerList;

@interface DVTMarkedScroller : NSScroller <CALayerDelegate>
{
    _DVTMarkerList *_errorMarks;
    _DVTMarkerList *_warningMarks;
    _DVTMarkerList *_analyzerMarks;
    _DVTMarkerList *_runtimeIssueMarks;
    _DVTMarkerList *_breakpointMarks;
    _DVTMarkerList *_diffMarks;
    _DVTMarkerList *_diffConflictMarks;
    CALayer *_marksLayer;
    DVTObservingToken *_expansionTransitionProgressObservingToken;
    DVTObservingToken *_knobAlphaObservingToken;
}

+ (BOOL)isCompatibleWithOverlayScrollers;
- (void).cxx_destruct;
- (void)setFloatValue:(float)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)addMark:(double)arg1 ofType:(unsigned long long)arg2;
- (void)_updateMarksForGeometryChange;
- (void)_updateMarksForOpacityChange;
- (void)_updateMarkRectsIfNeeded:(id)arg1 newMarkRect:(struct CGRect)arg2;
- (struct CGRect)_markRect;
- (void)_setMarksNeedUpdate:(id)arg1;
- (void)clearDiffMarks;
- (void)clearNormalMarks;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2;
- (void)drawKnob;
- (void)_drawMarks;
- (void)_fillMarkRects:(id)arg1 usingGradient:(id)arg2;
- (BOOL)_drawsMarks;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setScrollerStyle:(long long)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setLayer:(id)arg1;
- (void)_invalidateMarksLayer;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

