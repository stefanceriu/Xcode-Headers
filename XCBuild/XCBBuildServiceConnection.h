//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTask;
@protocol OS_dispatch_data, OS_dispatch_io, OS_dispatch_queue, OS_dispatch_source;

@interface XCBBuildServiceConnection : NSObject
{
    BOOL _isSuspended;
    BOOL _isClosed;
    NSTask *_task;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_subprocessSource;
    NSObject<OS_dispatch_io> *_stdinWriter;
    NSObject<OS_dispatch_io> *_stdoutReader;
    NSObject<OS_dispatch_data> *_bufferedData;
    unsigned long long _nextChannelID;
    struct unordered_map<unsigned long long, XCBBuildServiceConnectionChannel, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, XCBBuildServiceConnectionChannel>>> _channels;
    _Bool _channelsCleared;
    struct os_unfair_lock_s _channelLock;
}

+ (id)crashedMessageReplyData;
+ (id)serviceExecutablePath;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, getter=hasTerminated) BOOL terminated;
- (int)subprocessPID;
- (void)close;
- (void)resume;
- (void)suspend;
- (void)sendData:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)closeChannel:(unsigned long long)arg1;
- (void)sendData:(id)arg1 onChannel:(unsigned long long)arg2;
- (unsigned long long)openChannelWithMessageHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
