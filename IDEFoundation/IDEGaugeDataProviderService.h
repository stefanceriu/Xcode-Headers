//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTDeviceService.h"

@class DVTMutableOrderedDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet;

@interface IDEGaugeDataProviderService : DVTDeviceService
{
    DVTMutableOrderedDictionary *_coordinatorsByPID;
    NSSet *_startedPids;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_timer;
    _Bool _suspended;
    BOOL _useProxiedDevice;
}

+ (id)observableAttributes;
+ (id)capability;
@property BOOL useProxiedDevice; // @synthesize useProxiedDevice=_useProxiedDevice;
- (void).cxx_destruct;
- (id)stopSamplingForPIDs:(id)arg1;
- (id)sampleAttributes:(id)arg1 forPIDs:(id)arg2;
- (id)startSamplingForPIDs:(id)arg1;
- (void)stopSampling;
- (void)resumeSampling;
- (void)pauseSampling;
- (void)startSamplingAtTime:(double)arg1 withInterval:(double)arg2;
- (void)didStopSampling;
- (void)willResumeSampling;
- (void)didPauseSampling;
- (void)willStartSamplingAtTime:(double)arg1 withInterval:(double)arg2;
- (void)stopTimer;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)startTimerAtTime:(double)arg1 withInterval:(double)arg2;
- (void)removeAssociatedQueryCoordinator:(id)arg1;
- (void)addAssociatedQueryCoordinator:(id)arg1;
- (void)performServiceQueueBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initForDevice:(id)arg1 extension:(id)arg2 capability:(id)arg3;

@end

