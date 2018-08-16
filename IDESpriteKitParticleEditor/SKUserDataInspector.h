//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

#import <IDESpriteKitParticleEditor/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, IDEControlGroup, NSArray, NSButton, NSDictionary, NSIndexSet, NSMenu, NSString, NSTableView, SKNode, SKTileDefinition;

@interface SKUserDataInspector : IDEInspectorViewController <NSTableViewDelegate>
{
    NSDictionary *_customUserDataTypes;
    NSButton *_removeButton;
    BOOL _editSelectedRowAfterRefresh;
    DVTObservingToken *_selectionObserver;
    BOOL _reloadingData;
    NSIndexSet *_rowIndexesToSelectAfterRefresh;
    NSArray *_userDefinedRuntimeUserData;
    NSString *_currentPasteboardDragMarker;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlBar;
    NSTableView *_userDataTableView;
    NSMenu *_typeMenu;
    SKNode *_editingNode;
    SKTileDefinition *_editingDefinition;
}

+ (BOOL)supportsMultipleObjectInspection;
@property(nonatomic) __weak SKTileDefinition *editingDefinition; // @synthesize editingDefinition=_editingDefinition;
@property(nonatomic) __weak SKNode *editingNode; // @synthesize editingNode=_editingNode;
@property(retain, nonatomic) NSMenu *typeMenu; // @synthesize typeMenu=_typeMenu;
@property(retain, nonatomic) NSTableView *userDataTableView; // @synthesize userDataTableView=_userDataTableView;
@property(retain, nonatomic) DVTBorderedView *controlBar; // @synthesize controlBar=_controlBar;
@property(retain, nonatomic) IDEControlGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(nonatomic, getter=isReloadingData) BOOL reloadingData; // @synthesize reloadingData=_reloadingData;
@property(copy, nonatomic) NSString *currentPasteboardDragMarker; // @synthesize currentPasteboardDragMarker=_currentPasteboardDragMarker;
@property(copy, nonatomic) NSArray *userDefinedRuntimeUserData; // @synthesize userDefinedRuntimeUserData=_userDefinedRuntimeUserData;
@property(retain, nonatomic) NSIndexSet *rowIndexesToSelectAfterRefresh; // @synthesize rowIndexesToSelectAfterRefresh=_rowIndexesToSelectAfterRefresh;
- (void).cxx_destruct;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 removeRowsWithIndexes:(id)arg2;
- (BOOL)tableView:(id)arg1 canRemoveRowsWithIndexes:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)editTexture:(id)arg1;
- (void)editValue:(id)arg1;
- (void)editType:(id)arg1;
- (void)editName:(id)arg1;
- (void)editUserDataForSender:(id)arg1 editBlock:(CDUnknownBlockType)arg2;
- (void)doubleClickedTableView:(id)arg1;
- (void)removeUserDataItem:(id)arg1;
- (void)addUserDataItem:(id)arg1;
- (id)newUserDataFromType:(unsigned long long)arg1 Value:(id)arg2 Name:(id)arg3;
- (void)refreshRemoveButtonEnabledState;
- (id)selectedUserData;
- (id)defaultType;
- (id)userDefinedRuntimeUserDataTypeForTypeIdentifier:(unsigned long long)arg1;
- (id)customUserDataTypes;
- (void)reloadTableViewDataIgnoringEditingActions;
- (id)contentLayoutView;
- (id)userDataDictionaryFromArray:(id)arg1;
- (id)userDataArrayFromDictionary:(id)arg1;
- (void)setContent:(id)arg1;
- (void)didSetInspectedObjects:(id)arg1;
- (void)loadView;
- (void)setupControlBarAfterLoading;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

