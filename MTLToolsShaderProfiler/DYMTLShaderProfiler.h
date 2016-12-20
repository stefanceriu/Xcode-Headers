//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYShaderProfiler.h"

@interface DYMTLShaderProfiler : DYShaderProfiler
{
    id <DYPShaderProfiler> _platformShaderProfiler;
}

+ (BOOL)isDisassemblerAvailable;
+ (id)newShaderProfilerWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)_preProcessUSCSampleData:(id)arg1 result:(id)arg2;
- (id)_gatherStaticInformation;
- (id)_constructPayload;
- (id)initWithDelegate:(id)arg1;
- (id)profileShader:(id)arg1;
- (void)_showDrawCallDataforResult:(id)arg1;
- (id)profileFrame;
- (id)computeFromFrameInfoResult:(id)arg1 forFuture:(id)arg2;
- (id)computeFromShaderInfoResult:(id)arg1 forFuture:(id)arg2;
- (void)enumerateFragmentShadersForResult:(id)arg1 andShaderInfoDictionary:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)initializeShaderAnalyzer;

@end

