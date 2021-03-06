//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEiOSSupportCore/DVTAbstractiOSDevice.h>

#import <IDEiOSSupportCore/DVTDeviceApplicationProvider-Protocol.h>
#import <IDEiOSSupportCore/IDERunDestinationFallbackSelectorDeviceInfo-Protocol.h>
#import <IDEiOSSupportCore/NSFileManagerDelegate-Protocol.h>
#import <IDEiOSSupportCore/XCDTMobileIS_XPCDebuggingProcotol-Protocol.h>

@class DTAssetProviderService, DTXChannel, DTXConnection, DVTDeviceOperation, DVTDispatchLock, DVTObservingToken, DVTPlatform, DVTProxiedDeviceSet, DVTSimulatorApplication, NSArray, NSDictionary, NSMutableSet, NSNumber, NSObject, NSSet, NSString, SimDevice, SimDeviceType;
@protocol DVTCancellable, OS_dispatch_semaphore;

@interface DVTiPhoneSimulator : DVTAbstractiOSDevice <NSFileManagerDelegate, IDERunDestinationFallbackSelectorDeviceInfo, DVTDeviceApplicationProvider, XCDTMobileIS_XPCDebuggingProcotol>
{
    id <DVTCancellable> _deviceNotificationToken;
    id <DVTCancellable> _deviceSetNotificationToken;
    DVTObservingToken *_locatedDeviceObservingToken;
    NSString *_displayOrder;
    BOOL _ignored;
    BOOL _weBootedThisSimulatorInstance;
    struct __CFDictionary *_xpcStdoutFDForPid;
    NSString *_extraDebuggingRuntimeDylibPath;
    NSSet *_applications;
    NSDictionary *_applicationsDict;
    DTXConnection *_instrumentsConnection;
    NSObject<OS_dispatch_semaphore> *_instrumentsConnectionSemaphore;
    DVTSimulatorApplication *_simulatorApplication;
    long long _currentSessionMode;
    NSMutableSet *_activeLaunchSessionClaims;
    DVTDispatchLock *_activeLaunchSessionClaimsLock;
    DVTDeviceOperation *_currentBootOperation;
    DVTDispatchLock *_bootOperationLock;
    int _simulatorPID;
    DVTPlatform *_platform;
    SimDevice *_device;
    DTXChannel *_xpcAttachServiceChannel;
    DTXChannel *_xpcProxyAttachServiceChannel;
    DTAssetProviderService *_assetProvider;
    DVTProxiedDeviceSet *_proxiedDeviceSet;
}

