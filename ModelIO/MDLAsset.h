//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class MDLVertexDescriptor, NSMutableArray, NSURL;

@interface MDLAsset : NSObject <NSCopying, NSFastEnumeration>
{
    NSURL *_URL;
    NSMutableArray *_objects;
    id <MDLObjectContainerComponent> _masters;
    double _startTime;
    double _endTime;
    double _frameInterval;
    id <MDLMeshBufferAllocator> _bufferAllocator;
    MDLVertexDescriptor *_vertexDescriptor;
}

+ (BOOL)canImportFileExtension:(id)arg1;
+ (BOOL)canExportFileExtension:(id)arg1;
+ (id)placeLightProbesWithDensity:(float)arg1 heuristic:(long long)arg2 usingIrradianceDataSource:(id)arg3;
@property(readonly, retain, nonatomic) MDLVertexDescriptor *vertexDescriptor; // @synthesize vertexDescriptor=_vertexDescriptor;
@property(readonly, retain, nonatomic) id <MDLMeshBufferAllocator> bufferAllocator; // @synthesize bufferAllocator=_bufferAllocator;
@property(nonatomic) double frameInterval; // @synthesize frameInterval=_frameInterval;
@property(retain, nonatomic) id <MDLObjectContainerComponent> masters; // @synthesize masters=_masters;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (BOOL)exportAssetToURL:(id)arg1;
- (BOOL)exportAssetToURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 preserveTopology:(BOOL)arg4 error:(id *)arg5;
- (id)initWithBufferAllocator:(id)arg1;
- (id)init;
- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double endTime;
@property(nonatomic) double startTime;
- (struct)boundingBoxAtTime:(double)arg1;
@property(readonly, nonatomic) struct boundingBox;
- (void)enumerateChildObjectsOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2 stopPointer:(char *)arg3;
- (id)childObjectsOfClass:(Class)arg1;
@property(readonly, nonatomic) struct MDLAABB _bounds;
@property(readonly, retain, nonatomic) NSURL *URL;

@end

