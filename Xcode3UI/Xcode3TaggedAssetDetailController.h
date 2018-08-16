//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <Xcode3UI/IDEFilePickerViewDelegate-Protocol.h>
#import <Xcode3UI/NSMenuDelegate-Protocol.h>
#import <Xcode3UI/NSTableViewDataSource-Protocol.h>
#import <Xcode3UI/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTTableView, IDEFilePickerPanel, NSButton, NSMenu, NSString, Xcode3AssetNavigatorDataCell, Xcode3AssetRow, Xcode3AssetTagsEditor;

@interface Xcode3TaggedAssetDetailController : IDEViewController <NSMenuDelegate, NSTableViewDataSource, NSTableViewDelegate, IDEFilePickerViewDelegate>
{
    BOOL _canRemoveItems;
    Xcode3AssetNavigatorDataCell *_nameWithPathCell;
    NSMenu *_assetTagsMenu;
    IDEFilePickerPanel *_filePickerPanel;
    DVTObservingToken *_themeObserver;
    BOOL _editable;
    Xcode3AssetRow *_assetRow;
    Xcode3AssetTagsEditor *_parent;
    unsigned long long _size;
    NSButton *_removeButton;
    DVTBorderedView *_tableBorder;
    DVTTableView *_tableView;
}

@property(retain, nonatomic) DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) DVTBorderedView *tableBorder; // @synthesize tableBorder=_tableBorder;
@property(nonatomic) BOOL editable; // @synthesize editable=_editable;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) __weak Xcode3AssetTagsEditor *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) Xcode3AssetRow *assetRow; // @synthesize assetRow=_assetRow;
- (void).cxx_destruct;
- (void)filePickerView:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4 item:(id)arg5;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)isValidODRFileReferenceForTarget:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)loadView;
- (void)removeFromTag:(id)arg1;
- (void)modifyTagMembershipViaMenu:(id)arg1;
- (void)revealInProjectNavigator:(id)arg1;
- (void)openWithExternalEditor:(id)arg1;
- (void)revealInFinder:(id)arg1;
- (BOOL)canRemoveItems;
- (void)setCanRemoveItems:(BOOL)arg1;
- (BOOL)canAddItems;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (id)URLsForContextMenuReturningBaseURLs:(BOOL)arg1;
- (id)itemRowsForContextMenu;
- (void)configureFilePickerPanel:(id)arg1;
- (id)filePickerSelectableItemFilter;
- (id)filePickerItemFilter;
- (id)rootItemsForFilePickerPanel;
- (void)_resizeView;
- (void)menuNeedsUpdate:(id)arg1;
- (id)_nameWithPathCell;
- (void)primitiveInvalidate;
- (id)initWithAssetRow:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

