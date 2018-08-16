//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEProductsUI/DVTTableViewDelegate-Protocol.h>
#import <IDEProductsUI/IDEFilterControlBarTarget-Protocol.h>
#import <IDEProductsUI/NSMenuDelegate-Protocol.h>

@class DVTAnalyticsPointAbstractClass, DVTAnalyticsPointSourceCollection, DVTBorderedView, DVTDelayedInvocation, DVTObservingToken, DVTTableView, DVTUserDefaultsLeastRecentlyUsedCache, IDEAnalyticsPointSourceCollectionSelector, IDEAnalyticsPointsViewController, IDESearchFilterControlBar, NSArray, NSArrayController, NSAttributedString, NSIndexSet, NSMutableDictionary, NSScrollView, NSString, NSView;
@protocol DVTAnalyticsAppStoreSourceProtocol;

@interface IDEAnalyticsPointSourceListViewController : IDEViewController <IDEFilterControlBarTarget, DVTTableViewDelegate, NSMenuDelegate>
{
    NSAttributedString *_previousTopPointsAttributedTitle;
    BOOL _busy;
    BOOL _restoringSelectedAnalyticsPoint;
    BOOL _updatingAnalyticsPointsForDisplay;
    IDEAnalyticsPointsViewController *_analyticsPointsViewController;
    DVTAnalyticsPointAbstractClass *_selectedAnalyticsPoint;
    IDEAnalyticsPointSourceCollectionSelector *_sourceCollectionSelector;
    NSIndexSet *_analyticsPointsTableSelectionIndexes;
    NSArrayController *_analyticsPointsController;
    DVTTableView *_analyticsPointsTableView;
    NSScrollView *_analyticsPointsTableScrollView;
    DVTBorderedView *_analyticsPointsBorderedView;
    IDESearchFilterControlBar *_analyticsPointsFilterControlBar;
    DVTBorderedView *_borderedView;
    DVTBorderedView *_analyticsPointSourceCollectionSelectorBorder;
    NSString *_searchString;
    DVTDelayedInvocation *_delayedUpdateAnalyticsPointsInvocation;
    DVTDelayedInvocation *_delayedUpdateAnalyticsPointsDisplayInvocation;
    NSArray *_analyticsPointsForDisplay;
    DVTUserDefaultsLeastRecentlyUsedCache *_selectedAnalyticsPointCache;
    NSMutableDictionary *_representativeAnalyticsPointSourceToDispatchLockDict;
    id <DVTAnalyticsAppStoreSourceProtocol> _lastRepresentativeAnalyticsPointSource;
    long long _type;
    DVTObservingToken *_selectedProductObservingToken;
    DVTObservingToken *_selectedAnalyticsPointSourceCollectionObservingToken;
    DVTObservingToken *_analyticsPointsObserver;
}

