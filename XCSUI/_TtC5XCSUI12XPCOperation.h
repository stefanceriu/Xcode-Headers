//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class _TtC5XCSUI9XPCClient;

__attribute__((visibility("hidden")))
@interface _TtC5XCSUI12XPCOperation : NSOperation
{
    // Error parsing type: , name: xpcClient
    // Error parsing type: , name: operationInFlight
    // Error parsing type: , name: cancellationHandler
}

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) BOOL requiresAuth;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (void)cancel;
- (id)initWithClient:(id)arg1;
@property(nonatomic, copy) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler;
@property(nonatomic) BOOL operationInFlight; // @synthesize operationInFlight;
@property(nonatomic, retain) _TtC5XCSUI9XPCClient *xpcClient; // @synthesize xpcClient;

// Remaining properties
@property(nonatomic, readonly) BOOL executing;
@property(nonatomic, readonly) BOOL finished;

@end

