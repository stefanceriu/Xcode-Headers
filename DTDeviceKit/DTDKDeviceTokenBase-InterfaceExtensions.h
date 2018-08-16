//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTDeviceKitBase/DTDKDeviceTokenBase.h>

#import <DTDeviceKit/DTDKRemoteDeviceTokenUI-Protocol.h>

@class DTDKRemoteDeviceConnection, DTDKRemoteDeviceConsoleController, DVTPlatform, NSArray, NSImage, NSNumber, NSSet, NSString;
@protocol DTDKRemoteDeviceToken;

@interface DTDKDeviceTokenBase (InterfaceExtensions) <DTDKRemoteDeviceTokenUI>
+ (id)keyPathsForValuesAffectingDeviceImage;
+ (id)keyPathsForValuesAffectingDeviceIcon;
@property(readonly) NSImage *deviceImage;
@property(readonly) NSImage *deviceIcon;

// Remaining properties
@property(readonly, nonatomic) id <DTDKRemoteDeviceToken> activeProxiedDeviceToken;
@property(readonly, copy, nonatomic) NSArray *applicationDictionaries;
@property(readonly, copy) NSSet *applications;
@property(readonly, copy, nonatomic) NSString *bonjourServiceName;
@property(readonly, copy) NSString *buildVersion;
@property(readonly) _Bool canBeWatchCompanion;
@property(readonly, copy) NSArray *connections;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *deviceActivationState;
@property(readonly, copy, nonatomic) NSArray *deviceAddresses;
@property(readonly) _Bool deviceAllowsSecureServices;
@property(readonly, copy) NSString *deviceArchitecture;
@property(readonly, copy) NSNumber *deviceAvailableCapacity;
@property(readonly, copy) NSNumber *deviceBatteryCapacity;
@property(readonly, copy) NSString *deviceBluetoothMAC;
@property(readonly, copy) NSNumber *deviceChipID;
@property(readonly, copy) NSString *deviceClass;
@property(readonly, copy, nonatomic) NSString *deviceClassForDisplay;
@property(readonly, copy) NSString *deviceCodename;
@property(readonly, copy) NSString *deviceColorString;
@property(retain, nonatomic) DTDKRemoteDeviceConsoleController *deviceConsoleController;
@property(readonly, copy, nonatomic) NSString *deviceCrashReporterKey;
@property(readonly, copy) NSString *deviceDevelopmentStatus;
@property(readonly, copy) NSNumber *deviceECID;
@property(readonly, copy) NSString *deviceEnclosureColorString;
@property(readonly, nonatomic) _Bool deviceHasInternalTools;
@property(readonly, nonatomic) _Bool deviceHasStandardTools;
@property(readonly, copy, nonatomic) NSString *deviceHostname;
@property(readonly, copy) NSString *deviceIMEI;
@property(readonly, copy) NSString *deviceIdentifier;
@property(readonly) _Bool deviceIsPaired;
@property(readonly) _Bool deviceIsProduction;
@property(readonly, nonatomic) _Bool deviceIsSupported;
@property(readonly, nonatomic) NSString *deviceModelUTI;
@property(readonly, copy) NSString *deviceName;
@property(readonly, copy, nonatomic) NSString *deviceProcessorDescription;
@property(readonly, copy) NSNumber *deviceProductionSOC;
@property(readonly) long long deviceRsyncPort;
@property(readonly) long long deviceSSHPort;
@property(readonly, copy) NSString *deviceSerialNumber;
@property(readonly, copy, nonatomic) NSString *deviceSoftwareVersion;
@property(readonly) long long deviceTelnetPort;
@property(readonly, copy) NSString *deviceToolsType;
@property(readonly, copy) NSNumber *deviceTotalCapacity;
@property(readonly, copy) NSString *deviceType;
@property(readonly, copy) NSString *deviceWiFiMAC;
@property(readonly, nonatomic) _Bool hasDirectConnection;
@property(readonly) _Bool hasLoaded_buildVersion;
@property(readonly) _Bool hasLoaded_canBeWatchCompanion;
@property(readonly) _Bool hasLoaded_deviceActivationState;
@property(readonly) _Bool hasLoaded_deviceArchitecture;
@property(readonly) _Bool hasLoaded_deviceAvailableCapacity;
@property(readonly) _Bool hasLoaded_deviceBatteryCapacity;
@property(readonly) _Bool hasLoaded_deviceBluetoothMAC;
@property(readonly) _Bool hasLoaded_deviceChipID;
@property(readonly) _Bool hasLoaded_deviceClass;
@property(readonly) _Bool hasLoaded_deviceCodename;
@property(readonly) _Bool hasLoaded_deviceColorString;
@property(readonly) _Bool hasLoaded_deviceDevelopmentStatus;
@property(readonly) _Bool hasLoaded_deviceECID;
@property(readonly) _Bool hasLoaded_deviceEnclosureColorString;
@property(readonly) _Bool hasLoaded_deviceIMEI;
@property(readonly) _Bool hasLoaded_deviceIsProduction;
@property(readonly) _Bool hasLoaded_deviceName;
@property(readonly) _Bool hasLoaded_deviceProductionSOC;
@property(readonly) _Bool hasLoaded_deviceSerialNumber;
@property(readonly) _Bool hasLoaded_deviceToolsType;
@property(readonly) _Bool hasLoaded_deviceTotalCapacity;
@property(readonly) _Bool hasLoaded_deviceType;
@property(readonly) _Bool hasLoaded_deviceWiFiMAC;
@property(readonly) _Bool hasLoaded_isPasscodeLocked;
@property(readonly) _Bool hasLoaded_productVersion;
@property(readonly, nonatomic) _Bool hasWiredConnection;
@property(readonly, nonatomic) _Bool hasWirelessConnection;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly) _Bool isPasscodeLocked;
@property(readonly, nonatomic) _Bool isSupportedOS;
@property(readonly, nonatomic) NSString *localizedDeviceModel;
@property(readonly) DVTPlatform *platform;
@property(readonly) DTDKRemoteDeviceConnection *primaryConnection;
@property(readonly) DTDKRemoteDeviceConnection *primaryWiredConnection;
@property(readonly) DTDKRemoteDeviceConnection *primaryWirelessConnection;
@property(readonly, copy) NSString *productVersion;
@property(readonly, copy, nonatomic) NSSet *provisioningProfiles;
@property(readonly, copy, nonatomic) NSSet *proxiedDeviceTokens;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *supportedDeviceFamilies;
@property(readonly, copy, nonatomic) NSArray *systemApplicationDictionaries;
@property(readonly, copy) NSSet *systemApplications;
@property(readonly, nonatomic) void *wakeupToken;
@end

