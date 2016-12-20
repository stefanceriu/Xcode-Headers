//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import "IDEIndexSymbolSelectionSource.h"
#import "IDERefactoringExpressionSource.h"
#import "IDESourceExpressionSource.h"

@class DVTDispatchLock, DVTNotificationToken, DVTObservingToken, DVTPerformanceMetric, DVTSDK, DVTScopeBarView, DVTScrollView, DVTSourceExpression, DVTSourceLanguageService, DVTStackBacktrace, NSArray, NSDictionary, NSMutableSet, NSSet, NSString;

@interface IDESymbolNavigator : IDEOutlineBasedNavigator <IDEIndexSymbolSelectionSource, IDESourceExpressionSource, IDERefactoringExpressionSource>
{
    DVTNotificationToken *_indexingFinishedObserver;
    DVTObservingToken *_outlineViewSelectedObjectsObserver;
    DVTObservingToken *_outlineViewRootObjectsChangedObserver;
    DVTSourceExpression *_selectedExpression;
    NSSet *_expandedItems;
    NSArray *_expandedIdentifiersBeforeFiltering;
    NSDictionary *_previouslyRestoredStateDictionary;
    NSArray *_savedItemsToSelect;
    NSArray *_savedItemsToExpand;
    DVTDispatchLock *_accessLock;
    unsigned long long _currentGeneration;
    long long _savedClickedRowIndex;
    DVTPerformanceMetric *_loadingMetric;
    BOOL _restoringState;
    BOOL _showWorkspaceOnly;
    BOOL _showContainersOnly;
    BOOL _showHierarchy;
    BOOL _showClassesOnly;
    NSSet *_parentsForFiltering;
    NSSet *_symbolsForFiltering;
    long long _loadingProgress;
    NSString *_symbolNamePatternString;
    DVTSourceExpression *_mouseOverExpression;
    DVTScrollView *_symbolNavigatorScrollView;
    DVTScopeBarView *_scopeBarView;
    struct CGRect _currentSelectionFrame;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property __weak DVTScopeBarView *scopeBarView; // @synthesize scopeBarView=_scopeBarView;
@property __weak DVTScrollView *symbolNavigatorScrollView; // @synthesize symbolNavigatorScrollView=_symbolNavigatorScrollView;
@property(retain, nonatomic) DVTSourceExpression *mouseOverExpression; // @synthesize mouseOverExpression=_mouseOverExpression;
@property(nonatomic) struct CGRect currentSelectionFrame; // @synthesize currentSelectionFrame=_currentSelectionFrame;
@property(retain, nonatomic) DVTSourceExpression *selectedExpression; // @synthesize selectedExpression=_selectedExpression;
@property(nonatomic) BOOL showClassesOnly; // @synthesize showClassesOnly=_showClassesOnly;
@property(nonatomic) BOOL showHierarchy; // @synthesize showHierarchy=_showHierarchy;
@property(nonatomic) BOOL showContainersOnly; // @synthesize showContainersOnly=_showContainersOnly;
@property(nonatomic) BOOL showWorkspaceOnly; // @synthesize showWorkspaceOnly=_showWorkspaceOnly;
@property(retain, nonatomic) NSString *symbolNamePatternString; // @synthesize symbolNamePatternString=_symbolNamePatternString;
@property(readonly) long long loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(copy) NSSet *symbolsForFiltering; // @synthesize symbolsForFiltering=_symbolsForFiltering;
@property(copy) NSSet *parentsForFiltering; // @synthesize parentsForFiltering=_parentsForFiltering;
- (void).cxx_destruct;
- (void)_revealNavigableItems:(id)arg1;
- (void)revealSymbols:(id)arg1;
- (void)revealNavigableItemsWithIdentifiers:(id)arg1 identifiersToExpand:(id)arg2 generation:(unsigned long long)arg3;
- (id)findNavigableItemsInItems:(id)arg1 withIdentifiers:(id)arg2 includeParents:(BOOL)arg3;
- (id)filterDefinitionIdentifier;
- (void)_updateFilter;
- (void)revertState;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (id)refactoringExpressionUsingContextMenu:(BOOL)arg1;
- (void)showQuickHelpForCurrentSelection:(id)arg1;
@property(readonly) DVTSourceExpression *contextMenuExpression;
- (id)_resolvedLocation:(id)arg1 symbol:(id)arg2;
- (void)_updateSelectedExpression;
- (id)_expressionForNavItem:(id)arg1;
- (void)symbolsForExpression:(id)arg1 inQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)expressionFrameForExpression:(id)arg1;
- (BOOL)isExpressionModuleImport:(id)arg1;
- (BOOL)isExpressionPoundImport:(id)arg1;
- (BOOL)expressionContainsExecutableCode:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodCall:(id)arg1;
- (BOOL)isExpressionInFunctionOrMethodBody:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodDefinition:(id)arg1;
- (BOOL)isExpressionInPlainCode:(id)arg1;
- (BOOL)canBecomeMainViewController;
- (id)expandedIdentifiers;
- (id)selectedSymbolIdentifiers;
@property(readonly) NSArray *selectedSymbols;
- (void)cancelOperations;
- (void)_refreshBrowser;
- (id)domainIdentifier;
- (id)contextMenuSelection;
- (void)setOutputSelection:(id)arg1;
@property(copy) NSString *visibleRectString;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)dvtExtraBindings;
- (BOOL)isCurrentGeneration:(unsigned long long)arg1;
@property(readonly) unsigned long long currentGeneration; // @dynamic currentGeneration;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)_outlineViewSelectionChanged;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) DVTSourceLanguageService *languageService;
@property(retain) id <IDEOpenRequest> lastOpenRequest; // @dynamic lastOpenRequest;
@property(readonly, copy) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;
@property(readonly) DVTSourceExpression *quickHelpExpression;
@property(readonly) DVTSDK *sdk;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

