//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTTapConfig;

@interface DTTapMessageHandler : NSObject
{
    DTTapConfig *_config;
}

@property(readonly, retain, nonatomic) DTTapConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)stop;
- (id)messageReceived:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

