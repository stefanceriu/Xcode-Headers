//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocationScheduler, DVTStackBacktrace, NSArray, NSNumber, NSRunLoop, NSString;

@interface DVTDelayedInvocation : NSObject <DVTInvalidation>
{
    CDUnknownBlockType _block;
    NSRunLoop *_schedulingRunLoop;
    DVTStackBacktrace *_schedulingBacktrace;
    struct {
        unsigned int scheduledInvocation:1;
        unsigned int shouldInvokeIfNeededWhenAppTerminates:1;
        unsigned int disablesSuddenTermination:1;
        unsigned int disablesAutomaticTermination:1;
        unsigned int didDisableSuddenTermination:1;
        unsigned int didDisableAutomaticTermination:1;
        unsigned int invoking:1;
        unsigned int isInvalidated:1;
        unsigned int _reserved:1;
    } _flags;
    DVTDelayedInvocationScheduler *_scheduler;
    NSArray *_runLoopModes;
    NSString *_terminationDisablingReason;
}

+ (void)initialize;
+ (id)delayedInvocationWithTerminationDisablingReason:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(copy) NSString *terminationDisablingReason; // @synthesize terminationDisablingReason=_terminationDisablingReason;
@property(copy, nonatomic) NSArray *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(copy, nonatomic) DVTDelayedInvocationScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)appWillTerminate:(id)arg1;
- (void)invoke;
- (void)cancelScheduledInvocation;
- (void)rescheduleInvocation;
- (void)scheduleInvocation;
- (void)invokeIfNeeded;
- (void)unscheduleInvocation;
- (void)runBlock:(id)arg1;
@property BOOL disablesAutomaticTermination;
@property BOOL disablesSuddenTermination;
@property BOOL shouldInvokeIfNeededWhenAppTerminates;
@property(copy, nonatomic) NSNumber *delay;
@property(copy, nonatomic) NSNumber *priority;
@property(readonly) BOOL isInvoking;
@property(readonly) BOOL hasScheduledInvocation;
- (void)setAutomaticTerminationBlocked:(BOOL)arg1;
- (void)setSuddenTerminationBlocked:(BOOL)arg1;
- (void)primitiveInvalidate;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

