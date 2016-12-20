//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCNPostProcessPass : NSObject
{
    unsigned long long _frameBufferFormat;
    unsigned long long _frameBufferWidth;
    unsigned long long _frameBufferHeight;
    unsigned long long _bloomRatio;
    unsigned long long _postProcessConstants;
    id <MTLTexture> _frameLumTexture;
    id <MTLTexture> _averageLumTexture;
    id <MTLBuffer> _averageLumBuffer;
    id <MTLTexture> _bloomTextureA;
    id <MTLTexture> _bloomTextureB;
    id <MTLRenderPipelineState> _bloomBlurPipelineState[15];
    id <MTLRenderPipelineState> _postProcessPipelineState;
    id <MTLRenderPipelineState> _frameLuminancePipelineState;
    id <MTLComputePipelineState> _frameLuminanceCS;
    id <MTLComputePipelineState> _brightPassPipelineState[3];
    id <MTLComputePipelineState> _slidingLuminancePipelineState;
    id <MTLComputePipelineState> _adaptativeLuminancePipelineState;
    id <MTLComputePipelineState> _fixedLuminancePipelineState;
    unsigned int _frameIndex;
}

- (void)executeWithContext:(CDStruct_b9d91b93 *)arg1;
-     // Error parsing type: I40@0:8^{?=[16]}1624f32B36, name: _computeBloomBlurUniforms:textureSize:radius:horizontal:
- (void)setupWithContext:(CDStruct_b9d91b93 *)arg1;
- (void)_createFramebufferDependantResourcesWithRenderContext:(id)arg1 renderPassDesc:(id)arg2 bloomRatio:(unsigned long long)arg3 postProcessConstants:(unsigned long long)arg4;
- (void)dealloc;

@end

