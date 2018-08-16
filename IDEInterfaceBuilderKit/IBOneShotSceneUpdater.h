//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBSceneUpdateManagerDelegate-Protocol.h>

@class IBFullSceneUpdateRequest, IBGenericDeviceTypeDescription, IBSceneUpdateResult, IBTargetRuntime, NSString;

@interface IBOneShotSceneUpdater : NSObject <IBSceneUpdateManagerDelegate>
{
    NSObject *_root;
    IBGenericDeviceTypeDescription *_deviceTypeDescription;
    IBTargetRuntime *_targetRuntime;
    IBFullSceneUpdateRequest *_request;
    CDUnknownBlockType _requestConfigurationBlock;
    IBSceneUpdateResult *_result;
}

@property(retain, nonatomic) IBSceneUpdateResult *result; // @synthesize result=_result;
@property(readonly, copy, nonatomic) CDUnknownBlockType requestConfigurationBlock; // @synthesize requestConfigurationBlock=_requestConfigurationBlock;
@property(readonly, nonatomic) IBFullSceneUpdateRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) IBTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(readonly, nonatomic) IBGenericDeviceTypeDescription *deviceTypeDescription; // @synthesize deviceTypeDescription=_deviceTypeDescription;
@property(readonly, nonatomic) NSObject *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (void)sceneUpdateManager:(id)arg1 didUpdateScene:(id)arg2 result:(id)arg3 usingLiveViews:(BOOL)arg4;
- (void)sceneUpdateManager:(id)arg1 didFailToUpdateSceneWithRoot:(id)arg2 diagnosticsHandler:(id)arg3;
- (void)sceneUpdateManager:(id)arg1 configureRequest:(id)arg2 forObject:(id)arg3 ofSceneWithRoot:(id)arg4;
- (id)sceneUpdateManager:(id)arg1 incrementalSceneUpdatesForUpdatingSceneWithRoot:(id)arg2;
- (id)sceneUpdateManager:(id)arg1 fullSceneUpdatesForUpdatingSceneWithRoot:(id)arg2 objectPackage:(id)arg3;
- (id)sceneUpdateManager:(id)arg1 marshallableObjectPackageForRootObject:(id)arg2;
- (void)sceneUpdateManager:(id)arg1 invalidateLiveViewsStatusForUpdatingScene:(id)arg2 withObjectPackage:(id)arg3;
- (id)sceneUpdateManager:(id)arg1 liveViewsBundlesForUpdatingScene:(id)arg2 withObjectPackage:(id)arg3;
- (BOOL)sceneUpdateManager:(id)arg1 canUpdateSceneWithRoot:(id)arg2;
- (id)sceneUpdateManager:(id)arg1 rootOfSceneContainingObject:(id)arg2;
- (id)initWithRoot:(id)arg1 deviceTypeDescription:(id)arg2 targetRuntime:(id)arg3 request:(id)arg4 requestConfigurationBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

