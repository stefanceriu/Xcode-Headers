//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class DVTOutlineView, DVTSearchField, NSArray, NSButton, NSDictionary, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSString, NSURL;

@interface IDECoverageReportViewController : IDEViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    NSMutableArray *_currentlyExpandedCoverageItemIdentifiers;
    NSMutableOrderedSet *_targetsFilteredByFilterField;
    NSMutableOrderedSet *_filesFilteredByFilterField;
    NSMutableOrderedSet *_methodsFilteredByFilterField;
    NSMapTable *_cachedFilteredItemsBasedOnCoverageDifferencesAndTestBundleCheckbox;
    BOOL _showDevices;
    NSURL *_documentURL;
    id <IDECoverage_RootObject> _rootObject;
    NSArray *_currentSelectedDocumentLocations;
    id <IDECoverageReportFunctionFetcher> _functionFetcher;
    CDUnknownBlockType _fetchFunctionsForFile;
    DVTOutlineView *_outlineView;
    NSString *_filterString;
    DVTSearchField *_filterField;
    NSDictionary *_coverageItemsByIdentifier;
    NSArray *_deviceColumns;
    NSButton *_showTestBundlesCheckBox;
    long long _coverageBarColumnIndex;
    NSButton *_showDeviceDifferencesButton;
}

+ (void)jumpToSourceCodeForItem:(id)arg1 inWorkspace:(id)arg2;
+ (void)initialize;
@property __weak NSButton *showDeviceDifferencesButton; // @synthesize showDeviceDifferencesButton=_showDeviceDifferencesButton;
@property long long coverageBarColumnIndex; // @synthesize coverageBarColumnIndex=_coverageBarColumnIndex;
@property __weak NSButton *showTestBundlesCheckBox; // @synthesize showTestBundlesCheckBox=_showTestBundlesCheckBox;
@property(retain, nonatomic) NSArray *deviceColumns; // @synthesize deviceColumns=_deviceColumns;
@property(nonatomic) BOOL showDevices; // @synthesize showDevices=_showDevices;
@property(retain, nonatomic) NSDictionary *coverageItemsByIdentifier; // @synthesize coverageItemsByIdentifier=_coverageItemsByIdentifier;
@property __weak DVTSearchField *filterField; // @synthesize filterField=_filterField;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property __weak DVTOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(copy, nonatomic) CDUnknownBlockType fetchFunctionsForFile; // @synthesize fetchFunctionsForFile=_fetchFunctionsForFile;
@property __weak id <IDECoverageReportFunctionFetcher> functionFetcher; // @synthesize functionFetcher=_functionFetcher;
@property(readonly, nonatomic) NSArray *currentlyExpandedCoverageItemIdentifiers; // @synthesize currentlyExpandedCoverageItemIdentifiers=_currentlyExpandedCoverageItemIdentifiers;
@property(retain) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(retain, nonatomic) id <IDECoverage_RootObject> rootObject; // @synthesize rootObject=_rootObject;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (void).cxx_destruct;
- (void)showDeviceDifferences:(id)arg1;
- (void)showTestBundlesAction:(id)arg1;
- (void)filterFieldAction:(id)arg1;
- (void)restoreFilterField;
- (void)_filterOutlineAndRefresh;
- (id)_filterItemsBasedOnCoverageDifferencesAndTestBundleCheckboxes:(id)arg1 contextItem:(id)arg2;
- (id)testBundleExtension;
- (id)allFiles;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)doubleClickInTable:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)_deviceViewForItem:(id)arg1 column:(id)arg2;
- (id)devicesNotMatchingID:(id)arg1 inCoverageItem:(id)arg2;
- (id)deviceMatchingID:(id)arg1 inCoverageItem:(id)arg2;
- (id)_viewForChangeColumnForItem:(id)arg1;
- (id)_viewForBarColumnForItem:(id)arg1;
- (id)_viewForNodeColumnForItem:(id)arg1;
- (void)revealClickedItemInProjectNavigator:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)iconForTargetOrFileWithTitle:(id)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)_methodsForFile:(id)arg1;
- (id)rootItems;
- (void)reloadOutlineView;
- (void)_refreshColumns;
- (void)selectItemWithIdentifier:(id)arg1;
- (void)expandItemsWithIdentifiers:(id)arg1;
- (void)refreshOutline;
- (void)primitiveInvalidate;
- (void)loadView;
- (BOOL)showDeviceDifferencesDefault;
- (BOOL)showTestBundlesDefault;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSMutableArray *mutableCurrentlyExpandedCoverageItemIdentifiers; // @dynamic mutableCurrentlyExpandedCoverageItemIdentifiers;
@property(readonly) Class superclass;

@end