+ (id)keyPathsForValuesAffectingActiveProxiedDevice;
+ (id)keyPathsForValuesAffectingProxiedDevices;
+ (id)keyPathsForValuesAffectingSupportsFetchEvents;
+ (id)keyPathsForValuesAffectingSupportsLocationSimulation;
+ (id)keyPathsForValuesAffectingSimDeviceState;
+ (id)keyPathsForValuesAffectingState;
+ (id)simulatorWithDevice:(id)arg1;
+ (void)initialize;
+ (void)_trackPid:(int)arg1 forDevice:(id)arg2 launchService:(id)arg3;
+ (void)cleanUpSessionMap;
@property long long currentSessionMode; // @synthesize currentSessionMode=_currentSessionMode;
@property(readonly) DVTSimulatorApplication *simulatorApplication; // @synthesize simulatorApplication=_simulatorApplication;
@property(retain) DVTProxiedDeviceSet *proxiedDeviceSet; // @synthesize proxiedDeviceSet=_proxiedDeviceSet;
@property(retain) DTAssetProviderService *assetProvider; // @synthesize assetProvider=_assetProvider;
@property(retain) DTXChannel *xpcProxyAttachServiceChannel; // @synthesize xpcProxyAttachServiceChannel=_xpcProxyAttachServiceChannel;
@property(retain) DTXChannel *xpcAttachServiceChannel; // @synthesize xpcAttachServiceChannel=_xpcAttachServiceChannel;
@property BOOL weBootedThisSimulatorInstance; // @synthesize weBootedThisSimulatorInstance=_weBootedThisSimulatorInstance;
@property int simulatorPID; // @synthesize simulatorPID=_simulatorPID;
@property(retain) SimDevice *device; // @synthesize device=_device;
- (id)platform;
- (void).cxx_destruct;
- (void)_shutdownIfNoActiveClaims;
- (id)_devicesToShutdownWhenUnclaimed;
- (void)_shutdownLaterIfNoActiveClaims;
- (void)_relinquishClaimForToken:(id)arg1;
- (void)_claimDeviceForToken:(id)arg1;
- (id)_claimDeviceForLaunchSession:(id)arg1;
- (id)claimDeviceForToken:(id)arg1;
- (id)launchApplicationWithBundleIdentifier:(id)arg1 withArguments:(id)arg2 environment:(id)arg3 options:(id)arg4;
- (BOOL)canInstallApplication;
- (id)runExecutableAtPath:(id)arg1 withArguments:(id)arg2 environment:(id)arg3 options:(id)arg4 terminationHandler:(CDUnknownBlockType)arg5;
- (BOOL)canRunExecutables;
- (void)stopDebuggingXPCServices:(id)arg1 forPairedDevice:(BOOL)arg2;
- (void)xpcServiceObserved:(id)arg1 withProcessIdentifier:(int)arg2 requestedByProcess:(int)arg3 options:(id)arg4;
- (void)outputReceived:(id)arg1 fromProcess:(int)arg2 atTime:(unsigned long long)arg3;
- (void)_debugXPCServices:(id)arg1 onChannel:(id)arg2 completionSemaphore:(id)arg3;
- (void)debugXPCServices:(id)arg1 onPairedDevice:(BOOL)arg2 completionSemaphore:(id)arg3;
- (id)primaryInstrumentsServerWithError:(id *)arg1;
- (id)primaryInstrumentsServer;
- (BOOL)installApplicationWithLaunchSession:(id)arg1 error:(id *)arg2;
- (id)_installedPathForBundleIdentifier:(id)arg1;
- (id)startAssetServerForApplicationAtPath:(id)arg1;
- (id)taskForDeviceCommand:(id)arg1 withArguments:(id)arg2 error:(id *)arg3;
- (id)systemBasePath;
- (void)stopLocationSimulation;
- (void)simulateLocationWithLatitude:(id)arg1 longitude:(id)arg2;
@property(readonly, copy) NSString *description;
- (BOOL)attachedToTarget:(id)arg1 launchService:(id)arg2 error:(id *)arg3;
- (id)launchSimulatedExecutable:(id)arg1 launchService:(id)arg2 error:(id *)arg3;
- (id)_updateTestConfigurationFileAtPath:(id)arg1 forLaunchSession:(id)arg2 applicationBundleID:(id)arg3;
- (long long)_bootSyncForLaunchSession:(id)arg1 error:(id *)arg2;
- (BOOL)_launchSimulatorAppAndStartSessionWithError:(id *)arg1;
- (long long)bootSyncForMode:(long long)arg1 withError:(id *)arg2;
- (long long)prebootSyncForPendingLaunchSessionWithError:(id *)arg1;
- (void)transferDirectionsFileToBundlePath:(id)arg1 launchService:(id)arg2;
- (void)uploadApplicationDataToBundlePath:(id)arg1 launchService:(id)arg2;
- (void)presentErrorWithMessageText:(id)arg1 informativeText:(id)arg2;
- (id)simulatorDirectoriesForAppName:(id)arg1;
- (id)effectiveSDKVersion;
- (BOOL)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)shouldProcessPath:(id)arg1;
@property(readonly) NSSet *systemApplications;
@property(readonly) NSSet *applications;
- (void)_updateApplications;
- (void)_launchSimulatorAndUpdateApplicationsWhenReady;
- (id)uncachedOverridingPropertiesForBuildable:(id)arg1 buildParameters:(id)arg2;
- (id)executionDisplayName;
- (id)supportedSDKsForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)shouldPresentDeviceForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)canBeDefaultDeviceForBuildable:(id)arg1 buildParameters:(id)arg2;
- (id)softwareVersion;
- (void)setDisplayOrder:(id)arg1;
- (id)displayOrder;
@property(readonly, copy) NSArray *supportedDeviceFamilies;
- (BOOL)isProxiedDevice;
- (void)setActiveProxiedDevice:(id)arg1;
- (BOOL)canSetActiveProxiedDevice;
- (void)_updateProxiedDeviceSet;
- (id)activeProxiedDevice;
- (id)proxiedDevices;
- (BOOL)canBeWatchCompanion;
- (id)deviceType;
- (BOOL)isAvailable;
- (id)supportedArchitectures;
- (id)nativeArchitecture;
- (id)operatingSystemVersionWithBuildNumber;
- (id)operatingSystemBuild;
- (id)operatingSystemVersion;
- (void)renameDevice:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (void)setIgnored:(BOOL)arg1;
- (BOOL)isIgnored;
- (BOOL)canIgnore;
- (BOOL)canRename;
- (id)modelCode;
@property(readonly, nonatomic) NSString *ide_fallbackSelectorDeviceGroupingFamily;
- (id)modelUTI;
- (id)modelName;
- (void)downloadOptimizationProfilesFromBundleIdentifier:(id)arg1 orPaths:(id)arg2 toFilePath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)supportsPGOReturningError:(id *)arg1;
- (BOOL)supportsDisplayScaleOption;
- (BOOL)supportsRoutingCoverageFile;
- (void)performUbiquityFetchEvent;
- (BOOL)canPerformUbiquityFetchEvent;
- (id)viewDebuggerDylibPathInLaunchSessionWithEnvironmentVariables:(id)arg1;
- (id)extraDebuggingRuntimeDylibPath;
- (id)recordedFramesLibdispatchIntrospectionDylibPath;
- (unsigned long long)supportsFetchEvents;
- (BOOL)supportsLocationSimulation;
- (unsigned long long)supportedLaunchOptionsForProxiedDevice;
- (unsigned long long)supportedLaunchOptions;
- (BOOL)supportsApplicationDataUploading;
- (id)launchApplicationWithBundleIdentifier:(id)arg1 andOptions:(id)arg2;
- (id)launchApplicationWithBundleIdentifier:(id)arg1;
- (id)spawnExecutableAtPath:(id)arg1 withOptions:(id)arg2 andTerminationHandler:(CDUnknownBlockType)arg3;
- (id)spawnExecutableAtPath:(id)arg1 withOptions:(id)arg2;
- (id)applicationIsInstalledWithBundleIdentifier:(id)arg1;
- (id)propertiesOfApplicationWithBundleIdentifier:(id)arg1;
- (id)uninstallApplicationWithBundleIdentifier:(id)arg1 andOptions:(id)arg2;
- (id)uninstallApplicationWithBundleIdentifier:(id)arg1;
- (id)installApplicationAtPath:(id)arg1 withOptions:(id)arg2;
- (id)installApplicationAtPath:(id)arg1;
- (id)restoreContentsAndSettingsFrom:(id)arg1;
- (id)eraseContentsAndSettings;
- (id)shutdown;
- (id)bootWithOptions:(id)arg1;
@property(readonly) unsigned long long simDeviceState;
@property(readonly) SimDeviceType *deviceInfo;
- (id)shutDownDevice;
- (id)startUpDevice;
- (BOOL)canStartUpAndShutDown;
- (unsigned long long)state;
- (BOOL)allowsManagedStateControl;
- (void)dealloc;
@property(readonly, copy) NSString *simulatorIconFilePath;
@property(readonly) NSNumber *simulatedDeviceFamily;
- (_Bool)_canStartSession:(id *)arg1;
- (id)connectionServicesFrameworkPath;
- (id)claimDeviceForTestingWithSessionIdentifier:(id)arg1;
- (id)testArchitectureForBuildableProduct:(id)arg1 buildParameters:(id)arg2;
- (id)_availableArchitecturesForArchitecture:(id)arg1;
- (id)deviceForRunningTestsWithHost:(id)arg1 error:(id *)arg2;
- (id)testRunnerSessionForConfiguration:(id)arg1;
- (id)testDaemonRecordingSession;
- (id)testDaemonControlSession;
- (id)testDaemonTransportProvider;
- (id)automationFrameworkPath;
- (id)targetBootstrapInjectionPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

