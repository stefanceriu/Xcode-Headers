//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSDate, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface IDEBuildOperationQueueSet : NSObject
{
    NSString *_identifier;
    NSOperationQueue *_copyTaskQueue;
    unsigned long long _slidingMaxNumberOfConcurrentCompileTasks;
    BOOL _didReduceConcurrencyDueToResourcePressure;
    NSOperationQueue *_compileTaskQueue;
    NSOperationQueue *_linkTaskQueue;
    DVTDispatchLock *_updateConcurrencyLock;
    NSDate *_lastCheckedResourcePressure;
    NSDate *_lastIncreasedConcurrency;
    NSObject<OS_dispatch_queue> *_addOperationQueue;
}

+ (id)sharedBuildTaskQueueSet;
+ (unsigned long long)maxNumberOfConcurrentCompileTasks;
+ (void)setMaxNumberOfConcurrentCompileTasks:(unsigned long long)arg1;
+ (void)initialize;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addLinkTaskOperation:(id)arg1 forCommand:(id)arg2;
- (void)addCopyTaskOperation:(id)arg1 forCommand:(id)arg2;
- (void)addCompileTaskOperation:(id)arg1 forCommand:(id)arg2;
- (void)changeMaximumOperationConcurrencyUsingThrottleFactor:(double)arg1;
- (void)resetOperationConcurrency;
- (void)updateOperationConcurrency;
- (id)initWithIdentifier:(id)arg1;

@end

