//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class DVTStackView_ML, IBMenuItemEditorView, IBMutableIdentityDictionary, NSArray, NSFont, NSSet;

@interface IBMenuEditorView : DVTLayoutView_ML
{
    IBMenuItemEditorView *_itemViewDrawingKeyEquivalentRect;
    IBMutableIdentityDictionary *_representedObjectsToItems;
    IBMutableIdentityDictionary *_itemsToViews;
    DVTStackView_ML *_itemStack;
    NSSet *_selectedItems;
    BOOL _rebuildViewList;
    BOOL _mainMenuOrDescendantOfMainMenu;
    NSFont *_font;
    double _minimumFixedDimensionMagnitude;
    NSArray *_menuItemViews;
}

@property(readonly) NSArray *menuItemViews; // @synthesize menuItemViews=_menuItemViews;
@property(nonatomic) double minimumFixedDimensionMagnitude; // @synthesize minimumFixedDimensionMagnitude=_minimumFixedDimensionMagnitude;
@property(nonatomic, getter=isMainMenuOrDescendantOfMainMenu) BOOL mainMenuOrDescendantOfMainMenu; // @synthesize mainMenuOrDescendantOfMainMenu=_mainMenuOrDescendantOfMainMenu;
@property(copy, nonatomic) NSFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)copyForDisplayingMenu:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGRect)paddingRectWithMagnitude:(double)arg1;
- (id)distanceToDragToRemoveItem;
- (id)distanceToDragToAddItem;
- (double)maxEdgeInset;
- (double)minEdgeInset;
- (double)itemPadding;
- (struct CGRect)editingTitleRectForRepresentedObject:(id)arg1;
- (struct CGRect)stateImageHitTestRectForRepresentedObject:(id)arg1;
- (struct CGRect)keyEquivalentHitTestRectForRepresentedObject:(id)arg1;
- (struct CGRect)frameForMenuItemWithRepresentedObject:(id)arg1;
- (int)layoutDirection;
- (id)createMenuItemEditorViewForMenuItem:(id)arg1;
- (Class)menuItemEditorViewClass;
- (id)representedObjectAtPoint:(struct CGPoint)arg1;
- (id)menuItemViewAtPoint:(struct CGPoint)arg1;
- (void)setSelectedItems:(id)arg1;
- (id)itemsWithRepresentedObjects:(id)arg1;
- (id)viewForRepresentedObject:(id)arg1;
- (id)menuItemForRepresentedObject:(id)arg1;
- (id)viewForMenuItem:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setDrawsKeyEquivalentRectForItemWithRepresentedObject:(id)arg1;
- (id)initWithMenu:(id)arg1;

@end

