//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface DeviceResourceRequestPriorityQueue : NSObject
{
    struct deque<DeviceResourceRequest *, std::__1::allocator<DeviceResourceRequest *>> _fifo;
    NSCountedSet *_requestIds;
    struct dispatch_queue_s *_lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)popRequest;
- (id)pushRequestForIdentifier:(id)arg1 resource:(id)arg2 functionIndex:(unsigned int)arg3;
- (id)init;

@end

