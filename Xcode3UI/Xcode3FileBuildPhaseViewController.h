//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildPhaseViewController.h>

#import <Xcode3UI/IDEFilePickerViewDelegate-Protocol.h>
#import <Xcode3UI/NSTableViewDataSource-Protocol.h>
#import <Xcode3UI/Xcode3BuildPhaseFiltering-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTTableView, IDEFilePickerPanel, IDENavigableItem, IDENavigableItemSyncFilteringCoordinator, IDENavigatorDataCell, NSArray, NSPredicate, NSString, NSTimer, Xcode3BuildFileGroup;

@interface Xcode3FileBuildPhaseViewController : Xcode3BuildPhaseViewController <NSTableViewDataSource, Xcode3BuildPhaseFiltering, IDEFilePickerViewDelegate>
{
    DVTTableView *_tableView;
    DVTBorderedView *_tableBorder;
    Xcode3BuildFileGroup *_group;
    IDENavigableItemSyncFilteringCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_rootNavigableItem;
    IDENavigatorDataCell *_nameWithPathCell;
    IDENavigatorDataCell *_nameCell;
    NSArray *_selectedItems;
    unsigned long long _arrangedItemCount;
    NSTimer *_autoscrollTimer;
    NSString *_searchString;
    NSString *_emptyContentString;
    DVTObservingToken *_arrangedChildItemsToken;
    DVTObservingToken *_roleObserver;
    id _navigableItemPropertyObserver;
    BOOL _loadedView;
    IDEFilePickerPanel *_filePickerPanel;
    DVTObservingToken *_themeObserver;
}

+ (id)_attributesForHighlightedPathString;
+ (id)_attributesForPathString;
+ (id)_attributesForHighlightedNameString;
+ (id)_attributesForNameString;
+ (id)_standardFileDragTypes;
+ (id)keyPathsForValuesAffectingHasSearchResults;
+ (id)keyPathsForValuesAffectingCanRemoveItems;
+ (id)keyPathsForValuesAffectingTitleForDisplay;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
@property(readonly) DVTBorderedView *tableBorder; // @synthesize tableBorder=_tableBorder;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly) DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly) Xcode3BuildFileGroup *buildFileGroup; // @synthesize buildFileGroup=_group;
@property(copy) NSString *emptyContentString; // @synthesize emptyContentString=_emptyContentString;
@property unsigned long long arrangedItemCount; // @synthesize arrangedItemCount=_arrangedItemCount;
@property(copy) NSArray *_selectedItems; // @synthesize _selectedItems;
@property(readonly) IDENavigableItem *_rootNavigableItem; // @synthesize _rootNavigableItem;
- (void).cxx_destruct;
@property(readonly) unsigned long long itemCount;
- (void)_updateArrangedItemCount;
- (id)_tableMenu;
- (id)contextMenuSelection;
- (id)outputSelection;
- (id)_tooltipForRoleColumnForBuildFile:(id)arg1;
- (id)_objectValueForRoleColumnOfBuildFile:(id)arg1;
- (id)_dataCellForRoleOfBuildFile:(id)arg1;
- (id)_nameCell;
- (id)_nameWithPathCell;
- (void)_resizeView;
- (void)_updateSelectedItems;
- (void)_editSettingsForRows:(id)arg1;
- (void)_autoscrollTimerCallback:(id)arg1;
- (unsigned long long)_rowForItem:(id)arg1;
- (id)_itemAtRow:(unsigned long long)arg1;
@property(readonly) BOOL _displayFullPath;
- (id)_draggedURLsForDropOperation:(id)arg1;
- (id)_draggedItemsForDropOperation:(id)arg1;
- (id)_draggedInternalItemsForDropOperation:(id)arg1;
- (BOOL)_dragIsInternal:(id)arg1;
- (BOOL)_tryToChangeBuildFileRoleWithGroup:(id)arg1 checkOnly:(BOOL)arg2;
- (BOOL)_acceptDrop:(id)arg1 onGroup:(id)arg2 proposedRow:(unsigned long long)arg3;
- (BOOL)_insertItemsIntoGroup:(id)arg1 atRow:(unsigned long long)arg2 contextConfigurationBlock:(CDUnknownBlockType)arg3;
- (BOOL)_insertItemsIntoGroup:(id)arg1 atRow:(unsigned long long)arg2 structureEditingTarget:(id)arg3 contextConfigurationBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)_validateDrop:(id)arg1 proposedGroup:(id)arg2;
- (unsigned long long)_validateDropViaStructureEditingForInfo:(id)arg1;
- (void)_updateToModernTableHeaders;
- (void)tableView:(id)arg1 draggingDidEnd:(id)arg2;
- (void)tableView:(id)arg1 draggingDidEnter:(id)arg2;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)shouldDrawBorderBelowHeaderForCapsuleView:(id)arg1;
- (BOOL)capsuleView:(id)arg1 acceptDrop:(id)arg2;
- (unsigned long long)capsuleView:(id)arg1 validateDrop:(id)arg2;
- (id)supportedDragTypes;
- (id)titleForDisplay;
- (BOOL)_isFiltered;
- (void)selectLocations:(id)arg1;
- (id)currentSelectedLocations;
- (id)placeholderTitleForGroup:(id)arg1;
- (BOOL)filePickerView:(id)arg1 outlineView:(id)arg2 isItemExpandable:(id)arg3;
- (void)_filePickerPanel:(id)arg1 completedWithResult:(unsigned long long)arg2;
- (id)referencesToAddForContainerItems:(id)arg1;
@property(readonly) NSPredicate *filePickerItemFilter;
- (id)rootItemsForFilePickerPanel;
- (void)configureFilePickerPanel:(id)arg1;
@property(readonly) BOOL hasSearchResults;
- (BOOL)validateMenuItem:(id)arg1;
- (void)contextMenu_revealInProjectNavigator:(id)arg1;
- (void)revealInProjectNavigator:(id)arg1;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)_reloadData;
- (void)contextMenu_moveSelectedItems:(id)arg1;
- (void)moveSelectedItems:(id)arg1;
- (BOOL)canRemoveItems;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (void)editSettings:(id)arg1;
- (void)_setAttributeOfSelectedBuildFiles:(id)arg1 toBoolValue:(BOOL)arg2;
- (void)_setRoleOfSelectedBuildFilesToString:(id)arg1;
- (BOOL)_canSetRole;
- (void)_showHeaderView;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithBuildFileGroup:(id)arg1 ofBuildPhase:(id)arg2;
- (id)initWithBuildPhase:(id)arg1;
- (void)primitiveInvalidate;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

