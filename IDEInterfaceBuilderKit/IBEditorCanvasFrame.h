//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBCanvasFrame.h>

#import <IDEInterfaceBuilderKit/IBDocumentArbitrationResponder-Protocol.h>
#import <IDEInterfaceBuilderKit/IBImageButtonDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSAccessibilityGroup-Protocol.h>

@class IBEditorCanvasFrameContentView, IBEditorCanvasFrameController, IBImageButton, IBSceneUpdateContentView, NSEvent, NSGestureRecognizer, NSSet, NSString, NSTrackingArea, NSValue, NSView;

@interface IBEditorCanvasFrame : IBCanvasFrame <IBImageButtonDelegate, NSAccessibilityGroup, IBDocumentArbitrationResponder>
{
    IBEditorCanvasFrameContentView *_contentView;
    NSTrackingArea *_mouseMovedArea;
    long long _dragAndDropFrameCount;
    IBImageButton *_resizingGrips[3][3];
    NSSet *_resizingKnobSet;
    long long _disableDrawingCachingCount;
    BOOL _horizontallyResizable;
    BOOL _verticallyResizable;
    NSEvent *_lastMouseDown;
    IBEditorCanvasFrameController *_controller;
    NSString *_title;
    NSView *_wrapperView;
    IBImageButton *_closeButton;
    NSValue *_pinnedKnob;
    NSView *_pinnedDescendantView;
    NSGestureRecognizer *_navigationMenuGestureRecognizer;
    struct CGPoint _pinningPoint;
}

@property(retain) NSGestureRecognizer *navigationMenuGestureRecognizer; // @synthesize navigationMenuGestureRecognizer=_navigationMenuGestureRecognizer;
@property(nonatomic, getter=isVerticallyResizable) BOOL verticallyResizable; // @synthesize verticallyResizable=_verticallyResizable;
@property(nonatomic, getter=isHorizontallyResizable) BOOL horizontallyResizable; // @synthesize horizontallyResizable=_horizontallyResizable;
@property(nonatomic) struct CGPoint pinningPoint; // @synthesize pinningPoint=_pinningPoint;
@property(retain, nonatomic) NSView *pinnedDescendantView; // @synthesize pinnedDescendantView=_pinnedDescendantView;
@property(retain, nonatomic) NSValue *pinnedKnob; // @synthesize pinnedKnob=_pinnedKnob;
@property(retain, nonatomic) IBImageButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(readonly) IBSceneUpdateContentView *contentView; // @synthesize contentView=_contentView;
@property(copy) NSString *title; // @synthesize title=_title;
@property(retain) IBEditorCanvasFrameController *controller; // @synthesize controller=_controller;
@property(copy) NSEvent *lastMouseDown; // @synthesize lastMouseDown=_lastMouseDown;
- (void).cxx_destruct;
- (id)knobButtonImageForState:(unsigned long long)arg1 knob:(CDUnion_31865a80)arg2;
- (BOOL)imageButton:(id)arg1 interceptMouseDown:(id)arg2;
- (void)dragKnob:(CDUnion_31865a80)arg1 withMouseDown:(id)arg2;
- (BOOL)isDrawingCachingEnabled;
- (void)enableDrawingCaching;
- (void)disableDrawingCaching;
- (void)updateGrowKnobsVisibility;
- (void)layoutGrowKnobs;
- (void)setAllGrowKnobsVisible:(BOOL)arg1;
- (void)setGrowKnob:(CDUnion_31865a80)arg1 isVisible:(BOOL)arg2;
- (void)setAllGrowKnobsAreEnabled:(BOOL)arg1;
- (void)setGrowKnob:(CDUnion_31865a80)arg1 isEnabled:(BOOL)arg2;
- (BOOL)isGrowKnobEnabled:(CDUnion_31865a80)arg1;
- (BOOL)isAxisForKnobResizable:(CDUnion_31865a80)arg1;
- (id)resizingGripViewForKnob:(CDUnion_31865a80)arg1;
- (void)hasKeyLookDidChange;
- (BOOL)isSubviewHittable:(id)arg1;
- (void)canvasElementFrameResizingTest:(id)arg1;
- (void)canvasElementMovingTest:(id)arg1;
- (void)canvasFrameResizingTest:(id)arg1;
- (struct CGSize)sizeForKnob:(CDUnion_31865a80)arg1;
- (void)document:(id)arg1 willRunArbitrationOfUnits:(id)arg2;
- (void)didCompleteLayout;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)draggedImageState:(id)arg1;
- (id)defaultDragImageState:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3 withException:(id)arg4 shouldSlideBack:(char *)arg5;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3 shouldSlideBack:(char *)arg4;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2 operation:(unsigned long long)arg3 previousOperation:(unsigned long long)arg4;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)dvt_autoscrollWithExternalDragEvent:(id)arg1 animate:(BOOL)arg2;
- (BOOL)isVerticallyResizableForCanvasAlignment;
- (BOOL)isHorizontallyResizableForCanvasAlignment;
- (CDStruct_c519178c)canvasAlignmentInset;
- (id)accessibilityRoleDescription;
- (id)accessibilityLabel;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityChildren;
- (BOOL)isAccessibilityElement;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGRect)boundsForHitTesting;
- (BOOL)isEligibleForBandSelection;
- (BOOL)shouldIncludeParentWhenScrollingToVisible;
- (void)positionChildFrames;
- (void)layoutBottomUp;
- (struct CGRect)knobPerimeter;
- (void)layoutTopDown;
- (struct CGRect)closeButtonRect;
- (struct CGRect)bezelRect;
- (struct CGRect)contentRect;
- (BOOL)isFlipped;
- (struct CGRect)frameToFitDocumentViewPinningKnob:(CDUnion_31865a80)arg1;
- (struct CGSize)sizeForDocumentSize:(struct CGSize)arg1;
- (CDStruct_c519178c)bezelInset;
- (CDStruct_c519178c)contentInset;
- (void)flagsChanged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)handleNavigationMenuGesture:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)updateTrackingAreas;
- (void)close;
- (void)willRemoveFromCanvas;
- (void)didAddToCanvas;
- (BOOL)suportsIndependentPositioning;
- (BOOL)shouldDragFrameWithMouseDown:(id)arg1;
- (void)closeFrameButtonClicked:(id)arg1;
- (id)deviceBezel;
@property(retain, nonatomic) NSView *documentView;
@property(readonly, nonatomic) NSView *sceneSpaceView;
- (void)invokeWithPinnedKnob:(CDUnion_31865a80)arg1 block:(CDUnknownBlockType)arg2;
- (void)setAnchor:(struct CGPoint)arg1;
@property(nonatomic) BOOL showSceneMask;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

