//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DVTPlatform, NSArray, NSNumber, NSSet, NSString;

@interface DVTExtendedPlatformInfo : NSObject
{
    BOOL _requiresProxiedDevicesToBeRegistered;
    BOOL _requiresPortalAppGroups;
    BOOL _universalProfileRequiresCloudContainerEnvironmentString;
    BOOL _requiresExplicitAppIDForGameCenter;
    BOOL _requiresLocalGameCenterEntitlement;
    BOOL _useFallbackEntitlementsInXBS;
    BOOL _devicesEligibleOnlyIfRunnableMatchesPlatform;
    BOOL _prefersModelSpecificSupportDirectories;
    BOOL _ignoreDevices;
    BOOL _requiresSRPForNetworkDevelopment;
    NSString *_platformIdentifier;
    NSString *_portalDeviceClass;
    NSArray *_provisioningProfileUTIs;
    NSString *_developerProgramUserDescription;
    NSString *_pushNotificationServiceEntitlement;
    NSString *_correspondingDevicePlatformIdentifier;
    NSString *_correspondingSimulatorPlatformIdentifier;
    NSString *_minimumVersionForAnalytics;
    NSString *_minimumOSForDeviceSupport;
    NSString *_additionalBuiltProductsDirName;
    NSString *_additionalBuiltProductsDirExpression;
    NSString *_minimumOSForDownloadableSymbols;
    NSString *_defaultCodeSignIdentity;
    NSString *_productCategoryIdentifier;
    NSString *_minimumOSForASANWithoutDyldInsertLibrary;
    NSString *_minimumOSForTSanWithoutDyldInsertLibrary;
    NSString *_minimumOSForXPCServiceDebugging;
    NSString *_minimumOSForUnhostedXPCServiceDebugging;
    NSString *_minimumOSForTestManagerDaemon;
    NSString *_minimumOSForRecordedFrames;
    NSString *_minimumOSForMainThreadChecker;
    NSString *_minimumOSForBackgroundFetchEvents;
    unsigned long long _backgroundFetchSupportStyle;
    NSNumber *_machOMinOSLoadCommand;
    NSString *_minimumOSForNetworkedDevelopment;
    NSString *_minimumOSForLaunchActivateSuspended;
    NSString *_analyticsPlatformIdentifier;
    NSSet *_destinationSpecifierAliases;
}