+ (id)keyPathsForValuesAffectingSelectedAnalyticsPointSourceCollection;
+ (id)keyPathsForValuesAffectingAnalyticsPointsFilterPredicate;
+ (id)keyPathsForValuesAffectingSearchStrings;
@property(retain) DVTObservingToken *analyticsPointsObserver; // @synthesize analyticsPointsObserver=_analyticsPointsObserver;
@property(retain) DVTObservingToken *selectedAnalyticsPointSourceCollectionObservingToken; // @synthesize selectedAnalyticsPointSourceCollectionObservingToken=_selectedAnalyticsPointSourceCollectionObservingToken;
@property(retain) DVTObservingToken *selectedProductObservingToken; // @synthesize selectedProductObservingToken=_selectedProductObservingToken;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <DVTAnalyticsAppStoreSourceProtocol> lastRepresentativeAnalyticsPointSource; // @synthesize lastRepresentativeAnalyticsPointSource=_lastRepresentativeAnalyticsPointSource;
@property(retain, nonatomic) NSMutableDictionary *representativeAnalyticsPointSourceToDispatchLockDict; // @synthesize representativeAnalyticsPointSourceToDispatchLockDict=_representativeAnalyticsPointSourceToDispatchLockDict;
@property(getter=isUpdatingAnalyticsPointsForDisplay) BOOL updatingAnalyticsPointsForDisplay; // @synthesize updatingAnalyticsPointsForDisplay=_updatingAnalyticsPointsForDisplay;
@property(getter=isRestoringSelectedAnalyticsPoint) BOOL restoringSelectedAnalyticsPoint; // @synthesize restoringSelectedAnalyticsPoint=_restoringSelectedAnalyticsPoint;
@property(retain) DVTUserDefaultsLeastRecentlyUsedCache *selectedAnalyticsPointCache; // @synthesize selectedAnalyticsPointCache=_selectedAnalyticsPointCache;
@property(retain) NSArray *analyticsPointsForDisplay; // @synthesize analyticsPointsForDisplay=_analyticsPointsForDisplay;
@property(retain) DVTDelayedInvocation *delayedUpdateAnalyticsPointsDisplayInvocation; // @synthesize delayedUpdateAnalyticsPointsDisplayInvocation=_delayedUpdateAnalyticsPointsDisplayInvocation;
@property(retain) DVTDelayedInvocation *delayedUpdateAnalyticsPointsInvocation; // @synthesize delayedUpdateAnalyticsPointsInvocation=_delayedUpdateAnalyticsPointsInvocation;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property __weak DVTBorderedView *analyticsPointSourceCollectionSelectorBorder; // @synthesize analyticsPointSourceCollectionSelectorBorder=_analyticsPointSourceCollectionSelectorBorder;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak IDESearchFilterControlBar *analyticsPointsFilterControlBar; // @synthesize analyticsPointsFilterControlBar=_analyticsPointsFilterControlBar;
@property __weak DVTBorderedView *analyticsPointsBorderedView; // @synthesize analyticsPointsBorderedView=_analyticsPointsBorderedView;
@property __weak NSScrollView *analyticsPointsTableScrollView; // @synthesize analyticsPointsTableScrollView=_analyticsPointsTableScrollView;
@property __weak DVTTableView *analyticsPointsTableView; // @synthesize analyticsPointsTableView=_analyticsPointsTableView;
@property __weak NSArrayController *analyticsPointsController; // @synthesize analyticsPointsController=_analyticsPointsController;
@property(retain, nonatomic) NSIndexSet *analyticsPointsTableSelectionIndexes; // @synthesize analyticsPointsTableSelectionIndexes=_analyticsPointsTableSelectionIndexes;
@property(getter=isBusy) BOOL busy; // @synthesize busy=_busy;
@property(retain) IDEAnalyticsPointSourceCollectionSelector *sourceCollectionSelector; // @synthesize sourceCollectionSelector=_sourceCollectionSelector;
@property(retain) DVTAnalyticsPointAbstractClass *selectedAnalyticsPoint; // @synthesize selectedAnalyticsPoint=_selectedAnalyticsPoint;
@property(readonly) __weak IDEAnalyticsPointsViewController *analyticsPointsViewController; // @synthesize analyticsPointsViewController=_analyticsPointsViewController;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)_isRowBeforeGroupRow:(unsigned long long)arg1;
- (BOOL)_isGroupRow:(unsigned long long)arg1;
- (id)previousTopPointsAttributedTitle;
- (void)productManager:(id)arg1 receivedErrors:(id)arg2 fromSource:(id)arg3;
- (void)refresh;
- (void)_updateAnalyticsPointsFromNetworkForAnalyticsPointSources:(id)arg1 onDispatchLock:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)_updateAnalyticsPointsFromNetworkForSource:(id)arg1 window:(id)arg2 accountsPreviouslyFailed:(id)arg3 accountsCurrentlyFailed:(id *)arg4 errors:(id *)arg5;
- (void)_updateAnalyticsPointsFromCacheForAnalyticsPointSources:(id)arg1 onDispatchLock:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (BOOL)allowNetworkRefreshForSelectedProduct;
- (BOOL)allowAnyNetworkRefresh;
- (void)_setBusyOnMainThread:(BOOL)arg1;
- (void)_updateAnalyticsPointSourceCollectionData;
- (void)updateAnalyticsPointSourceListSelectorErrorWithAnalyticsNetworkFetchErrors:(id)arg1;
- (id)productRequestOrAccountsError;
- (id)dispatchLockForRepresentativeAnalyticsPointSource:(id)arg1;
- (void)restoreAnalyticsPointSourceListScrollPosition;
- (void)restoreSelectedAnalyticsPoint;
- (void)saveSelectedAnalyticsPoint;
- (id)selectedAnalyticsPointSourceCollectionUserDefaultsKeyStringValue;
- (void)_updateAnalyticsPointsForDisplay;
- (void)showAnalyticsPointInFinder:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)analyticsPointsFilterPredicate;
@property(readonly) DVTAnalyticsPointSourceCollection *selectedAnalyticsPointSourceCollection;
@property(readonly) NSArray *searchStrings;
@property BOOL showsSystemTerminationEventsOnly;
@property BOOL showsUnresolvedAnalyticsPointsOnly;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterButtonMenu;
- (id)filterDefinitionIdentifier;
- (id)selectedAnalyticsPointFromSelectedIndex:(id)arg1;
- (void)viewDidLoad;
- (void)setUpSelectedAnalyticsPointCache;
- (void)setUpContextualMenu;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithAnalyticsPointsViewController:(id)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSView *view;

@end

