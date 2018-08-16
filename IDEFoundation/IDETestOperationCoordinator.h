//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEConsoleAdaptorDelegateProtocol-Protocol.h>
#import <IDEFoundation/IDELaunchSessionEventSourceEvents-Protocol.h>
#import <IDEFoundation/IDETestOperationEventSourceEvents-Protocol.h>
#import <IDEFoundation/IDETestOperationStateMachineDelegate-Protocol.h>
#import <IDEFoundation/IDETestingDiagnosticLogWriter-Protocol.h>
#import <IDEFoundation/XCTDaemonControlSessionDelegate-Protocol.h>
#import <IDEFoundation/XCTDebugLogDelegate-Protocol.h>
#import <IDEFoundation/XCTTestRunnerSessionDelegate-Protocol.h>

@class DVTDevice, DVTDisallowFinishToken, DVTObservingToken, DVTOperation, DVTStackBacktrace, IDEConsoleAdaptor, IDELaunchSessionEventSource, IDERunOperation, IDETestOperationEventSource, IDETestOperationStateMachine, IDETestOutputProcessor, IDETestRunner, IDETestingDiagnosticLogArbiter, NSArray, NSDateFormatter, NSFileHandle, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOutputStream, NSString, NSTimer, NSUUID, XCTDaemonControlSession, XCTTestRunnerSession;
@protocol IDETestOperationCoordinatorEvents, OS_dispatch_queue;

@interface IDETestOperationCoordinator : NSObject <IDEConsoleAdaptorDelegateProtocol, IDETestingDiagnosticLogWriter, IDETestOperationStateMachineDelegate, IDELaunchSessionEventSourceEvents, IDETestOperationEventSourceEvents, XCTDaemonControlSessionDelegate, XCTTestRunnerSessionDelegate, XCTDebugLogDelegate, DVTInvalidation>
{
    BOOL _finished;
    BOOL _hasFailed;
    BOOL _hasStartedTests;
    BOOL _targetIsiOSSimulator;
    BOOL _testingIsFinished;
    BOOL _testRunnerHasBecomeReady;
    BOOL _testRunnerHasFinishedExecutingTests;
    int _testRunnerPID;
    IDERunOperation *_operation;
    NSString *_diagnosticLogPath;
    DVTOperation *_testRunnerSessionStartupOperation;
    id <IDETestOperationCoordinatorEvents> _delegate;
    IDETestRunner *_testRunner;
    DVTDevice *_targetDevice;
    NSMutableArray *_validatorsStack;
    NSUUID *_sessionIdentifier;
    XCTTestRunnerSession *_testRunnerSession;
    XCTDaemonControlSession *_daemonControlSession;
    IDELaunchSessionEventSource *_launchSessionEventSource;
    IDETestOperationEventSource *_testOperationEventSource;
    id _iPhoneConnectLogHandlerToken;
    id _iPhoneSimulatorLogHandlerToken;
    DVTDisallowFinishToken *_disallowFinishToken;
    NSTimer *_startupTimeoutTimer;
    IDETestOutputProcessor *_outputProcessor;
    NSMutableArray *_consoleChunkQueue;
    NSMutableArray *_delegateBlockQueue;
    IDEConsoleAdaptor *_consoleAdaptor;
    NSOutputStream *_statusStream;
    NSObject<OS_dispatch_queue> *_statusStreamQueue;
    IDETestingDiagnosticLogArbiter *_logArbiter;
    NSDateFormatter *_loggingDateFormatter;
    NSTimer *_delegateBlockQueueTimeoutTimer;
    NSTimer *_heartbeatNotificationTimer;
    NSArray *_OSXCrashReportObservers;
    IDETestOperationStateMachine *_stateMachine;
    DVTObservingToken *_debuggerPausedObserverToken;
    NSFileHandle *_standardOutputAndStandardErrorFromTests;
    NSMutableDictionary *_testTokensToExecutionTrackers;
    NSMutableDictionary *_testTokensToOperations;
    NSMutableDictionary *_testTokensToErrors;
    NSMutableSet *_launchedApplicationTokens;
    NSMutableSet *_executionTrackerObservationTokens;
    NSMutableSet *_displayNamesOfLaunchedProcesses;
}

