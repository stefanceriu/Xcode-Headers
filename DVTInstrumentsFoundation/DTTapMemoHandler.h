//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTTapConfig;
@protocol DTTapMemoHandlerDelegate, OS_dispatch_queue;

@interface DTTapMemoHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _seenNonStatusMemo;
    DTTapConfig *_config;
    id <DTTapMemoHandlerDelegate> _delegate;
}

@property(readonly, retain, nonatomic) DTTapConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)handleMemo:(id)arg1;
- (void)resume;
- (void)suspend;
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;

@end

