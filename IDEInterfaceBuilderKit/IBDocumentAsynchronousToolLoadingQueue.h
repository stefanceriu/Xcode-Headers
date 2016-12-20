//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSError, NSMutableOrderedSet, NSNumber, NSString;

@interface IBDocumentAsynchronousToolLoadingQueue : NSObject <DVTInvalidation>
{
    NSMutableOrderedSet *_nonBlockingScaleFactors;
    NSMutableOrderedSet *_blockingScaleFactors;
    NSNumber *_scaleFactorCurrentlyLoading;
    BOOL _running;
    id <IBDocumentAsynchronousToolLoadingQueueDelegate> _delegate;
    long long _state;
    NSError *_error;
}

+ (void)initialize;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(nonatomic) __weak id <IBDocumentAsynchronousToolLoadingQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_processNextScaleFactorIfNeeded;
- (void)blockLoadingDocumentUntilAfterCompletingEntryForScaleFactor:(double)arg1;
- (void)enqueueNonBlockingEntryForScaleFactor:(double)arg1;
- (void)enqueueBlockingEntryForScaleFactor:(double)arg1;
- (void)suspend;
- (void)resume;
- (void)primitiveInvalidate;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

