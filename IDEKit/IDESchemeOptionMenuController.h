//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class IDEWorkspaceTabController, NSArray, NSMenu, NSString;

@interface IDESchemeOptionMenuController : NSObject <NSMenuDelegate>
{
    BOOL _validateMenuItems;
    int _extraItems;
    IDEWorkspaceTabController *_tabController;
    CDUnknownBlockType _itemWasSelectedCallback;
    CDUnknownBlockType _menuWasUpdatedCallback;
    CDUnknownBlockType _willAddFileCallback;
    CDUnknownBlockType _didAddFilesCallback;
    id _additionContext;
    NSMenu *_menu;
    CDUnknownBlockType _enabledCallback;
    NSArray *_itemsForFilesInWorkspace;
    NSArray *_defaultItems;
    NSString *_menuTitle;
    NSString *_doNothingItemTitle;
    id _doNothingItemRepresentedObject;
    NSString *_uti;
    NSString *_fileExtension;
}

@property(readonly) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(readonly) NSString *uti; // @synthesize uti=_uti;
@property(readonly) id doNothingItemRepresentedObject; // @synthesize doNothingItemRepresentedObject=_doNothingItemRepresentedObject;
@property(readonly) NSString *doNothingItemTitle; // @synthesize doNothingItemTitle=_doNothingItemTitle;
@property(readonly) NSString *menuTitle; // @synthesize menuTitle=_menuTitle;
@property(readonly) NSArray *defaultItems; // @synthesize defaultItems=_defaultItems;
@property(readonly) NSArray *itemsForFilesInWorkspace; // @synthesize itemsForFilesInWorkspace=_itemsForFilesInWorkspace;
@property(copy) CDUnknownBlockType enabledCallback; // @synthesize enabledCallback=_enabledCallback;
@property(retain) id additionContext; // @synthesize additionContext=_additionContext;
@property(copy) CDUnknownBlockType didAddFilesCallback; // @synthesize didAddFilesCallback=_didAddFilesCallback;
@property(copy) CDUnknownBlockType willAddFileCallback; // @synthesize willAddFileCallback=_willAddFileCallback;
@property(copy) CDUnknownBlockType menuWasUpdatedCallback; // @synthesize menuWasUpdatedCallback=_menuWasUpdatedCallback;
@property(copy) CDUnknownBlockType itemWasSelectedCallback; // @synthesize itemWasSelectedCallback=_itemWasSelectedCallback;
@property(retain, nonatomic) IDEWorkspaceTabController *tabController; // @synthesize tabController=_tabController;
@property(nonatomic) int extraItems; // @synthesize extraItems=_extraItems;
@property BOOL validateMenuItems; // @synthesize validateMenuItems=_validateMenuItems;
- (void).cxx_destruct;
- (void)attachToMenu:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_updateMenu:(id)arg1;
- (void)newFile:(id)arg1;
- (void)addFile:(id)arg1;
- (void)selectItem:(id)arg1;
- (void)_selectItemWithRepresentedObject:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)_buildMenu;
- (id)_filesInWorkspaceMatchingUTI;
- (unsigned long long)_indexOfIconItem;
- (unsigned long long)_indexOfDoNothingItem;
- (unsigned long long)_indexOfNoneItem;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