+ (id)extendedPlatformInfoForPlatformIdentifier:(id)arg1 error:(id *)arg2;
+ (id)extendedPlatformInfoForPlatformIdentifier:(id)arg1;
@property(readonly) BOOL requiresSRPForNetworkDevelopment; // @synthesize requiresSRPForNetworkDevelopment=_requiresSRPForNetworkDevelopment;
@property(readonly) NSSet *destinationSpecifierAliases; // @synthesize destinationSpecifierAliases=_destinationSpecifierAliases;
@property(readonly) NSString *analyticsPlatformIdentifier; // @synthesize analyticsPlatformIdentifier=_analyticsPlatformIdentifier;
@property(readonly) NSString *minimumOSForLaunchActivateSuspended; // @synthesize minimumOSForLaunchActivateSuspended=_minimumOSForLaunchActivateSuspended;
@property(readonly) NSString *minimumOSForNetworkedDevelopment; // @synthesize minimumOSForNetworkedDevelopment=_minimumOSForNetworkedDevelopment;
@property(readonly) NSNumber *machOMinOSLoadCommand; // @synthesize machOMinOSLoadCommand=_machOMinOSLoadCommand;
@property(readonly) unsigned long long backgroundFetchSupportStyle; // @synthesize backgroundFetchSupportStyle=_backgroundFetchSupportStyle;
@property(readonly) NSString *minimumOSForBackgroundFetchEvents; // @synthesize minimumOSForBackgroundFetchEvents=_minimumOSForBackgroundFetchEvents;
@property(readonly) NSString *minimumOSForMainThreadChecker; // @synthesize minimumOSForMainThreadChecker=_minimumOSForMainThreadChecker;
@property(readonly) NSString *minimumOSForRecordedFrames; // @synthesize minimumOSForRecordedFrames=_minimumOSForRecordedFrames;
@property(readonly) NSString *minimumOSForTestManagerDaemon; // @synthesize minimumOSForTestManagerDaemon=_minimumOSForTestManagerDaemon;
@property(readonly) NSString *minimumOSForUnhostedXPCServiceDebugging; // @synthesize minimumOSForUnhostedXPCServiceDebugging=_minimumOSForUnhostedXPCServiceDebugging;
@property(readonly) NSString *minimumOSForXPCServiceDebugging; // @synthesize minimumOSForXPCServiceDebugging=_minimumOSForXPCServiceDebugging;
@property(readonly) NSString *minimumOSForTSanWithoutDyldInsertLibrary; // @synthesize minimumOSForTSanWithoutDyldInsertLibrary=_minimumOSForTSanWithoutDyldInsertLibrary;
@property(readonly) NSString *minimumOSForASANWithoutDyldInsertLibrary; // @synthesize minimumOSForASANWithoutDyldInsertLibrary=_minimumOSForASANWithoutDyldInsertLibrary;
@property(readonly) NSString *productCategoryIdentifier; // @synthesize productCategoryIdentifier=_productCategoryIdentifier;
@property(readonly) BOOL ignoreDevices; // @synthesize ignoreDevices=_ignoreDevices;
@property(readonly) NSString *defaultCodeSignIdentity; // @synthesize defaultCodeSignIdentity=_defaultCodeSignIdentity;
@property(readonly) NSString *minimumOSForDownloadableSymbols; // @synthesize minimumOSForDownloadableSymbols=_minimumOSForDownloadableSymbols;
@property(readonly) BOOL prefersModelSpecificSupportDirectories; // @synthesize prefersModelSpecificSupportDirectories=_prefersModelSpecificSupportDirectories;
@property(readonly) BOOL devicesEligibleOnlyIfRunnableMatchesPlatform; // @synthesize devicesEligibleOnlyIfRunnableMatchesPlatform=_devicesEligibleOnlyIfRunnableMatchesPlatform;
@property(readonly) NSString *additionalBuiltProductsDirExpression; // @synthesize additionalBuiltProductsDirExpression=_additionalBuiltProductsDirExpression;
@property(readonly) NSString *additionalBuiltProductsDirName; // @synthesize additionalBuiltProductsDirName=_additionalBuiltProductsDirName;
@property(readonly) NSString *minimumOSForDeviceSupport; // @synthesize minimumOSForDeviceSupport=_minimumOSForDeviceSupport;
@property(readonly) NSString *minimumVersionForAnalytics; // @synthesize minimumVersionForAnalytics=_minimumVersionForAnalytics;
@property(readonly) NSString *correspondingSimulatorPlatformIdentifier; // @synthesize correspondingSimulatorPlatformIdentifier=_correspondingSimulatorPlatformIdentifier;
@property(readonly) NSString *correspondingDevicePlatformIdentifier; // @synthesize correspondingDevicePlatformIdentifier=_correspondingDevicePlatformIdentifier;
@property(readonly) BOOL useFallbackEntitlementsInXBS; // @synthesize useFallbackEntitlementsInXBS=_useFallbackEntitlementsInXBS;
@property(readonly) NSString *pushNotificationServiceEntitlement; // @synthesize pushNotificationServiceEntitlement=_pushNotificationServiceEntitlement;
@property(readonly) BOOL requiresLocalGameCenterEntitlement; // @synthesize requiresLocalGameCenterEntitlement=_requiresLocalGameCenterEntitlement;
@property(readonly) BOOL requiresExplicitAppIDForGameCenter; // @synthesize requiresExplicitAppIDForGameCenter=_requiresExplicitAppIDForGameCenter;
@property(readonly) BOOL universalProfileRequiresCloudContainerEnvironmentString; // @synthesize universalProfileRequiresCloudContainerEnvironmentString=_universalProfileRequiresCloudContainerEnvironmentString;
@property(readonly) BOOL requiresPortalAppGroups; // @synthesize requiresPortalAppGroups=_requiresPortalAppGroups;
@property(readonly) NSString *developerProgramUserDescription; // @synthesize developerProgramUserDescription=_developerProgramUserDescription;
@property(readonly) NSArray *provisioningProfileUTIs; // @synthesize provisioningProfileUTIs=_provisioningProfileUTIs;
@property(readonly) NSString *portalDeviceClass; // @synthesize portalDeviceClass=_portalDeviceClass;
@property(readonly) BOOL requiresProxiedDevicesToBeRegistered; // @synthesize requiresProxiedDevicesToBeRegistered=_requiresProxiedDevicesToBeRegistered;
@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
- (void).cxx_destruct;
@property(readonly) DVTPlatform *primaryPlatform;
@property(readonly) BOOL isSimulatorPlatform;
@property(readonly) DVTPlatform *correspondingSimulatorPlatform;
@property(readonly) DVTPlatform *correspondingDevicePlatform;
- (id)initWithExtension:(id)arg1;

@end

