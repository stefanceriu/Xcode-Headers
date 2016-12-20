//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBAbstractSimulatorToolCoreSimulatorExecutionContext.h>

#import "IBSimDeviceDebuggingViewControllerDelegate.h"

@class IBSimDeviceDebuggingViewController, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSWindowController;

@interface IBSimulatorToolCoreSimulatorApplicationExecutionContext : IBAbstractSimulatorToolCoreSimulatorExecutionContext <IBSimDeviceDebuggingViewControllerDelegate>
{
    IBSimDeviceDebuggingViewController *_deviceDebuggingViewController;
    NSWindowController *_deviceDebuggingWindowController;
    NSObject<OS_dispatch_queue> *_sceneUpdateDelegateAccessingQueue;
    NSMutableDictionary *_sceneUpdateRenderingDelegates;
    unsigned short _nextSceneIdentifier;
    double _scaleFactor;
}

+ (BOOL)_installApplicationBundleIfNeeded:(id)arg1 onDevice:(id)arg2 error:(id *)arg3;
+ (BOOL)_shouldInstallApplicationBundle:(id)arg1 onDevice:(id)arg2;
+ (id)_bundleForApplicationAtPath:(id)arg1 error:(id *)arg2;
+ (long long)bootingSessionType;
- (void).cxx_destruct;
- (id)executionContextForSimDeviceDebuggingViewController:(id)arg1;
- (id)simDeviceForSimDeviceDebuggingViewController:(id)arg1;
- (void)_setupDebuggingViewControllerIfNeeded;
- (id)registerSceneUpdateRenderingDelegate:(id)arg1 returningSceneIdentifier:(long long *)arg2;
- (id)_lookupSceneUpdateInfo:(unsigned short)arg1;
- (void)toolProxyWillDispatchMessage:(id)arg1;
- (id)launchAndConnectToToolWithLaunchContext:(id)arg1 toolProxyClass:(Class)arg2 shouldRaiseOnFailures:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_shouldTryAgainAfterFailingToLaunchToolWithError:(id)arg1;
- (id)_launchAndConnectToApplication:(id)arg1 launchContext:(id)arg2 toolProxyClass:(Class)arg3 shouldRaiseOnFailures:(BOOL)arg4 error:(id *)arg5;
- (void)updateDevicePreferencesWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)populateEnvironment:(id)arg1 launchContext:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

