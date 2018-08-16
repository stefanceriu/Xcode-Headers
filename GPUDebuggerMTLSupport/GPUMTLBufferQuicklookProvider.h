//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GPUDebuggerMTLSupport/GPUStateValueQuicklookProvider-Protocol.h>
#import <GPUDebuggerMTLSupport/IDEVariablesViewQuickLookProvider-Protocol.h>

@class GPUBufferViewerAdaptorDataSourceProvider, GPUBufferViewerViewController, GPUMTLQuicklookProvider, NSObject, NSString, NSURL, NSView;
@protocol DYPMTLBuffer, DYPResourceManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GPUMTLBufferQuicklookProvider : NSViewController <IDEVariablesViewQuickLookProvider, GPUStateValueQuicklookProvider>
{
    BOOL _wasCancelled;
    BOOL _isGPUStateValue;
    NSObject<OS_dispatch_queue> *_loadQueue;
    GPUBufferViewerViewController *_bufferViewer;
    NSString *_selector;
    id <DYPMTLBuffer> _buffer;
    GPUMTLQuicklookProvider *_provider;
    GPUBufferViewerAdaptorDataSourceProvider *_dataSourceProvider;
    int _loadedState;
    id <DYPResourceManager> _resourceManager;
}

@property int loadedState; // @synthesize loadedState=_loadedState;
@property(nonatomic) __weak id <DYPResourceManager> resourceManager; // @synthesize resourceManager=_resourceManager;
- (void).cxx_destruct;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)loadView;
- (void)viewWillLayout;
- (void)_createBufferView;
- (id)_createDataSourceProvider:(vector_4eb18ac8 *)arg1;
- (void)_startRetrieval;
- (void)_retriveFromBuffer;
- (void)_retriveFromStateValue;
- (void)viewDidLoad;
- (void)_setLoadedState:(int)arg1;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

