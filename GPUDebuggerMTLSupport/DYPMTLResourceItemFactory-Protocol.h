//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/DYPResourceItemFactory-Protocol.h>

@class NSString, NSURL;
@protocol DYPFunctionInfo, DYPProgramGroup, DYPShaderItem;

@protocol DYPMTLResourceItemFactory <DYPResourceItemFactory>
- (id <DYPShaderItem>)functionWithPipeline:(id <DYPProgramGroup>)arg1 shaderType:(unsigned int)arg2 functionInfo:(id <DYPFunctionInfo>)arg3 identifier:(NSString *)arg4;
- (id <DYPProgramGroup>)pipelineStateWithProgramGroup:(id <DYPProgramGroup>)arg1 programType:(unsigned int)arg2 pipelineStateID:(unsigned long long)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 identifier:(NSString *)arg6;
- (id <DYPFunctionInfo>)functionInfoWithSourceURL:(NSURL *)arg1 lineNumber:(long long)arg2 onlineCompiled:(BOOL)arg3;
@end

