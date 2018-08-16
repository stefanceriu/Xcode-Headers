//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelEditor/XDGraphicAuxiliaryStorage.h>

@class NSMutableIndexSet, XDCompartmentItem;

@interface XDCompartmentGraphicAuxiliaryStorage : XDGraphicAuxiliaryStorage
{
    long long _selectedCompartmentIndex;
    NSMutableIndexSet *_selectedItems;
    long long _originalSelectedCompartmentIndex;
    NSMutableIndexSet *_originalSelectedItems;
    long long _mouseOverCompartmentIndex;
    long long _mouseOverCompartmentItemIndex;
    long long _clickedCompartmentIndex;
    long long _clickedCompartmentItemIndex;
    XDCompartmentItem *_clickedCompartmentItem;
    struct _XDCompartmentGraphicAuxiliaryStorageFlags _cgasFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)clickedCompartmentItem;
- (void)setClickedCompartmentItem:(id)arg1;
- (long long)clickedCompartmentItemIndex;
- (void)setClickedCompartmentItemIndex:(long long)arg1;
- (long long)clickedCompartmentIndex;
- (void)setClickedCompartmentIndex:(long long)arg1;
- (long long)mouseOverCompartmentItemIndex;
- (void)setMouseOverCompartmentItemIndex:(long long)arg1;
- (long long)mouseOverCompartmentIndex;
- (void)setMouseOverCompartmentIndex:(long long)arg1;
- (id)selectedItemsEnumerator;
- (long long)numberOfSelectedItems;
- (long long)indexOfSelectedItem;
- (BOOL)isItemAtIndex:(long long)arg1 selectedInCompartmentAtIndex:(long long)arg2;
- (void)_deselectAll;
- (void)_selectAll;
- (void)deselectItemAtIndex:(long long)arg1 inCompartmentAtIndex:(long long)arg2;
- (void)selectItemAtIndex:(long long)arg1 inCompartmentAtIndex:(long long)arg2 byExtendingSelection:(BOOL)arg3;
- (void)_postSelectionDidChangeNotification;
- (BOOL)_enableSelectionPostingAndPost;
- (void)_disableSelectionPosting;
- (long long)indexOfSelectedCompartment;
- (void)dealloc;
- (id)initWithGraphic:(id)arg1 diagramView:(id)arg2;

@end

