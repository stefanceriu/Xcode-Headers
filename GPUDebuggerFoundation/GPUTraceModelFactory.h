//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, DYFuture, DYGLCaptureSessionInfo, GPUDebuggerController, GPUTraceDisplayableItem, GPUTraceProcessItem, GPUTraceSession, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol DYPPluginFactory, OS_dispatch_queue;

@interface GPUTraceModelFactory : NSObject <DVTInvalidation>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_modelObjectDictionary;
    id <DYPPluginFactory> _pluginFactory;
    GPUDebuggerController *_controller;
    Class _variablesViewContentProviderClass;
    NSMapTable *_resourceTypeToViewClassMaptable;
    GPUTraceProcessItem *_rootProcessItem;
    NSArray *_allTraceItems;
    NSMutableArray *_allPrograms;
    NSMutableArray *_allDisplayableItems;
    GPUTraceDisplayableItem *_lastDisplayableItem;
    NSMutableArray *_allMarkerItems;
    NSMutableArray *_allAPIItems;
    GPUTraceSession *_traceSession;
    DYFuture *_complete;
}

+ (Class)renderJobClass;
+ (Class)captureSessionInfoClassWithAPI:(unsigned int)arg1;
+ (void)initialize;
@property(readonly, nonatomic) DYFuture *complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) __weak GPUTraceSession *traceSession; // @synthesize traceSession=_traceSession;
@property(readonly, nonatomic) NSMutableArray *allAPIItems; // @synthesize allAPIItems=_allAPIItems;
@property(readonly, nonatomic) NSMutableArray *allMarkerItems; // @synthesize allMarkerItems=_allMarkerItems;
@property(readonly, nonatomic) __weak GPUTraceDisplayableItem *lastDisplayableItem; // @synthesize lastDisplayableItem=_lastDisplayableItem;
@property(readonly, nonatomic) NSMutableArray *allDisplayableItems; // @synthesize allDisplayableItems=_allDisplayableItems;
@property(readonly, nonatomic) NSMutableArray *allPrograms; // @synthesize allPrograms=_allPrograms;
@property(readonly, nonatomic) NSArray *allTraceItems; // @synthesize allTraceItems=_allTraceItems;
@property(readonly, nonatomic) GPUTraceProcessItem *rootProcessItem; // @synthesize rootProcessItem=_rootProcessItem;
@property(readonly, nonatomic) NSMapTable *resourceTypeToViewClassMaptable; // @synthesize resourceTypeToViewClassMaptable=_resourceTypeToViewClassMaptable;
@property(readonly, nonatomic) Class variablesViewContentProviderClass; // @synthesize variablesViewContentProviderClass=_variablesViewContentProviderClass;
@property(readonly, nonatomic) __weak GPUDebuggerController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) __weak id <DYPPluginFactory> pluginFactory; // @synthesize pluginFactory=_pluginFactory;
- (void).cxx_destruct;
- (id)generateAllResourcesGroupForAPIItem:(id)arg1 boundOnly:(BOOL)arg2;
- (struct NSArray *)resourceInfoForResource:(id)arg1 level:(int)arg2 layer:(int)arg3;
- (id)resourceItemOfType:(unsigned int)arg1 resourceID:(unsigned int)arg2 forFunctionIndex:(unsigned int)arg3;
- (id)dataProviderForShaderItem:(id)arg1;
- (void)establishResource:(id)arg1 forProgramChildren:(id)arg2 containerID:(unsigned long long)arg3;
- (id)programObjectFromProgramItem:(id)arg1 shaderType:(unsigned int)arg2;
- (void)populateUnusedResourcesMetadataForResourceItems:(id)arg1;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromDisplayIndex:(unsigned int)arg1;
- (id)locateDisplayableItemToDraw:(id)arg1;
- (void)notifyUnusedResourcesStreamAvailable;
- (void)invalidateModel;
- (void)generateModelWithTraceSession:(id)arg1;
@property(readonly) unsigned long long totalDisplayableCount;
@property(readonly, nonatomic) __weak DYGLCaptureSessionInfo *captureSessionInfo;
- (id)itemForUUID:(id)arg1;
- (void)addModelItem:(id)arg1;
- (id)initWithController:(id)arg1 variablesViewContentProviderClass:(Class)arg2 pluginFactory:(id)arg3;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

