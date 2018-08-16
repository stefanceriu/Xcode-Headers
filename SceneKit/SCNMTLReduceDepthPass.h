//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNMTLRenderPass.h>

@protocol MTLBuffer, MTLComputePipelineState, MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNMTLReduceDepthPass : SCNMTLRenderPass
{
    id <MTLComputePipelineState> _initCS;
    id <MTLComputePipelineState> _stepCS;
    id <MTLComputePipelineState> _tailCS;
    id <MTLTexture> _reduceTmpTexture[2];
    id <MTLBuffer> _reduceResult;
}

- (void)execute:(id)arg1;
- (void)setup:(id)arg1;
- (void)dealloc;

@end

