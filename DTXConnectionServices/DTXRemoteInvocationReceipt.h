//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTXRemoteInvocationReceipt : NSObject
{
    id _returnValue;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _waiterChain;
    struct os_unfair_lock_s _guard;
    unsigned int _valueState:2;
    unsigned int _invoked:1;
    unsigned int _reserved:29;
}

- (void).cxx_destruct;
- (void)waitForFulfillment;
- (void)invokeCompletionWithReturnValue:(id)arg1 error:(id)arg2;
- (void)handleCompletion:(CDUnknownBlockType)arg1;
- (void)_checkedAssign:(CDUnknownBlockType)arg1;
- (id)init;

@end

