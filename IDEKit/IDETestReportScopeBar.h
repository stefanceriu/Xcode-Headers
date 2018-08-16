//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTBorderedView, DVTScopeBarButton, DVTSearchField, IDETestReportBaselineUpdateController, IDETestReportBatchBaselineUpdateWindow, IDETestReportViewController, IDEWorkspace, IDEWorkspaceTabController, NSButton, NSProgressIndicator, NSString;
@protocol IDEClientTrackingToken;

@interface IDETestReportScopeBar : DVTViewController
{
    IDETestReportBaselineUpdateController *_baselineUpdatesController;
    IDETestReportBatchBaselineUpdateWindow *_updateWindow;
    unsigned long long _selectedBaselineRecordBehavior;
    id <IDEClientTrackingToken> _clientTrackingToken;
    IDETestReportViewController *_testReport;
    IDEWorkspace *_workspace;
    IDEWorkspaceTabController *_workspaceTabController;
    CDUnknownBlockType _scopeBarChangedCallback;
    CDUnknownBlockType _filterFieldChangedCallback;
    DVTBorderedView *_filterBarBorderedView;
    DVTSearchField *_filterField;
    DVTScopeBarButton *_scopeBarAllButton;
    DVTScopeBarButton *_scopeBarPassedButton;
    DVTScopeBarButton *_scopeBarFailedButton;
    DVTScopeBarButton *_scopeBarUnitAndPerfTestsButton;
    DVTScopeBarButton *_scopeBarPerformanceTestsButton;
    NSProgressIndicator *_progressBar;
    NSButton *_setBaselinesButton;
}

+ (void)initialize;
@property __weak NSButton *setBaselinesButton; // @synthesize setBaselinesButton=_setBaselinesButton;
@property __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property __weak DVTScopeBarButton *scopeBarPerformanceTestsButton; // @synthesize scopeBarPerformanceTestsButton=_scopeBarPerformanceTestsButton;
@property __weak DVTScopeBarButton *scopeBarUnitAndPerfTestsButton; // @synthesize scopeBarUnitAndPerfTestsButton=_scopeBarUnitAndPerfTestsButton;
@property __weak DVTScopeBarButton *scopeBarFailedButton; // @synthesize scopeBarFailedButton=_scopeBarFailedButton;
@property __weak DVTScopeBarButton *scopeBarPassedButton; // @synthesize scopeBarPassedButton=_scopeBarPassedButton;
@property __weak DVTScopeBarButton *scopeBarAllButton; // @synthesize scopeBarAllButton=_scopeBarAllButton;
@property __weak DVTSearchField *filterField; // @synthesize filterField=_filterField;
@property __weak DVTBorderedView *filterBarBorderedView; // @synthesize filterBarBorderedView=_filterBarBorderedView;
@property(copy, nonatomic) CDUnknownBlockType filterFieldChangedCallback; // @synthesize filterFieldChangedCallback=_filterFieldChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType scopeBarChangedCallback; // @synthesize scopeBarChangedCallback=_scopeBarChangedCallback;
@property(nonatomic) __weak IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(nonatomic) __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(nonatomic) __weak IDETestReportViewController *testReport; // @synthesize testReport=_testReport;
- (void).cxx_destruct;
- (void)setBaselinesAction:(id)arg1;
- (void)updateProgressBarValue:(double)arg1;
@property(readonly, copy, nonatomic) NSString *filterFieldStringValue;
- (void)hideBaselinesButton:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isPerformanceTestsButtonOn;
@property(readonly, nonatomic) BOOL isPassedButtonOn;
@property(readonly, nonatomic) BOOL isFailedButtonOn;
- (void)filterFieldAction:(id)arg1;
- (void)scopeBarUnitAndPerfTests:(id)arg1;
- (void)scopeBarPerformance:(id)arg1;
- (void)scopeBarFailed:(id)arg1;
- (void)scopeBarPassed:(id)arg1;
- (void)scopeBarAll:(id)arg1;
- (void)scopeBarChanged;
- (void)selectInclusiveScopesAndClearFilterField;
- (void)commitScopeBarState;
- (void)restoreScopeBarState;
- (void)primitiveInvalidate;
- (void)loadView;

@end

