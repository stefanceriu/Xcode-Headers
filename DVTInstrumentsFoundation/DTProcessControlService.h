//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTProcessControlServiceAuthorizedMethods-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface DTProcessControlService : DTXService <DTProcessControlServiceAuthorizedMethods>
{
    NSMutableArray *_pids;
    NSMutableArray *_sources;
    NSMutableDictionary *_activeIODispatchSources;
    NSObject<OS_dispatch_queue> *_deathNoteQueue;
    NSObject<OS_dispatch_queue> *_synchronousRedirectionQueue;
}

+ (void)registerCapabilities:(id)arg1;
- (void).cxx_destruct;
- (void)watchOutputFileName:(id)arg1 directory:(id)arg2 forPid:(int)arg3;
- (void)watchOutputFileDescriptor:(int)arg1 forPid:(int)arg2;
- (void)handleRedirectionIterationForFileDescriptor:(int)arg1 forPid:(int)arg2 withDispatchSource:(id)arg3;
- (int)maybeRedirectFromFileDescriptor:(int)arg1 fromPid:(int)arg2 withScratchBuffer:(char *)arg3 ofByteLength:(unsigned long long)arg4;
- (int)cleanupPid:(int)arg1;
- (void)sendProcessControlEvent:(id)arg1 toPid:(id)arg2;
- (void)_performMemoryWarningForPid:(int)arg1;
- (void)sendSignal:(id)arg1 toPid:(id)arg2;
- (void)killPid:(id)arg1;
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4;
- (void)suspendPid:(id)arg1;
- (void)resumePid:(id)arg1;
- (void)stopObservingPid:(id)arg1;
- (void)startObservingPid:(id)arg1;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

