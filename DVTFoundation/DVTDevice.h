//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DVTFoundation/DVTBasicDevice-Protocol.h>

@class DTXChannel, DVTDeviceType, DVTDispatchLock, DVTExtension, DVTPlatform, NSArray, NSData, NSError, NSMutableArray, NSMutableSet, NSOrderedSet, NSSet, NSString, NSURL;
@protocol DVTBasicDevice, OS_dispatch_queue;

@interface DVTDevice : NSObject <DVTBasicDevice>
{
    NSObject<OS_dispatch_queue> *_instrumentsServerMessageQueue;
    unsigned long long _state;
    NSMutableArray *_deviceOperations;
    DVTDispatchLock *_deviceOperationLock;
    NSMutableSet *_capabilities;
    DTXChannel *_appExtensionInstallObserverChannel;
    DTXChannel *_appExtensionInstallObserverChannel_proxy;
    NSObject<OS_dispatch_queue> *_appListingChannelQueue;
    NSObject<OS_dispatch_queue> *_stateControlQueue;
    _Bool _deviceIsBusy;
    BOOL _ignored;
    BOOL _canSelectArchitectureToExecute;
    BOOL _available;
    BOOL _usedForDevelopment;
    DVTExtension *_extension;
    NSURL *_deviceLocation;
    NSString *_nativeArchitecture;
    NSString *_operatingSystemVersionWithBuildNumber;
    NSString *_modelUTI;
    NSString *_modelName;
    DVTDeviceType *_deviceType;
    NSOrderedSet *_supportedArchitectures;
    long long _directSSHPort;
    long long _remoteSSHPort;
    long long _rsyncPort;
    NSString *_name;
    NSString *_modelCode;
    DVTPlatform *_platform;
    NSString *_operatingSystemVersion;
    NSString *_operatingSystemBuild;
    NSString *_identifier;
}

