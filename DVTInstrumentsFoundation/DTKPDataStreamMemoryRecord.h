//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface DTKPDataStreamMemoryRecord : NSObject
{
    const void *_buffer;
    unsigned long long _bufferSize;
    CDUnknownBlockType _destructor;
}

@property(copy, nonatomic) CDUnknownBlockType destructor; // @synthesize destructor=_destructor;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) const void *buffer; // @synthesize buffer=_buffer;
- (void).cxx_destruct;

@end

