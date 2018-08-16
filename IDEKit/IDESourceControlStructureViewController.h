//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>

@class DVTBindingToken, DVTImageAndTextCell, DVTReplacementView, IDENavigableItem, IDENavigableItemAsyncFilteringCoordinator, IDENavigatorOutlineView, IDESourceControlTree, NSArray, NSDateFormatter, NSObject, NSPredicate, NSSplitView, NSString;
@protocol IDESourceControlStructureViewDelegate, OS_dispatch_queue;

@interface IDESourceControlStructureViewController : IDEViewController <DVTReplacementViewDelegate>
{
    NSSplitView *_mainSplitView;
    IDENavigatorOutlineView *_sourceTreeItemOutlineView;
    NSDateFormatter *_sourceTreeItemModificationDateFormatter;
    DVTReplacementView *_logReplacementView;
    NSObject<OS_dispatch_queue> *_serial_queue;
    id _branchSwitchObserver;
    int _scopeByStatus;
    BOOL _showIgnoredFiles;
    IDENavigableItemAsyncFilteringCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_rootNavigable;
    IDESourceControlTree *_sourceTree;
    id _selectedObject;
    NSArray *_selectedObjects;
    DVTImageAndTextCell *_prototypeCell;
    DVTImageAndTextCell *_prototypeBranchCell;
    DVTImageAndTextCell *_prototypeWorkingItemCell;
    id <IDESourceControlStructureViewDelegate> _delegate;
    DVTBindingToken *_contentArrayBindingToken;
    BOOL _showsLogViewOnSelection;
    NSPredicate *_selectableItemFilter;
    NSArray *__realExpandedItems;
}

+ (id)keyPathsForValuesAffectingSelectedObject;
+ (id)defaultViewNibName;
+ (void)initialize;
@property(retain) NSArray *_realExpandedItems; // @synthesize _realExpandedItems=__realExpandedItems;
@property BOOL showsLogViewOnSelection; // @synthesize showsLogViewOnSelection=_showsLogViewOnSelection;
@property(copy) NSPredicate *selectableItemFilter; // @synthesize selectableItemFilter=_selectableItemFilter;
@property(retain) id <IDESourceControlStructureViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *selectedObjects; // @synthesize selectedObjects=_selectedObjects;
@property(retain, nonatomic) IDENavigableItem *rootNavigable; // @synthesize rootNavigable=_rootNavigable;
@property(retain, nonatomic) IDESourceControlTree *sourceTree; // @synthesize sourceTree=_sourceTree;
- (void).cxx_destruct;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)refresh:(id)arg1;
- (void)doubleClickAction:(id)arg1;
- (void)scrollItemToVisible:(id)arg1;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
@property(readonly) id selectedObject; // @synthesize selectedObject=_selectedObject;
@property(retain) NSArray *expandedItems;
- (void)setRootRepository:(id)arg1;
- (void)setRootSourceTreeGroup:(id)arg1;
- (void)viewWillUninstall;
@property BOOL allowsMultipleSelection;
@property BOOL showsLogView;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)prototypeWorkingItemCell;
- (id)prototypeBranchCell;
- (id)prototypeCell;
- (void)configurePrototypCell:(id)arg1;
- (id)dvtExtraBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

