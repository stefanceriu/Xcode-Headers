//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IDETestOperationStateMachine : NSObject
{
    BOOL _hasReported;
    id <IDETestOperationStateMachineDelegate> _delegate;
    double _exitWithCodeTimeout;
    double _connectionLostTimeout;
    double _crashedWithReportTimeout;
    NSMutableDictionary *_userInfo;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property BOOL hasReported; // @synthesize hasReported=_hasReported;
@property double crashedWithReportTimeout; // @synthesize crashedWithReportTimeout=_crashedWithReportTimeout;
@property double connectionLostTimeout; // @synthesize connectionLostTimeout=_connectionLostTimeout;
@property double exitWithCodeTimeout; // @synthesize exitWithCodeTimeout=_exitWithCodeTimeout;
@property __weak id <IDETestOperationStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)testmanagerdConnectionLost;
- (void)launchSessionCrashedWithDescription:(id)arg1;
- (void)launchSessionConnectionLost;
- (void)launchSessionExitedWithCode:(int)arg1;
- (void)launchSessionExpired;
- (void)_queue_finalizeWithDescription:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
