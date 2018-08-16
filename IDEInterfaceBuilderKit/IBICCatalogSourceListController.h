//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEInterfaceBuilderKit/DVTMainViewControllerDrawingStrategyDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/DVTStatefulObject-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICCatalogItemObserver-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICCommandMenuDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICSourceListOutlineViewDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBSelectionChannelApplicator-Protocol.h>
#import <IDEInterfaceBuilderKit/NSOutlineViewDataSource-Protocol.h>

@class DVTBorderedView, DVTDelayedInvocation, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTMainViewControllerDrawingStrategy, DVTSearchField, IBICCatalogDocumentEditor, IBICCommandMenuBuilder, IBICOutlineViewItem, IBICSourceListOutlineView, IBOutlineViewImageAndTextCell, IBSelectionChannel, IBSelectionChannelContext, NSArray, NSSet, NSString;
@protocol IBInvalidation;

@interface IBICCatalogSourceListController : IDEViewController <IBICCatalogItemObserver, IBSelectionChannelApplicator, NSOutlineViewDataSource, IBICSourceListOutlineViewDelegate, DVTStatefulObject, DVTMainViewControllerDrawingStrategyDelegate, IBICCommandMenuDelegate>
{
    IBOutlineViewImageAndTextCell *_prototypeCell;
    IBOutlineViewImageAndTextCell *_prototypeGroupCell;
    IBSelectionChannelContext *_pendingSelectionApplicationContext;
    DVTMainViewControllerDrawingStrategy *_mainViewControllerDrawingStrategy;
    BOOL _applyingStateToOutlineView;
    id <IBInvalidation> _treeObservationToken;
    DVTDelayedInvocation *_outlineValidator;
    NSSet *_pendingStateRestorationItemIDsToExpand;
    NSSet *_draggedItems;
    NSString *_previousFilterText;
    NSString *_filterText;
    NSArray *_filterComponents;
    IBICOutlineViewItem *_rootOutlineItem;
    BOOL _isApplyingExpansionState;
    IBICCommandMenuBuilder *_addButtonMenuBuilder;
    IBICCommandMenuBuilder *_contextClickMenuBuilder;
    IBICCatalogDocumentEditor *_documentEditor;
    IBSelectionChannel *_selectionChannel;
    IBICSourceListOutlineView *_outlineView;
    DVTSearchField *_searchField;
    DVTBorderedView *_outlineBorderedView;
    DVTBorderedView *_searchBorderedView;
    DVTGradientImagePopUpButton *_addButton;
    DVTGradientImageButton *_removeButton;
    NSSet *_previousStateRestorationExpandedItemIDs;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultSelectionChannelContext;
@property(copy, nonatomic) NSSet *previousStateRestorationExpandedItemIDs; // @synthesize previousStateRestorationExpandedItemIDs=_previousStateRestorationExpandedItemIDs;
@property(retain, nonatomic) DVTGradientImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) DVTGradientImagePopUpButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) DVTBorderedView *searchBorderedView; // @synthesize searchBorderedView=_searchBorderedView;
@property(retain, nonatomic) DVTBorderedView *outlineBorderedView; // @synthesize outlineBorderedView=_outlineBorderedView;
@property(retain, nonatomic) DVTSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) IBICSourceListOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(readonly) IBSelectionChannel *selectionChannel; // @synthesize selectionChannel=_selectionChannel;
@property(readonly) IBICCatalogDocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)catalogItemsForOutlineViewItems:(id)arg1;
- (void)selectionChannel:(id)arg1 applySelection:(id)arg2 previousSelection:(id)arg3 context:(id)arg4;
- (void)removeImageCatalogItemsBasedOnSourceItemsContext:(id)arg1;
- (void)updateFilter:(id)arg1;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)removeSelectedOutlineViewItems;
- (id)sourceItemsActionContext;
- (id)contextClickActionContext;
- (BOOL)abortEditingInOutlineView;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)removePendingDraggedItemsIfAppropriateForDragOperation:(unsigned long long)arg1;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (unsigned long long)dragOperationForTargetingItem:(id)arg1 withDragInfo:(id)arg2;
- (void)outlineViewDidBecomeFirstResponder:(id)arg1;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)isGroupOutlineItem:(id)arg1;
- (id)filteredOrderedChildrenOfOutlineViewItem:(id)arg1;
- (id)prototypeGroupCell;
- (id)prototypeCell;
- (void)batchedReloadOutlineView:(id)arg1;
- (void)applyExpansionStateToStateSaving;
- (void)applySelectionAndScrollToVisibleIfNeeded;
- (void)applyExpansionStateFromOutlineViewItemsToOutlineView;
- (void)applyPendingExpansionStateChangesToOutlineItems;
- (void)applyStateRestorationExpansionStateToOutlineItemsForBatchedUpdate;
- (void)applyMakingSelectedItemsVisibleToOutlineItemsForBatchedUpdate;
- (id)outlineViewItemsForCatalogItems:(id)arg1 applyingFilter:(BOOL)arg2;
- (void)imageCatalogItemDidChangeDisplayProperties:(id)arg1;
- (void)imageCatalogItemDiskContentsDidChange:(id)arg1;
- (void)documentEditorDidChangeSourceItems;
- (void)imageCatalogItemWillChangeDisplayOrderedChildren:(id)arg1;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)mainViewControllerDrawingStrategyActivationStateDidChange:(id)arg1;
- (id)catalog;
- (id)document;
- (void)takeFocus;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (BOOL)canBecomeMainViewController;
- (void)loadView;
- (void)configureOutlineView;
- (void)configureFilterBar;
- (id)commandMenuBuilderActionContext:(id)arg1;
- (id)commandMenuBuilderDocumentEditor:(id)arg1;
- (void)configureSearchField;
- (void)primitiveInvalidate;
- (id)initWithDocumentEditor:(id)arg1;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

