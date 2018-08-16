//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIODebugGaugesUI/IDEGFXGaugeDebuggingAdditionUIController.h>

#import <IDEIODebugGaugesUI/IDEGaugeCollectedDataListeners-Protocol.h>

@class IDESceneKitGaugeDebuggingAddition, NSString;

@interface IDESceneKitGaugeDebuggingAdditionUIController : IDEGFXGaugeDebuggingAdditionUIController <IDEGaugeCollectedDataListeners>
{
    long long _frameCount;
    BOOL _isActive;
    IDESceneKitGaugeDebuggingAddition *_debuggingAddition;
}

@property(retain, nonatomic) IDESceneKitGaugeDebuggingAddition *debuggingAddition; // @synthesize debuggingAddition=_debuggingAddition;
- (void).cxx_destruct;
- (void)debuggingAdditionDidUpdateCollectedQueryResults:(id)arg1;
- (id)frameIntervalColors;
- (id)frameIntervalTitles;
- (BOOL)isActive;
- (void)primitiveInvalidate;
- (id)initWithWorkspaceTabController:(id)arg1 withDebuggingAddition:(id)arg2 forExtension:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