+ (id)keyPathsForValuesAffectingHasConnection;
+ (id)modelNameFromModelUTI:(id)arg1;
+ (id)modelUTIFromModelCode:(id)arg1;
+ (id)keyPathsForValuesAffectingActiveProxiedDevice;
+ (id)_knownDeviceLocators;
+ (void)initialize;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *operatingSystemBuild; // @synthesize operatingSystemBuild=_operatingSystemBuild;
@property(copy) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(retain) DVTPlatform *platform; // @synthesize platform=_platform;
@property(nonatomic, getter=isUsedForDevelopment) BOOL usedForDevelopment; // @synthesize usedForDevelopment=_usedForDevelopment;
@property(getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(copy, nonatomic) NSString *modelCode; // @synthesize modelCode=_modelCode;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly) long long rsyncPort; // @synthesize rsyncPort=_rsyncPort;
@property(readonly) long long remoteSSHPort; // @synthesize remoteSSHPort=_remoteSSHPort;
@property(readonly) long long directSSHPort; // @synthesize directSSHPort=_directSSHPort;
@property BOOL canSelectArchitectureToExecute; // @synthesize canSelectArchitectureToExecute=_canSelectArchitectureToExecute;
@property(copy) NSOrderedSet *supportedArchitectures; // @synthesize supportedArchitectures=_supportedArchitectures;
@property(retain) DVTDeviceType *deviceType; // @synthesize deviceType=_deviceType;
@property(getter=isIgnored) BOOL ignored; // @synthesize ignored=_ignored;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *modelUTI; // @synthesize modelUTI=_modelUTI;
@property(copy, nonatomic) NSString *operatingSystemVersionWithBuildNumber; // @synthesize operatingSystemVersionWithBuildNumber=_operatingSystemVersionWithBuildNumber;
@property(readonly, copy) NSURL *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (BOOL)supportsDYLDPrintToStdErr;
- (BOOL)supportsNewLogging;
- (id)_mobileDevice;
- (id)loggingStream;
- (id)fetchSpecificLaunchFailureReason;
- (id)launchApplicationWithBundleIdentifier:(id)arg1 withArguments:(id)arg2 environment:(id)arg3 options:(id)arg4;
- (id)applicationIsInstalledWithBundleIdentifier:(id)arg1;
- (id)uninstallApplicationWithBundleIdentifier:(id)arg1 andOptions:(id)arg2;
- (id)installApplicationAtPath:(id)arg1 withOptions:(id)arg2;
@property(readonly) BOOL canInstallApplication;
- (id)runExecutableAtPath:(id)arg1 withArguments:(id)arg2 environment:(id)arg3 options:(id)arg4 terminationHandler:(CDUnknownBlockType)arg5;
@property(readonly) BOOL canRunExecutables;
- (unsigned long long)makeDeviceReadyForDevelopmentSyncWithError:(id *)arg1;
- (unsigned long long)establishDevelopmentTrustSyncWithError:(id *)arg1;
- (unsigned long long)startDeviceSyncWithError:(id *)arg1;
- (unsigned long long)connectToDeviceSyncWithError:(id *)arg1;
- (unsigned long long)discoverAvailableConnectionsSyncWithError:(id *)arg1;
- (void)makeDeviceReadyForDevelopmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)establishDevelopmentTrustWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)connectToDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)discoverAvailableConnectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_transitionToState:(unsigned long long)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setState:(unsigned long long)arg1;
@property(readonly) unsigned long long state;
@property(readonly) BOOL allowsManagedStateControl;
- (id)shutDownDevice;
- (id)startUpDevice;
@property(readonly) BOOL canStartUpAndShutDown;
- (BOOL)wantsDeviceOperationActivityReporting;
- (void)endDeviceOperation:(id)arg1;
- (id)_startDeviceOperationUserInitiated:(BOOL)arg1;
- (id)startUserInitiatedDeviceOperation;
- (id)startDeviceOperation;
- (void)takeScreenshotWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) _Bool canTakeScreenshot;
- (void)_syncDeviceCrashLogsDirectoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)attemptRecoveryFromUnavailabilityError;
- (void)forget;
@property(readonly) NSString *hostPairingToken;
- (void)unpair;
- (_Bool)extendedPairWithError:(id *)arg1 extendedInformationHandler:(CDUnknownBlockType)arg2;
@property(readonly) _Bool isPaired;
@property(readonly) _Bool usesPairingRecord;
@property(readonly) _Bool canEnableWireless;
- (void)disableWireless;
- (id)enableWireless;
@property(readonly) _Bool isWirelessEnabled;
@property(readonly, copy) NSArray *addresses;
@property(readonly, copy) NSString *primaryAddress;
@property(readonly, copy) NSString *hostname;
@property(readonly) _Bool hasConnection;
@property(readonly) _Bool hasWiredConnection;
@property(readonly) _Bool hasWirelessConnection;
@property(readonly) _Bool isWireless;
- (void)purgeResourceWithTag:(id)arg1 bundleIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)purgeAllResourcesForBundleIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_resourceControlChannel:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showMessagesExtensionOnProxy:(BOOL)arg1 completed:(CDUnknownBlockType)arg2;
- (void)simulateNotificationWithBundleID:(id)arg1 payload:(id)arg2 onProxy:(BOOL)arg3 completed:(CDUnknownBlockType)arg4;
- (void)pressHomeButtonOnProxy:(BOOL)arg1 completed:(CDUnknownBlockType)arg2;
- (void)showSiriForExtensions:(id)arg1 queryText:(id)arg2 pid:(int)arg3 onProxy:(BOOL)arg4 completed:(CDUnknownBlockType)arg5;
- (void)showQuicklookPreviewForExtension:(id)arg1;
- (void)showTodayViewForExtensions:(id)arg1 pid:(int)arg2;
- (id)serviceHubProcessControlChannelOnProxy:(BOOL)arg1;
- (id)serviceHubProcessControlChannel;
- (void)terminateWatchAppForCompanionIdentifier:(id)arg1 options:(id)arg2 completionSemaphore:(id)arg3;
- (BOOL)_shouldAttemptToRetryWatchAppLaunchAttemptForLaunchError:(id)arg1;
- (void)_attemptToLaunchWatchAppForCompanionIdentifier:(id)arg1 options:(id)arg2 completionblock:(CDUnknownBlockType)arg3 attempt:(unsigned long long)arg4;
- (void)launchWatchAppForCompanionIdentifier:(id)arg1 options:(id)arg2 completionblock:(CDUnknownBlockType)arg3;
- (void)willInstallWatchAppForCompanionIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)listenForInstallOfAppExtensionIdentifiers:(id)arg1 onPairedDevice:(BOOL)arg2;
- (id)_applicationListingChannelForPairedDevice:(BOOL)arg1;
@property(readonly) unsigned long long supportedLaunchOptionsForProxiedDevice;
@property(readonly) unsigned long long supportedLaunchOptions;
- (void)cancelPrimaryInstrumentsServer;
- (id)proxiedPrimaryInstrumentsServer;
- (id)primaryInstrumentsServer;
- (void)renameDevice:(id)arg1;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canBeWatchCompanion;
- (void)disableDeviceForDevelopment;
- (void)enableDeviceForDevelopment;
- (id)installApplicationsSync:(id)arg1 options:(id)arg2;
- (id)installApplicationSync:(id)arg1 options:(id)arg2;
- (void)stopDebuggingXPCServices:(id)arg1 forPairedDevice:(BOOL)arg2;
- (void)debugXPCServices:(id)arg1 onPairedDevice:(BOOL)arg2 completionSemaphore:(id)arg3;
- (BOOL)validateDeviceSpecifierOptions:(id)arg1 allowMultipleMatches:(BOOL)arg2 error:(id *)arg3;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly) BOOL isRunningSupportedOS;
@property(readonly) BOOL isSupportedHardware;
@property(readonly) BOOL canIgnore;
- (void)uninstallProvisioningProfile:(id)arg1;
- (BOOL)installProvisioningProfileAtURL:(id)arg1 error:(id *)arg2;
- (void)installProvisioningProfile:(id)arg1;
@property(readonly) NSSet *provisioningProfiles;
@property(readonly) BOOL supportsProvisioning;
@property(readonly) BOOL supportsArchiving;
- (BOOL)canPerformUbiquityFetchEvent;
- (void)performUbiquityFetchEvent;
- (void)snapshotUIForBundleIdentifier:(id)arg1 orPid:(int)arg2 onProxy:(BOOL)arg3 completed:(CDUnknownBlockType)arg4;
- (void)performFetchEventForBundleIdentifier:(id)arg1 orPid:(int)arg2 onProxy:(BOOL)arg3;
- (unsigned long long)backgroundFetchSupportStyle;
@property(readonly) unsigned long long supportsFetchEvents;
- (BOOL)threadSanitizerRequiresDyldInsertLibrary;
- (BOOL)addressSanitizerRequiresDyldInsertLibrary;
- (BOOL)downloadRuntimeProfilesFromDirectory:(id)arg1 forApplicationWithBundleIdentifier:(id)arg2 toDestinationDirectory:(id)arg3 error:(id *)arg4;
- (id)createRuntimeProfileDirectoryForApplicationWithBundleIdentifier:(id)arg1 error:(id *)arg2;
@property(readonly) BOOL deferProfileGenerationSetupUntilAfterInstallation;
- (BOOL)supportsPGOReturningError:(id *)arg1;
@property(readonly) BOOL disablesOnlyActiveArch;
@property(readonly) BOOL supportsDebuggingForAskOnLaunch;
@property(readonly) BOOL supportsUnhostedXPCServiceDebugging;
@property(readonly) BOOL supportsXPCServiceDebugging;
- (BOOL)supportsUISnapshotOnProxy:(BOOL)arg1;
@property(readonly) BOOL canRunMultipleInstancesPerApp;
@property(readonly) BOOL runsRemoteFromHostLauncher;
@property(readonly) BOOL supportsDebugAsDifferentUser;
@property(readonly) BOOL supportsDebuggingDocumentVersioning;
@property(readonly) BOOL supportsResumeAndTurningItOnOrOff;
@property(readonly) BOOL supportsCustomWorkingDirectory;
@property(readonly) BOOL supportsDisplayScaleOption;
@property(readonly) BOOL supportsRoutingCoverageFile;
@property(readonly) BOOL supportsLocalizationOptions;
@property(readonly) BOOL supportsLocationSimulation;
@property(readonly) BOOL supportsBuildingThinnedResources;
@property(readonly) NSString *deviceIdentifierForGPUTracing;
@property(readonly) BOOL supportsApplicationDataUploading;
@property(readonly) BOOL supportsAttachByPIDOrName;
@property(readonly, copy, nonatomic) NSString *modelCodename;
@property(readonly, copy) NSString *processorDescription;
- (void)requestProcessInformationsOnPairedDevice:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly) NSString *executionDisplayName;
- (id)viewDebuggerDylibPathInLaunchSessionWithEnvironmentVariables:(id)arg1;
@property(readonly, copy) NSString *extraDebuggingRuntimeDylibPath;
@property(readonly, copy) NSString *recordedFramesLibdispatchIntrospectionDylibPath;
@property(readonly) BOOL supportsMainThreadChecker;
@property(readonly) BOOL supportsRecordedFrames;
@property(readonly) BOOL alwaysAttachesForDebugging;
@property(readonly, getter=isConcreteDevice) BOOL concreteDevice;
@property(readonly, getter=isGenericDevice) BOOL genericDevice;
@property(readonly) NSData *displayImageBitmapData;
@property(readonly) NSString *displayOrder;
@property(copy) NSString *nativeArchitecture; // @synthesize nativeArchitecture=_nativeArchitecture;
- (void)setDeviceIsBusy:(BOOL)arg1;
@property(readonly) _Bool deviceIsBusy; // @synthesize deviceIsBusy=_deviceIsBusy;
@property(readonly) NSError *unavailabilityError;
@property(readonly) BOOL isProxiedDevice;
- (void)setActiveProxiedDevice:(id)arg1;
@property(readonly) BOOL canSetActiveProxiedDevice;
@property(readonly) id <DVTBasicDevice> activeProxiedDevice;
@property(readonly, copy) NSSet *proxiedDevices;
- (id)servicesMatchingCapability:(id)arg1;
- (id)_instantiateServicesForCapability:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithDeviceLocation:(id)arg1 extension:(id)arg2;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSSet *capabilities; // @dynamic capabilities;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSArray *deviceOperations; // @dynamic deviceOperations;
@property(readonly, copy) NSMutableSet *mutableCapabilities; // @dynamic mutableCapabilities;
@property(readonly, copy) NSMutableArray *mutableDeviceOperations; // @dynamic mutableDeviceOperations;
@property(readonly) Class superclass;

@end

