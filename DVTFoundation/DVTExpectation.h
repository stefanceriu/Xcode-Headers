//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTStackBacktrace, NSObject<OS_dispatch_semaphore>, NSString;

@interface DVTExpectation : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    DVTExpectation *_delegateExpectation;
    DVTExpectation *_parentExpectation;
    BOOL _didFulFill;
    BOOL _isDelegate;
    NSString *_reason;
    DVTStackBacktrace *_creationBacktrace;
}

@property __weak DVTExpectation *parentExpectation; // @synthesize parentExpectation=_parentExpectation;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property BOOL isDelegate; // @synthesize isDelegate=_isDelegate;
@property BOOL didFulFill; // @synthesize didFulFill=_didFulFill;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (BOOL)waitWithTimeout:(double)arg1;
- (void)wait;
- (void)fulfill;
- (void)dealloc;
@property(readonly) __weak DVTExpectation *delegateExpectation;
- (id)initWithReason:(id)arg1;
- (id)init;

@end

