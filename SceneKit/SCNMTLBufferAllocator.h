//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_semaphore>, SCNFixedSizePage;

__attribute__((visibility("hidden")))
@interface SCNMTLBufferAllocator : NSObject
{
    id <MTLDevice> _device;
    unsigned long long _bufferSize;
    unsigned long long _elementSize;
    NSMutableArray *_pages;
    SCNFixedSizePage *_currentAllocatorPage;
    NSObject<OS_dispatch_semaphore> *_allocatorLock;
}

@property(readonly, nonatomic) unsigned long long elementSize; // @synthesize elementSize=_elementSize;
@property(readonly, nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (id)newSubBuffer;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 fixedSizeElement:(unsigned long long)arg2 buffersize:(unsigned long long)arg3;

@end

