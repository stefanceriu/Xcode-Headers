//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRFrameActivityManager.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, XRFrameActivity;

@interface XRFrameActivityManager : NSObject <XRFrameActivityManager>
{
    const char *_shouldYield;
    id <XRFrameCommutator> _commutator;
    BOOL _yieldFlag;
    BOOL _establishesAffinity;
    BOOL _activitiesCanRunInParallel;
    BOOL _debugCanCallSuspend;
    BOOL _debugCanCallResume;
    unsigned char _suspendCount;
    unsigned int _activityQoS;
    struct XRSerializedAccess<ActivityInfo> _activityInfo;
    NSObject<OS_dispatch_semaphore> *_actionRequired;
    NSObject<OS_dispatch_queue> *_serialActivityQueue;
    struct _opaque_pthread_rwlock_t _insideFrameLock;
    struct _opaque_pthread_rwlock_t _outsideFrameLock;
    XRFrameActivity *_syncActivity;
    int _kdebugCodeBase;
}

+ (void)initialize;
+ (int)_identifierForSignposting;
+ (unsigned int)_activityQoS;
+ (BOOL)_establishesAffinity;
+ (BOOL)_enableConcurrentActivities;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_finalShutdown;
- (void)underrunWarning;
- (void)shutdown;
- (id)_scheduleActivityWithBlock:(CDUnknownBlockType)arg1;
- (void)_scheduleActivityInGroup:(id)arg1 qualityOfService:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (void)_performOutsideMinorFrame:(CDUnknownBlockType)arg1;
- (void)_performDuringMinorFrame:(CDUnknownBlockType)arg1;
- (int)_handleMinorFrameWithDeadline:(unsigned long long)arg1;
- (void)_markAsReady;
- (void)beginMinorFrameWithDeadline:(unsigned long long)arg1;
- (void)_suspendActivitiesWithDeadline:(unsigned long long)arg1;
- (void)_resumeActivities;
- (void)_dispatchScheduledActivitiesUntil:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isReady) BOOL ready;
- (void)_activityFinished:(id)arg1;
- (void)_activityYielded:(id)arg1;
- (BOOL)_hasRunnableActivities;
- (void)setCommutator:(id)arg1;
- (const char *)_shouldYieldFlag;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

