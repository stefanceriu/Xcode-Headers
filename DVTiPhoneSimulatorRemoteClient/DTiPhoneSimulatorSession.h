//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTiPhoneSimulatorRemoteClient/DVTInvalidation-Protocol.h>

@class DTiPhoneSimulatorSessionConfig, DVTStackBacktrace, NSString;
@protocol DTiPhoneSimulatorSessionDelegate;

@interface DTiPhoneSimulatorSession : NSObject <DVTInvalidation>
{
    int _simulatedApplicationPID;
    int _simulatorPID;
    id <DTiPhoneSimulatorSessionDelegate> _delegate;
    NSString *_simulatedAppPath;
    NSString *_uuid;
    DTiPhoneSimulatorSessionConfig *_sessionConfig;
    long long _sessionLifecycleProgress;
}

+ (id)logAspect;
+ (void)initialize;
@property(nonatomic) long long sessionLifecycleProgress; // @synthesize sessionLifecycleProgress=_sessionLifecycleProgress;
@property(copy, nonatomic) DTiPhoneSimulatorSessionConfig *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property int simulatorPID; // @synthesize simulatorPID=_simulatorPID;
@property(copy) NSString *simulatedAppPath; // @synthesize simulatedAppPath=_simulatedAppPath;
@property int simulatedApplicationPID; // @synthesize simulatedApplicationPID=_simulatedApplicationPID;
@property(retain, nonatomic) id <DTiPhoneSimulatorSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doFetchEventForPID:(int)arg1;
- (void)backgroundAllApps:(int)arg1;
- (BOOL)_startSessionInSimulatorWithError:(id *)arg1;
- (BOOL)attachedToTargetWithConfig:(id)arg1 error:(id *)arg2;
- (void)stopLocationSimulation;
- (void)simulateLocationWithLatitude:(id)arg1 longitude:(id)arg2;
- (void)requestEndWithTimeout:(double)arg1;
- (BOOL)requestStartWithConfig:(id)arg1 timeout:(double)arg2 error:(id *)arg3;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

