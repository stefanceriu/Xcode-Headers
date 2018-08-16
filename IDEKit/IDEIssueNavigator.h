//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>

@class DVTBorderedView, DVTNotificationToken, DVTObservingToken, DVTScopeBarView, DVTScrollView, DVTTableCellViewMultiLineHeightEstimator, DVTTimeSlicedMainThreadWorkQueue, NSArray, NSButton, NSMenuItem, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface IDEIssueNavigator : IDEOutlineBasedNavigator <DVTOutlineViewDelegate>
{
    DVTScopeBarView *_scopeBarView;
    NSButton *_scopeByBuildtimeButton;
    NSButton *_scopeByRuntimeButton;
    NSMenuItem *_viewByFileMenuItem;
    NSMenuItem *_viewByTypeMenuItem;
    NSMutableSet *_collapsedGroupsForStateSaving;
    NSMutableSet *_collapsedFilesForStateSaving;
    NSMutableSet *_collapsedTypesForStateSaving;
    NSMutableSet *_expandedModelObjectsForStateSaving;
    NSSet *_collapsedGroupsBeforeFiltering;
    NSSet *_collapsedFilesBeforeFiltering;
    NSSet *_collapsedTypesBeforeFiltering;
    NSSet *_expandedModelObjectsBeforeFiltering;
    NSMutableSet *_collapsedModelObjects;
    NSSet *_collapsedModelObjectsBeforeFiltering;
    DVTTimeSlicedMainThreadWorkQueue *_autoExpandingWorkQueue;
    DVTTableCellViewMultiLineHeightEstimator *_issueHeightEstimator;
    DVTTableCellViewMultiLineHeightEstimator *_subIssueHeightEstimator;
    NSMutableArray *_stateChangeObservingTokens;
    unsigned long long _issueDetailLevel;
    unsigned long long _compressionValue;
    DVTObservingToken *_numBuildtimeIssuesObservingToken;
    DVTObservingToken *_numRuntimeIssuesObservingToken;
    DVTNotificationToken *_issueDetailLevelObservingToken;
    DVTObservingToken *_themeObserver;
    BOOL _restoringState;
    BOOL _clearingFilter;
    BOOL _showByRuntime;
    BOOL _errorFilteringEnabled;
    BOOL _recentFilteringEnabled;
    BOOL _showsCompressedStackFrames;
    NSArray *_navigableIssueItems;
    long long _showByType;
    NSString *_filterPatternString;
    NSMutableSet *_collapsedGroups;
    NSMutableSet *_collapsedFiles;
    NSMutableSet *_collapsedTypes;
    NSMutableSet *_expandedModelObjects;
    DVTScrollView *_issueNavigatorScrollView;
    DVTBorderedView *_separatorView;
    struct _NSRange _visibleRows;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingNavigableIssueItems;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
@property __weak DVTBorderedView *separatorView; // @synthesize separatorView=_separatorView;
@property __weak DVTScrollView *issueNavigatorScrollView; // @synthesize issueNavigatorScrollView=_issueNavigatorScrollView;
@property struct _NSRange visibleRows; // @synthesize visibleRows=_visibleRows;
@property(copy, nonatomic) NSMutableSet *expandedModelObjects; // @synthesize expandedModelObjects=_expandedModelObjects;
@property(copy, nonatomic) NSMutableSet *collapsedTypes; // @synthesize collapsedTypes=_collapsedTypes;
@property(copy, nonatomic) NSMutableSet *collapsedFiles; // @synthesize collapsedFiles=_collapsedFiles;
@property(copy, nonatomic) NSMutableSet *collapsedGroups; // @synthesize collapsedGroups=_collapsedGroups;
@property(nonatomic) BOOL showsCompressedStackFrames; // @synthesize showsCompressedStackFrames=_showsCompressedStackFrames;
@property(nonatomic) BOOL recentFilteringEnabled; // @synthesize recentFilteringEnabled=_recentFilteringEnabled;
@property(nonatomic) BOOL errorFilteringEnabled; // @synthesize errorFilteringEnabled=_errorFilteringEnabled;
@property(copy, nonatomic) NSString *filterPatternString; // @synthesize filterPatternString=_filterPatternString;
@property(nonatomic) long long showByType; // @synthesize showByType=_showByType;
@property(retain, nonatomic) NSArray *navigableIssueItems; // @synthesize navigableIssueItems=_navigableIssueItems;
@property(nonatomic) BOOL showByRuntime; // @synthesize showByRuntime=_showByRuntime;
- (void).cxx_destruct;
- (void)revealNavigableItems:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)configureStateSavingObservers;
- (void)revertStateWithDictionary:(id)arg1;
- (void)clearFilter;
- (void)setFilter:(id)arg1;
- (void)_synchronizeFilteringWithOutlineView;
- (id)filterDefinitionIdentifier;
- (void)_updateFilter;
- (BOOL)_isFiltered;
- (double)outlineView:(id)arg1 estimatedHeightOfRowByItem:(id)arg2;
- (void)_configureStandardTableViewCell:(id)arg1;
- (id)_tableCellViewForCompressedStackFrameItem:(id)arg1;
- (id)_genericTableCellViewForDebugNavItem:(id)arg1;
- (id)_tableCellViewForSubIssueNavItem:(id)arg1;
- (long long)_calculateMaxNumberOfSubtitleLines;
- (id)_tableCellViewForIssueNavItem:(id)arg1;
- (id)_tableCellViewForIssueTypeGroupNavItem:(id)arg1;
- (id)_tableCellViewForFileGroupNavItem:(id)arg1;
- (id)_tableCellViewForIssueGroupNavItem:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (void)_recordNavigableItem:(id)arg1 expanded:(BOOL)arg2;
- (id)_itemsMatchingState:(id)arg1;
- (id)_leafIssueNavigableInIssuePath:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (id)_issueNavigableItemForIdentifierDictionary:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (id)_fileGroupNavigableItemForIdentifierDictionary:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (id)_typeGroupNavigableItemForIdentifierDictionary:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (id)_issueGroupNavigableItemForIdentifierDictionary:(id)arg1 idToNavigableDict:(id)arg2;
- (id)_fullIdentifierPathForNavigables:(id)arg1;
- (id)_fullIdentifierPathForNavigable:(id)arg1;
- (id)_stateIdentifierForNavigable:(id)arg1;
- (id)_issueFromChildNavigableItem:(id)arg1;
- (id)_stateIdentifierForIssue:(id)arg1;
- (id)_stateIdentifierForIssueTypeGroup:(id)arg1 parentNavigable:(id)arg2;
- (id)_stateIdentifierForIssueFileGroup:(id)arg1 parentNavigable:(id)arg2;
- (id)_stateIdentifierForIssueGroup:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)contextMenu_showDocumentation:(id)arg1;
- (void)contextMenu_revealInLog:(id)arg1;
- (id)_firstIssueForContextMenu;
- (void)contextMenu_viewByType:(id)arg1;
- (void)contextMenu_viewByFile:(id)arg1;
- (void)contextMenu_copy:(id)arg1;
- (void)copy:(id)arg1;
- (id)contextMenuSelection;
- (BOOL)_writeItems:(id)arg1 toPasteboard:(id)arg2;
- (void)contextMenu_revealInProjectNavigator:(id)arg1;
- (void)revealInProjectNavigator:(id)arg1;
- (void)_revealInProjectNavigatorUsingContextMenuSelection:(BOOL)arg1;
- (void)_pushSelection;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)_canNavigateToNavigableItem:(id)arg1;
- (id)structureEditorOpenSpecifierForIssuesNavigable:(id)arg1 error:(id *)arg2;
- (id)structureEditorOpenSpecifierForLogDocumentForIssue:(id)arg1 error:(id *)arg2;
- (void)scopeByRuntime:(id)arg1;
- (void)scopeByBuildtime:(id)arg1;
- (id)domainIdentifier;
@property(readonly) BOOL derivedShowByType;
- (id)issueManager;
- (void)primitiveInvalidate;
- (void)_handleDetailLevelDefaultDidChange;
- (void)viewDidInstall;
- (void)_updateScopeButtons;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