+ (id)nextLaunchSessionToken;
+ (BOOL)supportsInvalidationPrevention;
+ (void)logDebugMessage:(id)arg1;
+ (void)initialize;
@property(retain) NSMutableSet *displayNamesOfLaunchedProcesses; // @synthesize displayNamesOfLaunchedProcesses=_displayNamesOfLaunchedProcesses;
@property(retain) NSMutableSet *executionTrackerObservationTokens; // @synthesize executionTrackerObservationTokens=_executionTrackerObservationTokens;
@property(retain) NSMutableSet *launchedApplicationTokens; // @synthesize launchedApplicationTokens=_launchedApplicationTokens;
@property(retain) NSMutableDictionary *testTokensToErrors; // @synthesize testTokensToErrors=_testTokensToErrors;
@property(retain) NSMutableDictionary *testTokensToOperations; // @synthesize testTokensToOperations=_testTokensToOperations;
@property(retain) NSMutableDictionary *testTokensToExecutionTrackers; // @synthesize testTokensToExecutionTrackers=_testTokensToExecutionTrackers;
@property BOOL testRunnerHasFinishedExecutingTests; // @synthesize testRunnerHasFinishedExecutingTests=_testRunnerHasFinishedExecutingTests;
@property BOOL testRunnerHasBecomeReady; // @synthesize testRunnerHasBecomeReady=_testRunnerHasBecomeReady;
@property(retain) NSFileHandle *standardOutputAndStandardErrorFromTests; // @synthesize standardOutputAndStandardErrorFromTests=_standardOutputAndStandardErrorFromTests;
@property(retain) DVTObservingToken *debuggerPausedObserverToken; // @synthesize debuggerPausedObserverToken=_debuggerPausedObserverToken;
@property(retain) IDETestOperationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain) NSArray *OSXCrashReportObservers; // @synthesize OSXCrashReportObservers=_OSXCrashReportObservers;
@property BOOL testingIsFinished; // @synthesize testingIsFinished=_testingIsFinished;
@property(retain, nonatomic) NSTimer *heartbeatNotificationTimer; // @synthesize heartbeatNotificationTimer=_heartbeatNotificationTimer;
@property(retain, nonatomic) NSTimer *delegateBlockQueueTimeoutTimer; // @synthesize delegateBlockQueueTimeoutTimer=_delegateBlockQueueTimeoutTimer;
@property BOOL targetIsiOSSimulator; // @synthesize targetIsiOSSimulator=_targetIsiOSSimulator;
@property(retain) NSDateFormatter *loggingDateFormatter; // @synthesize loggingDateFormatter=_loggingDateFormatter;
@property(retain) IDETestingDiagnosticLogArbiter *logArbiter; // @synthesize logArbiter=_logArbiter;
@property(retain) NSObject<OS_dispatch_queue> *statusStreamQueue; // @synthesize statusStreamQueue=_statusStreamQueue;
@property(retain) NSOutputStream *statusStream; // @synthesize statusStream=_statusStream;
@property(retain, nonatomic) IDEConsoleAdaptor *consoleAdaptor; // @synthesize consoleAdaptor=_consoleAdaptor;
@property(retain) NSMutableArray *delegateBlockQueue; // @synthesize delegateBlockQueue=_delegateBlockQueue;
@property(retain) NSMutableArray *consoleChunkQueue; // @synthesize consoleChunkQueue=_consoleChunkQueue;
@property(retain) IDETestOutputProcessor *outputProcessor; // @synthesize outputProcessor=_outputProcessor;
@property int testRunnerPID; // @synthesize testRunnerPID=_testRunnerPID;
@property(retain) NSTimer *startupTimeoutTimer; // @synthesize startupTimeoutTimer=_startupTimeoutTimer;
@property(retain) DVTDisallowFinishToken *disallowFinishToken; // @synthesize disallowFinishToken=_disallowFinishToken;
@property BOOL hasStartedTests; // @synthesize hasStartedTests=_hasStartedTests;
@property BOOL hasFailed; // @synthesize hasFailed=_hasFailed;
@property(retain) id iPhoneSimulatorLogHandlerToken; // @synthesize iPhoneSimulatorLogHandlerToken=_iPhoneSimulatorLogHandlerToken;
@property(retain) id iPhoneConnectLogHandlerToken; // @synthesize iPhoneConnectLogHandlerToken=_iPhoneConnectLogHandlerToken;
@property(retain) IDETestOperationEventSource *testOperationEventSource; // @synthesize testOperationEventSource=_testOperationEventSource;
@property(retain) IDELaunchSessionEventSource *launchSessionEventSource; // @synthesize launchSessionEventSource=_launchSessionEventSource;
@property(retain) XCTDaemonControlSession *daemonControlSession; // @synthesize daemonControlSession=_daemonControlSession;
@property(retain) XCTTestRunnerSession *testRunnerSession; // @synthesize testRunnerSession=_testRunnerSession;
@property(retain) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property BOOL finished; // @synthesize finished=_finished;
@property(retain) NSMutableArray *validatorsStack; // @synthesize validatorsStack=_validatorsStack;
@property(retain) DVTDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain) IDETestRunner *testRunner; // @synthesize testRunner=_testRunner;
@property(retain) id <IDETestOperationCoordinatorEvents> delegate; // @synthesize delegate=_delegate;
@property(retain) DVTOperation *testRunnerSessionStartupOperation; // @synthesize testRunnerSessionStartupOperation=_testRunnerSessionStartupOperation;
@property(retain) NSString *diagnosticLogPath; // @synthesize diagnosticLogPath=_diagnosticLogPath;
@property(readonly) IDERunOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)cancelExecutionTrackersAndWaitUntilFinished;
- (BOOL)terminateProcessWithToken:(id)arg1 error:(id *)arg2;
- (id)progressForLaunchWithToken:(id)arg1 error:(id *)arg2;
- (void)launchProcessWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_executeOperation:(id)arg1 withPath:(id)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_observeExitOfLaunchSession:(id)arg1 withToken:(id)arg2;
- (void)_observeCompletionOfTracker:(id)arg1 withToken:(id)arg2 path:(id)arg3 bundleID:(id)arg4;
- (id)_launchParametersForProcessWithPath:(id)arg1 bundleID:(id)arg2 arguments:(id)arg3 environmentVariables:(id)arg4;
- (id)_addMainThreadCheckerToEnvironmentVariables:(id)arg1;
- (id)_addTargetBootstrapInjectionToEnvironmentVariables:(id)arg1;
- (void)testRunnerSession:(id)arg1 didReportSelfDiagnosisIssue:(id)arg2 description:(id)arg3;
- (void)testRunnerSession:(id)arg1 didReceiveDebugLogMessage:(id)arg2;
- (void)testRunnerSession:(id)arg1 didReceiveLogMessage:(id)arg2;
- (id)testRunnerSession:(id)arg1 progressForLaunchWithToken:(id)arg2 error:(id *)arg3;
- (BOOL)testRunnerSession:(id)arg1 terminateProcessWithToken:(id)arg2 error:(id *)arg3;
- (void)testRunnerSession:(id)arg1 launchProcessWithParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)testRunnerSession:(id)arg1 testCase:(id)arg2 method:(id)arg3 didMeasureMetric:(id)arg4 sourceLocation:(id)arg5;
- (void)testRunnerSession:(id)arg1 testCase:(id)arg2 method:(id)arg3 didFinishActivity:(id)arg4;
- (void)testRunnerSession:(id)arg1 testCase:(id)arg2 method:(id)arg3 willStartActivity:(id)arg4;
- (void)testRunnerSession:(id)arg1 testCase:(id)arg2 method:(id)arg3 didStallOnMainThreadAtSourceLocation:(id)arg4;
- (void)testRunnerSession:(id)arg1 testCaseDidFinishForTestClass:(id)arg2 method:(id)arg3 status:(id)arg4 duration:(double)arg5;
- (void)testRunnerSession:(id)arg1 testCaseDidFailForTestClass:(id)arg2 method:(id)arg3 failureMessage:(id)arg4 sourceLocation:(id)arg5;
- (void)testRunnerSession:(id)arg1 testCaseDidStartForTestClass:(id)arg2 method:(id)arg3;
- (void)testRunnerSession:(id)arg1 testSuite:(id)arg2 didFinishAt:(id)arg3 runCount:(unsigned long long)arg4 failureCount:(unsigned long long)arg5 unexpectedFailureCount:(unsigned long long)arg6 testDuration:(double)arg7 totalDuration:(double)arg8;
- (void)testRunnerSession:(id)arg1 testSuite:(id)arg2 didStartAt:(id)arg3;
- (void)testRunnerSession:(id)arg1 initializationForUITestingDidFailWithError:(id)arg2;
- (void)testRunnerSessionDidStartInitializingForUITesting:(id)arg1;
- (void)_considerFinishing;
- (void)testRunnerSessionDidFinishExecutingTests:(id)arg1;
- (void)testRunnerSessionDidStartExecutingTests:(id)arg1;
- (void)testRunnerSessionDidDisconnect:(id)arg1;
- (void)testRunnerSession:(id)arg1 didFailInitializationWithError:(id)arg2;
- (void)testRunnerSessionDidBecomeReady:(id)arg1;
- (void)_considerWhitelistingTestRunner;
- (void)testRunnerSessionDidAcquireConnection:(id)arg1;
- (void)daemonControlSession:(id)arg1 didReportSelfDiagnosisIssue:(id)arg2 description:(id)arg3;
- (void)daemonControlSession:(id)arg1 didReceiveDebugLogMessage:(id)arg2;
- (void)daemonControlSession:(id)arg1 didReceiveCrashReportData:(id)arg2 fileName:(id)arg3;
- (void)daemonSessionDidDisconnect:(id)arg1;
- (void)logDebugMessage:(id)arg1;
- (void)_handleSymbolicatedCrashLog:(id)arg1;
- (void)_handleDemangledCrashLog:(id)arg1;
- (void)_handleCrashReportData:(id)arg1 fromFileWithName:(id)arg2;
- (BOOL)validateEvent:(int)arg1;
- (void)_enqueueDelegateBlock:(CDUnknownBlockType)arg1;
- (void)_executeDelegateBlockWithNextConsoleChunk:(CDUnknownBlockType)arg1;
- (void)_considerDispatchingDelegateBlock;
- (void)_enqueueConsoleChunk:(id)arg1;
- (void)_flushDelegateBlockQueue;
- (void)_delegateBlockQueueTimeoutTimerFired;
- (void)_considerFlushingDelegateBlockQueue;
- (void)heartbeatNotificationTimerDidFire:(id)arg1;
- (void)_queueHeartbeatNotification;
- (id)parseConsoleOutputFromOriginalOutput:(id)arg1;
- (void)_reportFinishToRunnerWithError:(id)arg1;
- (id)_finalErrorFromError:(id)arg1;
- (void)_tearDownLoggingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_detectAndMessageTrace_r17733855_fromError:(id)arg1;
- (void)_reallyFinishWithError:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (BOOL)_shouldSyncDeviceCrashLogs;
- (void)_logAtLevel:(unsigned long long)arg1 message:(id)arg2;
- (void)_logMessage:(id)arg1 needsPrefix:(BOOL)arg2;
- (id)_logMessagePrefix;
- (BOOL)_logMessageWantsWriteToStdout;
- (void)writeLogStatus:(id)arg1;
- (void)writeLogData:(id)arg1;
- (void)_reportStartupFailure:(id)arg1 errorCode:(unsigned long long)arg2;
- (void)_reportStartupProgress:(id)arg1 withTimeoutInterval:(double)arg2;
- (void)_startupTimedOut:(id)arg1;
- (void)_waitForLaunch;
- (double)_defaultTimeoutInterval;
- (void)_requestCrashReportCollection;
- (void)_updateCrashObserverWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleOSXCrashReportAtPath:(id)arg1;
- (void)_checkUITestingPermissionsInBackgroundForPID:(int)arg1;
- (void)_checkUITestingPermissionsForPID:(int)arg1;
- (void)_handleUITestingPermissionsResponseForPID:(int)arg1 isPermitted:(BOOL)arg2 error:(id)arg3;
- (void)_setXcodeUITestingAgentAsResponsibleProcessForPID:(int)arg1;
- (void)_whitelistTestRunnerPID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)waitForTestProcessToConnect;
- (void)launchSessionDidFinalizeWithDescription:(id)arg1 userInfo:(id)arg2;
- (void)launchSessionExitedWithCode:(int)arg1 hasCrashed:(BOOL)arg2;
- (void)launchSessionGotPID:(int)arg1;
- (void)launchSessionCompletedInitialIntensiveFileIO;
- (void)launchSessionExpired;
- (void)launchSessionAddedConsoleAdaptor:(id)arg1;
- (void)launchSessionEncounteredAlertError:(id)arg1;
- (void)launchSessionStarted;
- (void)testOperationEncounteredError:(id)arg1;
- (void)testOperationCancelledWithError:(id)arg1;
- (void)_observeDebuggerPauseForLaunchSession:(id)arg1;
- (void)_handleDebugSessionStateChange:(id)arg1;
- (void)_notifyTestProcessThatDebugSessionPaused:(id)arg1;
- (void)_registerHandlersForOtherLogAspects;
- (void)_prepareDiagnosticLoggingStream;
- (id)_validatedPathForFilenameWithPrefix:(id)arg1;
@property(readonly) NSString *temporaryDirectoryPath;
- (BOOL)isTestRunnerSessionAvailable;
- (id)initWithTestRunOperation:(id)arg1 forTestRunner:(id)arg2;
- (id)initWithDelegate:(id)arg1 forTestRunner:(id)arg2;
- (void)primitiveInvalidate;
- (BOOL)validateEvent:(int)arg1 error:(id *)arg2;
- (void)initializeValidatorsStack;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

