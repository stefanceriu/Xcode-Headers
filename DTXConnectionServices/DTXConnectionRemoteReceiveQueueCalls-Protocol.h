//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTXConnectionServices/DTXAllowedRPC-Protocol.h>

@class NSDictionary, NSString;

@protocol DTXConnectionRemoteReceiveQueueCalls <DTXAllowedRPC>
- (void)_notifyCompressionHint:(unsigned int)arg1 forChannelCode:(unsigned int)arg2;
- (void)_setTracerState:(unsigned int)arg1;
- (void)_channelCanceled:(unsigned int)arg1;
- (void)_notifyOfPublishedCapabilities:(NSDictionary *)arg1;
- (void)_requestChannelWithCode:(unsigned int)arg1 identifier:(NSString *)arg2;
@end

