//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTSourceEditor/NSObject-Protocol.h>

@class DVTStackBacktrace;

@protocol DVTInvalidation <NSObject>
- (void)primitiveInvalidate;

@optional
+ (BOOL)supportsInvalidationPrevention;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
@property(nonatomic, retain) DVTStackBacktrace *creationBacktrace;
@property(nonatomic, readonly) DVTStackBacktrace *invalidationBacktrace;
- (BOOL)isValid;
- (void)invalidate;

// Remaining properties
@property(nonatomic, readonly) BOOL valid;
@end

