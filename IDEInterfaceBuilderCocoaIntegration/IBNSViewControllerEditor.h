//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBViewEditor.h>

@class NSSet;

@interface IBNSViewControllerEditor : IBViewEditor
{
    NSSet *_observers;
}

+ (Class)ibDropTargetResolverClass;
@property(retain) NSSet *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (void)willClose;
- (void)didOpen;
- (void)_teardownObservations;
- (void)_setupObservations;
- (id)viewControllerEditorView;
- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(CDUnion_42e99c75)arg2;
- (id)viewEditorFrameController;
- (id)viewToTrackForFrameResizing;
- (id)editedView;
- (id)editedNSViewController;

@end

