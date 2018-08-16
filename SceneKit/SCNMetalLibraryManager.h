//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSFilePresenter-Protocol.h>

@class NSDictionary, NSMapTable, NSOperationQueue, NSSet, NSString, NSURL;
@protocol MTLDevice, MTLLibrary, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SCNMetalLibraryManager : NSObject <NSFilePresenter>
{
    id <MTLDevice> _device;
    id <MTLLibrary> _defaultLibrary;
    id <MTLLibrary> _frameworkLibrary;
    NSURL *_resourcesFolderURL;
    NSOperationQueue *_watchingFolderQueue;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    BOOL _traceResources;
    id <MTLLibrary> _commonProfileCacheLibrary;
    NSDictionary *_commonProfilePrecompiledFunctions;
    // Error parsing type: ^{__C3DFXMetalProgram={__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}[2^{__CFString}]^{__CFString}^{__CFDictionary}^v^{__CFDictionary}^v^{__CFString}}, name: _defaultProgram
    // Error parsing type: ^{__C3DFXMetalProgram={__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}[2^{__CFString}]^{__CFString}^{__CFDictionary}^v^{__CFDictionary}^v^{__CFString}}, name: _defaultProgramForTessellation
    // Error parsing type: ^{__C3DFXMetalProgram={__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}[2^{__CFString}]^{__CFString}^{__CFDictionary}^v^{__CFDictionary}^v^{__CFString}}, name: _isolateProgram
    NSObject<OS_dispatch_semaphore> *_sharedHashCodeSemaphore;
    struct __CFString *_sharedHashCodeString;
    NSMapTable *_availableLibraries;
    struct __CFDictionary *_availableCompiledLibraries;
}

-     // Error parsing type: v156@0:8@16@24^{__C3DFXProgramDelegate={__CFRuntimeBase=QAQ}{?=^?^?^?^?}^v}32{?=^{__C3DFXProgram}^{__C3DMaterial}^{__C3DGeometry}^{__C3DFXPass}^{__C3DFXPass}@^{__C3DBlendStates}^{__C3DNode}Cc@{?=C@?}}40c136@140@?148, name: libraryForSourceCode:preprocessorsMacros:programDelegate:programDesc:async:group:completionHandler:
- (id)computePipelineForSourceCode:(id)arg1 functionName:(id)arg2 compileOptions:(id)arg3;
- (id)newCommonProfileFunctionWithName:(id)arg1;
- (id)libraryForCommonProfileCache;
- (id)libraryForFile:(id)arg1;
- (id)deviceQueue;
- (id)frameworkLibrary;
- (void)reloadFrameworkLibrary;
-     // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}16@0:8, name: isolateProgram
-     // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}20@0:8c16, name: defaultProgramUsingTessellation:
- (void)clearCompiledLibraries;
- (id)hashCodeForSource:(id)arg1 macros:(id)arg2 hashStorageLock:(id *)arg3;
- (void)dealloc;
- (void)presentedItemDidChange;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

