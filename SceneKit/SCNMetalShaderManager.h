//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTLRenderPipelineDescriptor, NSObject<OS_dispatch_semaphore>, SCNMTLShaderBindingsGenerator, SCNMetalLibraryManager;

__attribute__((visibility("hidden")))
@interface SCNMetalShaderManager : NSObject
{
    id <MTLDevice> _device;
    BOOL _isValidationEnabled;
    SCNMetalLibraryManager *_libraryManager;
    struct __C3DEngineStats *__engineStats;
    MTLRenderPipelineDescriptor *_renderPipelineDescriptor;
    struct __CFDictionary *_availablePipelineStates;
    NSObject<OS_dispatch_semaphore> *_availablePipelineStatesLock;
    SCNMTLShaderBindingsGenerator *_bindingsGenerator;
}

- (void)passWillDie:(struct __C3DFXPass *)arg1;
- (void)programWillDie:(struct __C3DFXProgram *)arg1;
- (void)_removeMatchingProgram:(struct __C3DFXProgram *)arg1 pass:(struct __C3DFXPass *)arg2;
- (id)renderResourceForProgramDesc:(CDStruct_251442b1)arg1;
- (void)setBlendStates:(struct __C3DBlendStates *)arg1;
- (BOOL)matchPassDescriptor:(id)arg1;
- (void)dealloc;
- (id)initWithResourceManager:(id)arg1 passDescription:(id)arg2;

@end

