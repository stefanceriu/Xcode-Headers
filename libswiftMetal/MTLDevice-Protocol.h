//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftMetal/NSObject-Protocol.h>

@class MTLCompileOptions, MTLComputePipelineDescriptor, MTLDepthStencilDescriptor, MTLHeapDescriptor, MTLRenderPipelineDescriptor, MTLSamplerDescriptor, MTLTextureDescriptor, NSArray, NSBundle, NSString, NSURL, OS_dispatch_data;
@protocol MTLArgumentEncoder, MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDepthStencilState, MTLFence, MTLFunction, MTLHeap, MTLLibrary, MTLRenderPipelineState, MTLSamplerState, MTLTexture;

@protocol MTLDevice <NSObject>
- (id <MTLArgumentEncoder>)newArgumentEncoderWithArguments:(NSArray *)arg1;
- (void)getDefaultSamplePositions:(CDStruct_b2fbf00d *)arg1 count:(long long)arg2;
- (BOOL)areProgrammableSamplePositionsSupported;
@property(nonatomic, readonly) long long maxThreadgroupMemoryLength;
- (long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (BOOL)supportsTextureSampleCount:(long long)arg1;
- (BOOL)supportsFeatureSet:(unsigned long long)arg1;
- (id <MTLFence>)newFence;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLRenderPipelineState>, NSError *))arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 completionHandler:(void (^)(id <MTLLibrary>, NSError *))arg3;
- (id <MTLLibrary>)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithData:(OS_dispatch_data *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithFile:(NSString *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibraryWithBundle:(NSBundle *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibrary;
- (id <MTLSamplerState>)newSamplerStateWithDescriptor:(MTLSamplerDescriptor *)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(long long)arg3;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLDepthStencilState>)newDepthStencilStateWithDescriptor:(MTLDepthStencilDescriptor *)arg1;
- (id <MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(long long)arg2 options:(unsigned long long)arg3 deallocator:(void (^)(void *, long long))arg4;
- (id <MTLBuffer>)newBufferWithBytes:(void *)arg1 length:(long long)arg2 options:(unsigned long long)arg3;
- (id <MTLBuffer>)newBufferWithLength:(long long)arg1 options:(unsigned long long)arg2;
- (id <MTLHeap>)newHeapWithDescriptor:(MTLHeapDescriptor *)arg1;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLCommandQueue>)newCommandQueueWithMaxCommandBufferCount:(long long)arg1;
- (id <MTLCommandQueue>)newCommandQueue;
@property(nonatomic, readonly) long long currentAllocatedSize;
- (BOOL)areRasterOrderGroupsSupported;
@property(nonatomic, readonly) unsigned long long argumentBuffersSupport;
@property(nonatomic, readonly) unsigned long long readWriteTextureSupport;
- (BOOL)isDepth24Stencil8PixelFormatSupported;
@property(nonatomic, readonly) unsigned long long recommendedMaxWorkingSetSize;
- (BOOL)isRemovable;
- (BOOL)isHeadless;
- (BOOL)isLowPower;
@property(nonatomic, readonly) CDStruct_14f26992 maxThreadsPerThreadgroup;
@property(nonatomic, readonly) unsigned long long registryID;
@property(nonatomic, readonly) NSString *name;

// Remaining properties
@property(nonatomic, readonly) BOOL depth24Stencil8PixelFormatSupported;
@property(nonatomic, readonly) BOOL headless;
@property(nonatomic, readonly) BOOL lowPower;
@property(nonatomic, readonly) BOOL programmableSamplePositionsSupported;
@property(nonatomic, readonly) BOOL rasterOrderGroupsSupported;
@property(nonatomic, readonly) BOOL removable;
@end

