//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/NSCopying-Protocol.h>
#import <ModelIO/NSObject-Protocol.h>

@class MDLMeshBufferMap, NSData;
@protocol MDLMeshBufferAllocator, MDLMeshBufferZone;

@protocol MDLMeshBuffer <NSObject, NSCopying>
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, retain, nonatomic) id <MDLMeshBufferZone> zone;
@property(readonly, retain, nonatomic) id <MDLMeshBufferAllocator> allocator;
@property(readonly, nonatomic) unsigned long long length;
- (MDLMeshBufferMap *)map;
- (void)fillData:(NSData *)arg1 offset:(unsigned long long)arg2;
@end

