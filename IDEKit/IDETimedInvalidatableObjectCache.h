//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTObservingToken, NSMutableDictionary, NSTimer;
@protocol DVTInvalidation;

@interface IDETimedInvalidatableObjectCache : NSObject
{
    NSMutableDictionary *_observers;
    NSTimer *_timer;
    double _delay;
    id <DVTInvalidation> _invalidatable;
    DVTObservingToken *_immediateInvalidationTriggerToken;
}

- (void).cxx_destruct;
- (id)pin;
- (void)invalidationTimeExpired:(id)arg1;
- (id)initWithInvalidatedObject:(id)arg1 skippingDelayOnceObjectBecomesInvalid:(id)arg2 delay:(double)arg3;

@end

