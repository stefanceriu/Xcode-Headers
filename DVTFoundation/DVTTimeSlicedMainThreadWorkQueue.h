//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTTimeSlicedMainThreadWorkQueue : NSObject <DVTInvalidation>
{
    DVTStackBacktrace *_creationBacktrace;
    unsigned long long _qosSlot;
    BOOL _enabled;
    BOOL _workIsEnqueued;
    CDUnknownBlockType _itemProcessingBlock;
    CDUnknownBlockType _batchStartingBlock;
    CDUnknownBlockType _batchFinishingBlock;
}

+ (void)timeSlicedEnumerateItems:(id)arg1 withOwner:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (id)orderedQueue;
+ (id)weakUnorderedQueue;
+ (id)unorderedQueue;
+ (id)orderedBlockProcessingQueue;
+ (id)unorderedBlockProcessingQueue;
+ (id)orderedQueueWithItemProcessingBlock:(CDUnknownBlockType)arg1;
+ (id)weakUnorderedQueueWithItemProcessingBlock:(CDUnknownBlockType)arg1;
+ (id)unorderedQueueWithItemProcessingBlock:(CDUnknownBlockType)arg1;
+ (void)initialize;
@property BOOL workIsEnqueued; // @synthesize workIsEnqueued=_workIsEnqueued;
@property(copy) CDUnknownBlockType batchFinishingBlock; // @synthesize batchFinishingBlock=_batchFinishingBlock;
@property(copy) CDUnknownBlockType batchStartingBlock; // @synthesize batchStartingBlock=_batchStartingBlock;
@property(copy) CDUnknownBlockType itemProcessingBlock; // @synthesize itemProcessingBlock=_itemProcessingBlock;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
- (void).cxx_destruct;
- (void)_processWithDeadline:(unsigned long long)arg1;
- (void)_evaluateProcessingStatus;
@property long long qualityOfService;
@property(getter=isEnabled) BOOL enabled;
- (void)clearAllItems;
- (void)dequeueItems:(id)arg1;
- (void)dequeueItem:(id)arg1;
- (void)enqueueItemsAtFront:(id)arg1;
- (void)enqueueItemAtFront:(id)arg1;
- (void)enqueueItems:(id)arg1;
- (void)enqueueItem:(id)arg1;
- (void)_processWorkItemsWithDeadline:(unsigned long long)arg1;
- (BOOL)_workIsEnqueued;
- (void)_removeAllWorkItems;
- (void)_removeWorkItems:(id)arg1;
- (void)_removeWorkItem:(id)arg1;
- (void)_addWorkItemsAtFront:(id)arg1;
- (void)_addWorkItemAtFront:(id)arg1;
- (void)_addWorkItems:(id)arg1;
- (void)_addWorkItem:(id)arg1;
- (void)primitiveInvalidate;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

