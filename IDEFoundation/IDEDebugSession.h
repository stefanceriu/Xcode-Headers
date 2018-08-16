//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTDispatchLock, DVTMutableOrderedDictionary, DVTObservingToken, DVTStackBacktrace, DVTTextDocumentLocation, IDEBreakpointManager, IDEConsoleAdaptor, IDEDebugProcess, IDEDebugSessionRuntimeGroup, IDELaunchSession, IDERunOperationWorker, NSArray, NSDate, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol DBGDebugSessionBreakpointLifeCycleDelegate, IDEDebugTopNavigableModel;

@interface IDEDebugSession : NSObject <DVTInvalidation>
{
    NSMapTable *_breakpointsToTokenSets;
    NSMapTable *_locationsToTokenSets;
    NSMapTable *_watchpointsToTokenSets;
    NSMapTable *_breakpointsToIdentifiers;
    NSMapTable *_locationsToIdentifiers;
    NSMapTable *_watchpointsToIdentifiers;
    DVTDispatchLock *_breakpointsAndWatchpointsToIdentifiersLock;
    NSMutableSet *_profileDataObservers;
    BOOL _touchedProfileDataObserversRegistration;
    struct __CFSet *_stackFramesForDisassembly;
    NSMutableArray *_CPUFirstIndicators;
    NSDictionary *_CPUDistribution;
    DVTMutableOrderedDictionary *_CPUUsagesForThreadDictionary;
    NSMutableArray *_prunedThreadIDsForCPUUsages;
    NSMutableDictionary *_threadNameForThreadIDDictionary;
    NSMutableDictionary *_qosValueForThreadIDDictionary;
    NSMutableArray *_memoryFirstIndicators;
    NSDictionary *_memoryDistribution;
    NSMutableArray *_memoryMeasurements;
    NSMutableArray *_energyMeasurements;
    NSMutableArray *_CPUCapMeasurements;
    NSMutableArray *_CPUCapAverageMeasurements;
    int _logFD;
    DVTObservingToken *_targetControlStateObservingToken;
    DVTObservingToken *_breakpontsActivationObservingToken;
    DVTObservingToken *_breakpointListObserverToken;
    BOOL _syntheticDebugSession;
    BOOL _profilingSupported;
    BOOL _supportsMultiplePCAnnotation;
    BOOL _shouldPostStateChangedDistributedNotifications;
    int _state;
    int _coalescedState;
    int _lastObserversForGaugesState;
    int _memoryDebuggingState;
    id <IDEDebugTopNavigableModel> _topNavigableModel;
    IDELaunchSession *_launchSession;
    IDERunOperationWorker *_debugLauncher;
    IDEDebugProcess *_process;
    DVTTextDocumentLocation *_instructionPointerLocation;
    DVTTextDocumentLocation *_instructionPointerLocationForDisassembly;
    id <DBGDebugSessionBreakpointLifeCycleDelegate> _breakpointLifeCycleDelegate;
    IDEConsoleAdaptor *_debuggerConsoleAdaptor;
    IDEConsoleAdaptor *_targetConsoleAdaptor;
    unsigned long long _CPUFirstIndicatorHigh;
    unsigned long long _CPUFirstIndicatorLow;
    unsigned long long _totalRunningTimeMicroSeconds;
    NSDate *_loggingInitializedDate;
    IDEDebugSessionRuntimeGroup *_runtimeIssueGroupingObject;
    NSArray *_threadSanitizerIssues;
    NSArray *_UBSanitizerIssues;
    NSArray *_mainThreadCheckerIssues;
    NSArray *_swiftRuntimeReportingIssues;
    unsigned long long _memoryRPRVTHigh;
    unsigned long long _memoryRPRVTLow;
    unsigned long long _memoryAnonymousHigh;
    unsigned long long _memoryAnonymousLow;
    unsigned long long _memoryDirtyPageSizeHigh;
    unsigned long long _memoryDirtyPageSizeLow;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (id)keyPathsForValuesAffectingTotalRunningTime;
+ (void)initialize;
@property BOOL shouldPostStateChangedDistributedNotifications; // @synthesize shouldPostStateChangedDistributedNotifications=_shouldPostStateChangedDistributedNotifications;
@property unsigned long long memoryDirtyPageSizeLow; // @synthesize memoryDirtyPageSizeLow=_memoryDirtyPageSizeLow;
@property unsigned long long memoryDirtyPageSizeHigh; // @synthesize memoryDirtyPageSizeHigh=_memoryDirtyPageSizeHigh;
@property unsigned long long memoryAnonymousLow; // @synthesize memoryAnonymousLow=_memoryAnonymousLow;
@property unsigned long long memoryAnonymousHigh; // @synthesize memoryAnonymousHigh=_memoryAnonymousHigh;
@property unsigned long long memoryRPRVTLow; // @synthesize memoryRPRVTLow=_memoryRPRVTLow;
@property unsigned long long memoryRPRVTHigh; // @synthesize memoryRPRVTHigh=_memoryRPRVTHigh;
@property(readonly, copy) NSArray *swiftRuntimeReportingIssues; // @synthesize swiftRuntimeReportingIssues=_swiftRuntimeReportingIssues;
@property(readonly, copy) NSArray *mainThreadCheckerIssues; // @synthesize mainThreadCheckerIssues=_mainThreadCheckerIssues;
@property(readonly, copy) NSArray *UBSanitizerIssues; // @synthesize UBSanitizerIssues=_UBSanitizerIssues;
@property(readonly, copy) NSArray *threadSanitizerIssues; // @synthesize threadSanitizerIssues=_threadSanitizerIssues;
@property(retain) IDEDebugSessionRuntimeGroup *runtimeIssueGroupingObject; // @synthesize runtimeIssueGroupingObject=_runtimeIssueGroupingObject;
@property(readonly) NSDate *loggingInitializedDate; // @synthesize loggingInitializedDate=_loggingInitializedDate;
@property unsigned long long totalRunningTimeMicroSeconds; // @synthesize totalRunningTimeMicroSeconds=_totalRunningTimeMicroSeconds;
@property(readonly) NSArray *CPUCapAverageMeasurements; // @synthesize CPUCapAverageMeasurements=_CPUCapAverageMeasurements;
@property(readonly) NSArray *CPUCapMeasurements; // @synthesize CPUCapMeasurements=_CPUCapMeasurements;
@property(copy) NSDictionary *memoryDistribution; // @synthesize memoryDistribution=_memoryDistribution;
@property(readonly) NSArray *prunedThreadIDsForCPUUsages; // @synthesize prunedThreadIDsForCPUUsages=_prunedThreadIDsForCPUUsages;
@property(readonly) DVTMutableOrderedDictionary *CPUUsagesForThreadDictionary; // @synthesize CPUUsagesForThreadDictionary=_CPUUsagesForThreadDictionary;
@property(copy) NSDictionary *CPUDistribution; // @synthesize CPUDistribution=_CPUDistribution;
@property unsigned long long CPUFirstIndicatorLow; // @synthesize CPUFirstIndicatorLow=_CPUFirstIndicatorLow;
@property unsigned long long CPUFirstIndicatorHigh; // @synthesize CPUFirstIndicatorHigh=_CPUFirstIndicatorHigh;
@property(readonly) BOOL supportsMultiplePCAnnotation; // @synthesize supportsMultiplePCAnnotation=_supportsMultiplePCAnnotation;
@property(retain) IDEConsoleAdaptor *targetConsoleAdaptor; // @synthesize targetConsoleAdaptor=_targetConsoleAdaptor;
@property(retain) IDEConsoleAdaptor *debuggerConsoleAdaptor; // @synthesize debuggerConsoleAdaptor=_debuggerConsoleAdaptor;
@property int memoryDebuggingState; // @synthesize memoryDebuggingState=_memoryDebuggingState;
@property int lastObserversForGaugesState; // @synthesize lastObserversForGaugesState=_lastObserversForGaugesState;
@property(retain, nonatomic) id <DBGDebugSessionBreakpointLifeCycleDelegate> breakpointLifeCycleDelegate; // @synthesize breakpointLifeCycleDelegate=_breakpointLifeCycleDelegate;
@property(getter=isProfilingSupported) BOOL profilingSupported; // @synthesize profilingSupported=_profilingSupported;
@property(copy, nonatomic) DVTTextDocumentLocation *instructionPointerLocationForDisassembly; // @synthesize instructionPointerLocationForDisassembly=_instructionPointerLocationForDisassembly;
@property(copy, nonatomic) DVTTextDocumentLocation *instructionPointerLocation; // @synthesize instructionPointerLocation=_instructionPointerLocation;
@property(retain, nonatomic) IDEDebugProcess *process; // @synthesize process=_process;
@property int coalescedState; // @synthesize coalescedState=_coalescedState;
@property(nonatomic) int state; // @synthesize state=_state;
@property(getter=isSyntheticDebugSession) BOOL syntheticDebugSession; // @synthesize syntheticDebugSession=_syntheticDebugSession;
@property(retain) IDERunOperationWorker *debugLauncher; // @synthesize debugLauncher=_debugLauncher;
@property(retain) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain, nonatomic) id <IDEDebugTopNavigableModel> topNavigableModel; // @synthesize topNavigableModel=_topNavigableModel;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSString *totalRunningTime;
- (void)setCurrentCPUCapAverageMeasurement:(id)arg1;
- (void)setCurrentCPUCapMeasurement:(id)arg1;
- (void)setCurrentEnergyMeasurement:(id)arg1;
- (void)setCurrentMemoryMeasurement:(id)arg1;
- (void)_updateMemoryMeasureDictionary:(id)arg1 firstEntry:(BOOL)arg2 key:(id)arg3 highValue:(unsigned long long *)arg4 highValueKey:(id)arg5 lowValue:(unsigned long long *)arg6 lowValueKey:(id)arg7;
- (void)setCurrentMemoryFirstIndicator:(id)arg1;
- (id)memoryProfilingDisabledMessage;
- (void)setCurrentThreadsCPUUsage:(id)arg1;
- (id)CPUUsageThreadNameForThreadID:(id)arg1;
- (void)setCPUUsageThreadName:(id)arg1 forThreadID:(id)arg2;
- (void)setCurrentCPUFirstIndicator:(id)arg1;
- (void)_setLastValue:(id)arg1 inGaugeValues:(id)arg2;
- (void)forceRefreshPausedStates;
- (id)supportedDataValueFormatsForDataValue:(id)arg1;
- (void)printDescriptionOfDataValueToConsole:(id)arg1 runAllThreads:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)completeString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)qualityOfServiceValueForThreadID:(id)arg1;
- (id)verifyStackFrameForDisassembly:(id)arg1;
- (void)removeToBeInvalidatedStackFramesForDisassembly:(id)arg1;
- (BOOL)addStackFrameForDisassembly:(id)arg1;
- (void)determineProfileDataObserversState;
- (void)deregisterProfileDataObserver:(id)arg1;
- (void)registerProfileDataObserver:(id)arg1;
- (void)requestLoadDylibAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)commandsExpectingExpressions;
- (BOOL)canContinueToLocation:(id)arg1 withinBlockAtRange:(struct _NSRange)arg2;
- (BOOL)consoleShouldTrackInputHistory;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)executeDebuggerCommand:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
- (BOOL)shouldAcceptFromDebugSession:(id)arg1 error:(id *)arg2;
- (BOOL)shouldRelinquishToDebugSession:(id)arg1 error:(id *)arg2;
- (void)requestLoadSymbolsForStackFrames:(id)arg1;
- (void)requestLoadSymbolsForStackFrameUUID:(id)arg1 updateUI:(BOOL)arg2;
- (void)requestMovePCInStackFrame:(id)arg1 toLineNumber:(unsigned long long)arg2;
- (void)requestStepIntoCallSymbol:(id)arg1 atLocation:(id)arg2;
- (BOOL)supportsUISnapshot;
- (void)requestUISnapshotRefresh;
- (void)requestFetchEvent;
- (void)requestDetach;
- (void)requestStop;
- (void)requestContinueToLocation:(id)arg1;
- (void)requestContinue;
- (void)requestPause;
- (void)requestStepOverSuspendOtherThreads;
- (void)requestStepInSuspendOtherThreads;
- (void)requestStepOverInstruction;
- (void)requestStepIntoInstruction;
- (void)requestStepOut;
- (void)requestStepOverLine;
- (void)requestStepIn;
- (void)logDebugStringWithTimestampUsingFormat:(id)arg1;
- (void)logDebugStringWithFormat:(id)arg1;
- (void)logDebugStringWithTimestamp:(id)arg1;
- (void)logDebugString:(id)arg1;
@property(readonly) BOOL isLoggingEnabled;
- (void)_initializeLogging;
- (id)logFilename;
- (void)setIdentifier:(unsigned long long)arg1 forWatchpoint:(id)arg2;
- (id)watchpointForIdentifier:(unsigned long long)arg1;
- (void)setIdentifier:(unsigned long long)arg1 forBreakpointLocation:(id)arg2;
- (unsigned long long)identifierForBreakpointLocation:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1 forBreakpoint:(id)arg2;
- (unsigned long long)identifierForBreakpoint:(id)arg1;
- (id)breakpointForIdentifier:(unsigned long long)arg1;
- (BOOL)_isBreakpointValid:(id)arg1;
- (BOOL)_isWatchpointValid:(id)arg1;
- (void)_recreateBreakpointIfNeccessary:(id)arg1;
- (void)_createBreakpointIfNeccessary:(id)arg1;
- (void)_handleBreakpointIgnoreCountChanged:(id)arg1;
- (void)_handleBreakpointConditionChanged:(id)arg1;
- (void)_handleBreakpointEnablementChanged:(id)arg1;
- (void)_handleBreakpointActivationChanged;
- (void)_handleBreakpointLocationsRemoved:(id)arg1;
- (void)_handleBreakpointLocationsAdded:(id)arg1;
- (void)_handleBreakpointLocationChanges:(id)arg1;
- (void)_handleBreakpointsDeleted:(id)arg1;
- (void)_handleBreakpointsCreated:(id)arg1;
- (void)_handleBreakpointsListChanged:(id)arg1;
- (void)_removeWatchpointObservers:(id)arg1;
- (void)_addWatchpointObservers:(id)arg1;
- (void)_removeBreakpointLocationObservers:(id)arg1;
- (void)_addLocationObservers:(id)arg1;
- (void)_removeBreakpointObservers:(id)arg1;
- (void)_addBreakpointObservers:(id)arg1;
- (unsigned long long)identifierForWatchpoint:(id)arg1;
@property(readonly) IDEBreakpointManager *breakpointManager;
@property(readonly) BOOL supportsPCAnnotationDragging;
- (void)_delayedSetState;
- (void)_handleProcessStateChanged;
- (id)initWithDebugLauncher:(id)arg1;

// Remaining properties
@property(readonly) NSArray *CPUFirstIndicators; // @dynamic CPUFirstIndicators;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSArray *energyMeasurements; // @dynamic energyMeasurements;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSArray *memoryFirstIndicators; // @dynamic memoryFirstIndicators;
@property(readonly) NSArray *memoryMeasurements; // @dynamic memoryMeasurements;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

