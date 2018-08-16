//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRSpace.h>

@class NSMutableSet;

@interface XRMainThreadSpace : XRSpace
{
    NSMutableSet *_mainThreadOps;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_scheduleOperationFromCurrentQueue:(id)arg1;
- (void)_queueOperationToRunOnMainThread:(id)arg1;
- (id)_activeRunLoopModes;
- (void)_executeOp:(id)arg1;
- (BOOL)isSerial;
- (id)spaceName;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

