//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>
#import <IDEKit/IDETestReport_RootObject-Protocol.h>

@class DVTReplacementView, IDESchemeActionRunDestinationRecord, NSArray, NSMutableSet, NSSet, NSString;

@interface IDETestReportEditor : IDEEditor <DVTReplacementViewDelegate, IDETestReport_RootObject>
{
    NSMutableSet *_passingTestGroups_inFlight;
    NSMutableSet *_failingTestGroups_inFlight;
    NSMutableSet *_performanceMetrics;
    IDESchemeActionRunDestinationRecord *_runDestinationRecord;
    DVTReplacementView *_replacementView;
    NSSet *_passingTestGroups;
    NSSet *_failingTestGroups;
    NSArray *_performanceMetricsForDisplay;
    NSArray *_currentSelectedDocumentLocations;
    NSArray *_currentSelectedItems;
}

+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property(copy, nonatomic) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(copy, nonatomic) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(copy, nonatomic) NSArray *performanceMetricsForDisplay; // @synthesize performanceMetricsForDisplay=_performanceMetricsForDisplay;
@property(copy, nonatomic) NSSet *failingTestGroups; // @synthesize failingTestGroups=_failingTestGroups;
@property(copy, nonatomic) NSSet *passingTestGroups; // @synthesize passingTestGroups=_passingTestGroups;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_attachmentsHaveBeenPruned;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_canRevealActivityAssetsLocally;
@property(readonly, nonatomic) BOOL ide_testReport_test_fetchesTestRunsLazily;
- (BOOL)ide_testReport_shouldEnableBaselineUpdatingUIForWorkspace:(id)arg1;
- (id)ide_testReport_rootObject_includeGroupsWithPassedTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
- (id)testGroupsIncludePassingTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_allTestClasses;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_perfMetricNames;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_devices;
@property(readonly, copy, nonatomic) NSString *ide_testReport_rootObject_identifier;
- (void)processTestSummaryGroup:(id)arg1 testableSummary:(id)arg2 parentGroup:(id)arg3;
- (void)processTestSummary:(id)arg1 testableSummary:(id)arg2 logTestsViewTestGroup:(id)arg3;
- (void)processTestableSummary:(id)arg1 testableSummary:(id)arg2 logTestsViewTestGroup:(id)arg3 parentGroup:(id)arg4;
- (void)refreshTestableDataFromDocument;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (id)testReport;
- (id)reportDocument;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
