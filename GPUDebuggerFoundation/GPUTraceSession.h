//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, DYSymbolicator, GPUDebuggerController, GPUTraceGroupItem, GPUTraceProgramGroup, GPUTraceReplayController, IDEFileReference, IDELaunchSession, NSDictionary, NSImage, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface GPUTraceSession : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, DVTInvalidation>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _debugReplayActive;
    BOOL _presentDrawCallsOnDevice;
    BOOL _presentWireframeOnDevice;
    int _state;
    float _wireframeLineWidth;
    IDELaunchSession *_launchSession;
    GPUTraceReplayController *_replayController;
    DYSymbolicator *_symbolicator;
    NSDictionary *_updatedResourcesDict;
    GPUDebuggerController *_debuggerController;
    NSURL *_captureArchiveURL;
    GPUTraceGroupItem *_workspaceRootResourceGroup;
    GPUTraceProgramGroup *_workspaceRootProgramGroup;
}

+ (void)initialize;
@property(nonatomic) float wireframeLineWidth; // @synthesize wireframeLineWidth=_wireframeLineWidth;
@property(nonatomic) BOOL presentWireframeOnDevice; // @synthesize presentWireframeOnDevice=_presentWireframeOnDevice;
@property(nonatomic) BOOL presentDrawCallsOnDevice; // @synthesize presentDrawCallsOnDevice=_presentDrawCallsOnDevice;
@property(readonly, nonatomic) GPUTraceProgramGroup *workspaceRootProgramGroup; // @synthesize workspaceRootProgramGroup=_workspaceRootProgramGroup;
@property(readonly, nonatomic) GPUTraceGroupItem *workspaceRootResourceGroup; // @synthesize workspaceRootResourceGroup=_workspaceRootResourceGroup;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSURL *captureArchiveURL; // @synthesize captureArchiveURL=_captureArchiveURL;
@property(readonly, nonatomic) GPUDebuggerController *debuggerController; // @synthesize debuggerController=_debuggerController;
@property(retain, nonatomic) NSDictionary *updatedResourcesDict; // @synthesize updatedResourcesDict=_updatedResourcesDict;
@property(retain, nonatomic) DYSymbolicator *symbolicator; // @synthesize symbolicator=_symbolicator;
@property(nonatomic) BOOL debugReplayActive; // @synthesize debugReplayActive=_debugReplayActive;
@property(readonly, nonatomic) GPUTraceReplayController *replayController; // @synthesize replayController=_replayController;
@property(readonly, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
- (void).cxx_destruct;
@property(readonly) NSString *navigableItem_name;
- (id)resetEmbeddedReplaySession;
- (id)establishEmbeddedReplaySession;
- (BOOL)_loadReplayControllerWithError:(id *)arg1;
- (id)_setupReplaySession:(BOOL)arg1;
- (BOOL)_loadReplayControllerWithLastFunctionIndex:(unsigned int)arg1;
- (BOOL)isInActiveState;
- (void)primitiveInvalidate;
- (id)initWithLaunchSession:(id)arg1 debuggerController:(id)arg2 symbolicator:(id)arg3 rootResourceGroup:(id)arg4 rootProgramGroup:(id)arg5;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

