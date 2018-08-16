//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBPrimarySceneObject-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class IBSimulatedMetricsContainer, NSArray, NSString, NSView;

@interface IBAbstractViewController : NSObject <IBPrimarySceneObject, NSCoding>
{
}

@property(copy, nonatomic) IBSimulatedMetricsContainer *inheritedSimulatedMetrics;
@property(copy) NSArray *storyboardSegueTemplates;
@property(copy) NSString *explicitStoryboardIdentifier;
- (void)setNibName:(id)arg1;
- (id)nibName;
@property(retain, nonatomic) NSView *view;
- (struct CGSize)effectiveSimulatedViewSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibChildEditsWithSingleClick:(id)arg1;
- (id)ibShortDisplayName;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewDetailWithSegue:(id)arg2;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewMasterWithSegue:(id)arg2;
- (BOOL)ibIsValidPushReceiver;
- (BOOL)ibInspectedIsNotInStoryboard;
- (BOOL)ibInspectedIsInStoryboard;
- (BOOL)ibSegueTemplatesAreTopLevel;
- (void)ibResizeToEffectiveSimulatedSizeForSceneTreeDragImageNode;
@property(nonatomic) BOOL ibInspectedIsDesignatedEntryPoint;
- (BOOL)ibIsUnreachableInStoryboard;
- (BOOL)ibCanBeValidSegueDestination;
- (BOOL)ibIsPrimarySceneObjectInStoryboard;
- (void)ibDidPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (BOOL)ibSupportsMultipleSeguesFromTrigger:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibStoryboardPrepareForSeparatingChild:(id)arg1 intoCompilationUnit:(id)arg2;
- (int)ibStoryboardSeparationTypeForChild:(id)arg1 storyboardEquivalent:(id)arg2;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (struct CGSize)effectiveSimulatedContentSize;
- (id)ibEditorViewWithSuggestedSize:(struct CGSize)arg1 forDocument:(id)arg2;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (void)ibDidBecomeControllerForCompilationGroup;
- (void)ibAddStoryboardSegueTemplate:(id)arg1;
- (void)ibWillResignSourceControllerForSegue:(id)arg1;
- (void)ibDidBecomeSourceControllerForSegue:(id)arg1;
- (id)ibInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (id)ibImageForOwnedScene;
@property(copy, nonatomic) NSString *ibExplicitStoryboardIdentifier;
- (void)ibVerifySimulatedMetricsWithDocument:(id)arg1;
- (id)ibExplanatoryTextForEditor;
- (id)ibSubtitleForEditor;
- (id)ibTitleForEditor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

