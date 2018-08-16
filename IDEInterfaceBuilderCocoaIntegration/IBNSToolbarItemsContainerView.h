//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class IBMutableIdentityDictionary, IBNSToolbarConfigurationView, IBToolbarItemView, NSArray, NSEvent, NSMutableArray;
@protocol IBNSToolbarItemsContainerViewDelegate;

@interface IBNSToolbarItemsContainerView : DVTLayoutView_ML
{
    IBMutableIdentityDictionary *_viewsByToolbarItem;
    NSMutableArray *_orderedItemViews;
    NSArray *_preDragOrderedItemViews;
    IBToolbarItemView *_draggedItem;
    NSMutableArray *_layoutMatrix;
    NSEvent *_lastMouseDown;
    NSMutableArray *_items;
    NSArray *_preDragItems;
    IBNSToolbarItemsContainerView *_itemsContainerCounterpart;
    IBNSToolbarConfigurationView *_configurationView;
    id <IBNSToolbarItemsContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IBNSToolbarItemsContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) IBNSToolbarConfigurationView *configurationView; // @synthesize configurationView=_configurationView;
@property(retain, nonatomic) IBNSToolbarItemsContainerView *itemsContainerCounterpart; // @synthesize itemsContainerCounterpart=_itemsContainerCounterpart;
- (void).cxx_destruct;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (long long)dropIndexForPoint:(struct CGPoint)arg1 forItemAtIndex:(long long)arg2;
- (unsigned long long)dragOperationForDragInfo:(id)arg1;
- (void)dragItemView:(id)arg1 withMouseDown:(id)arg2 mouseDragged:(id)arg3;
- (id)toolbarItemFromPasteboardData:(id)arg1;
- (id)dataForSerializingToolbarItem:(id)arg1;
- (BOOL)supportsDragFromCounterpart;
- (id)localPasteboardType;
- (id)hitTest:(struct CGPoint)arg1;
- (void)layoutBottomUp;
- (id)layoutItems:(id)arg1 inRect:(struct CGRect)arg2;
@property(readonly, nonatomic) BOOL wraps;
- (void)viewDidMoveToWindow;
- (id)itemViewAtPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)addItem:(id)arg1;
- (void)removeAllItems;
- (void)removeItemRepresentedByItemView:(id)arg1;
- (id)generateItemViewForToolbarItem:(id)arg1;
- (BOOL)isFlipped;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)canAddToolbarItem:(id)arg1;
- (id)toolbarItemForItemView:(id)arg1;
- (id)firstViewForItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithItems:(id)arg1;
- (void)toolbarItemsContainerViewCommonInit;

@end

