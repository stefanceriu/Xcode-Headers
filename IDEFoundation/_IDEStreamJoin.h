//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEStream.h>

@interface _IDEStreamJoin : IDEStream
{
    id <IDEStreamPublisher> _publisher;
    id <IDEStreamPublisher> _joined;
}

+ (id)withPublisher:(id)arg1;
@property(retain) id <IDEStreamPublisher> joined; // @synthesize joined=_joined;
@property(retain) id <IDEStreamPublisher> publisher; // @synthesize publisher=_publisher;
- (void).cxx_destruct;
- (void)onCompleted;
- (void)onNext:(id)arg1;
- (void)cancel;
- (void)subscribeConsumer:(id)arg1;

@end

