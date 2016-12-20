//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYMTLCommonDebugFunctionPlayer, MTLDebugParallelRenderCommandEncoder, MTLDebugRenderCommandEncoder, MTLRenderPassColorAttachmentDescriptor, MTLRenderPassDescriptor, MTLTextureDescriptor;

@interface DYMTLDebugWireframeRenderer : NSObject
{
    DYMTLCommonDebugFunctionPlayer *_player;
    id <MTLLibrary> _wireframeLibrary;
    id <MTLFunction> _wireframeCreationFragmentFunction;
    MTLTextureDescriptor *_wireframeTextureDescriptor;
    id <MTLTexture> _wireframeTexture;
    MTLRenderPassColorAttachmentDescriptor *_wireframeRenderPassColorAttachmentDescriptor;
    MTLRenderPassDescriptor *_wireframeRenderPassDescriptor;
    id <MTLRenderPipelineState> _wireframeRenderPipelineState;
    struct {
        double originX;
        double originY;
        double width;
        double height;
        double znear;
        double zfar;
    } _encoder_viewport;
    unsigned long long _encoder_frontFacingWinding;
    unsigned long long _encoder_cullMode;
    struct {
        char isValid;
        char hasBeenUsed;
        unsigned long long type;
        id object;
        unsigned long long baseLevel;
        unsigned long long bufferLength;
        unsigned long long bufferOffset;
        unsigned long long threadgroupMemoryLength;
        char hasLodClamp;
        float lodMinClamp;
        float lodMaxClamp;
    } _encoder_tessellationFactorBuffer;
    float _encoder_tessellationFactorScale;
    unsigned long long _encoder_tessellationFactorBufferInstanceStride;
    struct vector<std::__1::pair<unsigned long long, MTLDebugFunctionArgument>, std::__1::allocator<std::__1::pair<unsigned long long, MTLDebugFunctionArgument>>> _encoder_vertexBufferArgs;
    struct vector<std::__1::pair<unsigned long long, MTLDebugFunctionArgument>, std::__1::allocator<std::__1::pair<unsigned long long, MTLDebugFunctionArgument>>> _encoder_vertexTextureArgs;
    struct vector<std::__1::pair<unsigned long long, MTLDebugFunctionArgument>, std::__1::allocator<std::__1::pair<unsigned long long, MTLDebugFunctionArgument>>> _encoder_vertexSamplerArgs;
    unsigned long long _originalCommandEncoderId;
    id <MTLCommandBufferSPI> _originalCommandBuffer;
    MTLDebugRenderCommandEncoder *_originalEncoder;
    MTLDebugParallelRenderCommandEncoder *_originalParallelEncoder;
    _Bool _supports_tessellation;
}

@property(readonly, nonatomic) id <MTLTexture> wireframeTexture; // @synthesize wireframeTexture=_wireframeTexture;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_loadEncoderState:(id)arg1;
- (void)_saveEncoderState:(id)arg1;
- (long long)prepareWireframeTextureWithCommandBufferId:(unsigned long long)arg1 commandEncoderId:(unsigned long long)arg2 parallelEncoderId:(unsigned long long)arg3 pipelineId:(unsigned long long)arg4 renderPassDescriptor:(struct DYMTLRenderPassDescriptor *)arg5;
- (BOOL)createWireframeRenderCommandEncoder:(struct DYMTLRenderPassDescriptor *)arg1;
- (long long)_prepareWireframeTextureWithEncoder:(id)arg1 andCommandBuffer:(id)arg2 andPipelineState:(id)arg3 andParallelEncoder:(id)arg4 andRenderPassDescriptor:(struct DYMTLRenderPassDescriptor *)arg5;
- (id)_createWireframeTexture:(id)arg1 andRenderPassDescriptor:(struct DYMTLRenderPassDescriptor *)arg2;
- (id)initWithDebugFunctionPlayer:(id)arg1;

@end

