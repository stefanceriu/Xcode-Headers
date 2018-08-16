//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEProjectItemViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTObservingToken, DVTTableView, NSArrayController, Xcode3KeychainItemModel;

@interface Xcode3KeychainItemViewController : IDEProjectItemViewController
{
    DVTObservingToken *_itemObserver;
    DVTBorderedView *_tableBorder;
    DVTTableView *_groupsTable;
    DVTGradientImageButton *_addGroupButton;
    DVTGradientImageButton *_deleteGroupButton;
    NSArrayController *_groupsController;
}

@property(retain) NSArrayController *groupsController; // @synthesize groupsController=_groupsController;
@property(retain) DVTGradientImageButton *deleteGroupButton; // @synthesize deleteGroupButton=_deleteGroupButton;
@property(retain) DVTGradientImageButton *addGroupButton; // @synthesize addGroupButton=_addGroupButton;
@property(retain) DVTTableView *groupsTable; // @synthesize groupsTable=_groupsTable;
@property(retain) DVTBorderedView *tableBorder; // @synthesize tableBorder=_tableBorder;
- (void).cxx_destruct;
- (void)removeSelectedGroups:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)layout;
- (void)themeChanged:(id)arg1;
- (void)loadView;
- (id)headerColor;
- (id)initWithEditorItemModel:(id)arg1 portalInfoDelegate:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) Xcode3KeychainItemModel *model; // @dynamic model;

@end

