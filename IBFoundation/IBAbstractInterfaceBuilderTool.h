//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBAbstractPlatformTool.h>

#import <IBFoundation/IBAbstractInterfaceBuilderTool-Protocol.h>

@class NSMutableSet, NSString;

@interface IBAbstractInterfaceBuilderTool : IBAbstractPlatformTool <IBAbstractInterfaceBuilderTool>
{
    NSMutableSet *_loadedLiveViewBundlePaths;
    NSMutableSet *_loadedLiveViewEnvironmentProjectPaths;
}

- (void).cxx_destruct;
- (id)renderImagesForRequests:(id)arg1;
- (id)loadBuiltLiveViewBundleInstances:(id)arg1;
- (id)_resultByLoadingUnloadedBundleInstance:(id)arg1;
- (id)_errorResultForFailingToLoadBundle:(id)arg1 viaNSBundleWithError:(id)arg2;
- (id)_errorResultForFailingToLoadBundle:(id)arg1 viaDLOpenWithError:(const char *)arg2;
- (void)_appendProjectSourcePathToEnvironment:(id)arg1 forTargetName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

