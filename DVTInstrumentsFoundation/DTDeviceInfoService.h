//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXService.h"

#import "DTDeviceInfoServiceAuthorizedAPI.h"

@class NSString;

@interface DTDeviceInfoService : DTXService <DTDeviceInfoServiceAuthorizedAPI>
{
    struct __CFDictionary *_trackingSymbolicatorsByPid;
    struct kpep_db *_kpepDB;
}

+ (BOOL)isApplication:(id)arg1;
+ (void)registerCapabilities:(id)arg1;
- (id)networkInformation;
- (id)kpepDatabase;
- (id)traceCodesFile;
- (id)cpDeviceName;
- (id)cpDeviceInfoAsXML;
- (id)cpKDebugEventsAsXML;
- (id)systemInformation;
- (id)productVersion;
- (id)uniqueID;
- (id)lookupSysctl:(const char *)arg1;
- (id)hardwareInformation;
- (int)hwCPU64BitCapable;
- (int)hwCPUtype;
- (int)hwCPUsubtype;
- (int)speedOfCpus;
- (int)numberOfCpus;
- (int)numberOfPhysicalCpus;
- (id)iconDescriptionForIconPath:(id)arg1;
- (id)iconDescriptionFileForAppPath:(id)arg1;
- (id)directoryListingForPath:(id)arg1;
- (id)symbolicatorSignaturesForExpiredPids;
- (void)unregisterSignatureTrackingForPid:(id)arg1;
- (id)symbolicatorSignatureForPid:(id)arg1 trackingSelector:(id)arg2;
- (id)machKernelName;
- (id)pidIs64Bit:(id)arg1;
- (id)isRunningPid:(id)arg1;
- (id)execnameForPid:(id)arg1;
- (id)nameForGID:(id)arg1;
- (id)nameForUID:(id)arg1;
- (id)runningProcesses;
- (id)machTimeInfo;
- (void)messageReceived:(id)arg1;
- (void)dealloc;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

