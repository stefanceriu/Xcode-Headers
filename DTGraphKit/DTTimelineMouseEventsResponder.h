//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

@class DTTimelineGraph, NSCursor, NSTrackingArea;

@interface DTTimelineMouseEventsResponder : NSResponder
{
    DTTimelineGraph *_timelineGraph;
    BOOL _inDragEvent;
    double _startDragX;
    double _selectionStartX;
    double _selectionEndX;
    BOOL _overSelectionStart;
    BOOL _overSelectionEnd;
    NSTrackingArea *_trackingArea;
    NSCursor *_resizeLeftRightCursor;
    double _scrollingDeltaXTotal;
    long long _magnifyGestureCenter;
    BOOL _userDraggedMouseSinceMouseDown;
    BOOL _shiftKeyPressedOnMouseDown;
    struct CGPoint _cursorPositionOnMouseDown;
    struct CGPoint _cursorPositionOnMouseDownRelativeToTimelineGraph;
    id <DTTimelineGraphDelegate> _delegate;
}

@property(nonatomic) __weak id <DTTimelineGraphDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)magnifyWithEvent:(id)arg1;
- (void)_magnifyGraph:(double)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (BOOL)_shouldDisplayInspectionInfoForEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)_handleNonPlaneSelectionClick:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)_updateZoomWithDragDelta:(double)arg1 focusPoint:(struct CGPoint)arg2;
- (void)mouseDown:(id)arg1;
- (BOOL)_shiftKeyPressed;
- (void)scrollWheel:(id)arg1;
- (void)_selectFrom:(double)arg1 to:(double)arg2;
- (long long)_rationalizeSelectionOffset:(long long)arg1;
- (BOOL)_eventInLabelOverlayArea:(id)arg1;
- (BOOL)_eventInRuler:(id)arg1;
- (double)_rulerHeight;
- (double)_localYFromEvent:(id)arg1;
- (double)_localXFromEvent:(id)arg1;
- (struct CGPoint)_localPointFromEvent:(id)arg1;
- (void)_moveByY:(double)arg1;
- (void)_moveByX:(double)arg1;
- (long long)_maxOffset;
- (id)initWithTimelineGraph:(id)arg1;

@end
