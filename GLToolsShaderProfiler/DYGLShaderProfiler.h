//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsShaderProfiler/DYShaderProfiler.h>

@protocol DYPShaderProfiler;

@interface DYGLShaderProfiler : DYShaderProfiler
{
    BOOL _harvestDrawCallFootprint;
    id <DYPShaderProfiler> _platformShaderProfiler;
}

+ (BOOL)isDisassemblerAvailable;
+ (BOOL)isFramebufferFetchWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (BOOL)isRenderBeginWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (BOOL)isRenderEndWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (id)newShaderProfilerWithDelegate:(id)arg1;
+ (id)_shaderInfoDictForProgram:(unsigned int)arg1 stages:(unsigned int)arg2 contextStateMirror:(ContextStateMirror_c02390f8 *)arg3 archiveModifier:(id)arg4;
- (void).cxx_destruct;
- (void)_addSampleWithPC:(unsigned int)arg1 state:(unsigned int)arg2 drawCallIdx:(unsigned int)arg3 shaderBinary:(id)arg4;
- (void)_generateSamplesForResult:(id)arg1 withProgramAddressLUT:(vector_763be9b2 *)arg2 withBatchIndexMin:(unsigned int)arg3 andBatchIndexMax:(unsigned int)arg4 withUSCSampleList:(struct DYGLShaderProfilerUSCSample *)arg5 withUSCSampleNum:(unsigned int)arg6;
- (void)_preProcessUSCSampleData:(id)arg1 result:(id)arg2 targetIndex:(int)arg3;
- (id)profileShader:(id)arg1;
- (id)computeFromShaderInfoResult:(id)arg1 usingGLShaderProfilerResult:(id)arg2 forFuture:(id)arg3;
- (void)enumerateFragmentShadersForResult:(id)arg1 andShaderInfoDictionary:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)isMultiContext;
- (id)_getShaderList;
- (void)initializeShaderAnalyzer;
- (int)_getRendererType;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

