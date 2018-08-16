//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDragAndDropPolicyDelegate-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIOverlayViewDelegate-Protocol.h>

@class IBDragAndDropInsertionIndicator, IBOrderedRelationshipDragAndDropPolicy, IBUIOverlayView, IBUITabBar, IBUITabBarItem, NSArray, NSString;
@protocol IBUIStoryboardTabBarControllerArrangementViewDelegate;

@interface IBUIStoryboardTabBarControllerArrangementView : DVTLayoutView_ML <IBUIOverlayViewDelegate, IBDragAndDropPolicyDelegate>
{
    IBUIOverlayView *_overlayView;
    IBOrderedRelationshipDragAndDropPolicy *_tabBarItemInsertionPolicy;
    IBDragAndDropInsertionIndicator *_insertionIndicator;
    NSString *_uniquePasteboardType;
    id <IBUIStoryboardTabBarControllerArrangementViewDelegate> _delegate;
    IBUITabBarItem *_draggedTabBarItem;
    IBUITabBar *_tabBar;
}

@property(retain) IBUITabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain) IBUITabBarItem *draggedTabBarItem; // @synthesize draggedTabBarItem=_draggedTabBarItem;
@property __weak id <IBUIStoryboardTabBarControllerArrangementViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutTopDown;
- (id)overlayView:(id)arg1 hitTest:(struct CGPoint)arg2 defaultHit:(id)arg3;
- (void)overlayView:(id)arg1 drawRect:(struct CGRect)arg2;
- (struct CGRect)insertionPolicy:(id)arg1 confinementRectForRepresentedObject:(id)arg2;
- (struct CGRect)insertionPolicy:(id)arg1 dragAlignmentRectForObject:(id)arg2 relatedToRepresentedObject:(id)arg3;
- (struct CGRect)insertionPolicy:(id)arg1 rectInWindowSpaceForRepresentedObject:(id)arg2;
- (id)insertionPolicy:(id)arg1 orderedRelationForKeyPath:(id)arg2 representedObject:(id)arg3;
- (void)insertionPolicy:(id)arg1 orderedRelationInsertionIndexDidChange:(long long)arg2;
- (void)insertionPolicy:(id)arg1 orderedRelationInsertionIndexWillChange:(long long)arg2;
- (void)setNeedsDisplayInDragInsertionIndicatorRect;
- (void)draggingEnded:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)dragTabBarItem:(id)arg1 mouseDownEvent:(id)arg2;
- (BOOL)acceptTabBarItem:(id)arg1 atIndex:(long long)arg2;
- (id)dragImageForTabBarItem:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
@property(copy) NSArray *tabBarItems;
- (void)_setTabBarItems:(id)arg1;
- (void)synchronizeWithTabBar:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

