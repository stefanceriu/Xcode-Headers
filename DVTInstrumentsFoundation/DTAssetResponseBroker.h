//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DTAssetResponseBroker : NSObject
{
    NSMutableDictionary *_activeHandlers;
    NSObject<OS_dispatch_queue> *_activeHandlersQueue;
}

+ (id)sharedBroker;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activeHandlersQueue; // @synthesize activeHandlersQueue=_activeHandlersQueue;
@property(retain, nonatomic) NSMutableDictionary *activeHandlers; // @synthesize activeHandlers=_activeHandlers;
- (void).cxx_destruct;
- (void)unregisterHandler:(id)arg1;
- (void)registerHandler:(id)arg1;
- (BOOL)canContinueServingRequestWithIdentifier:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (id)activeHandlerWithIdentifier:(id)arg1;
- (id)init;

@end

