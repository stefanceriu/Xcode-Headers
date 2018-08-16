//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface GPUCaptureActivityReporter : IDEActivityReporter
{
    NSMapTable *_launchSessionObserverTokens;
    NSMapTable *_inferiorSessionReports;
    NSMapTable *_inferiorSessionProgressObservers;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_invalidateAllLaunchSessionTokens;
- (id)_tokensForLaunchSession:(id)arg1;
- (void)_addToken:(id)arg1 forLaunchSession:(id)arg2;
- (void)_removeProgressObserverForTraceInferiorSession:(id)arg1;
- (void)_addProgressObserverForTraceInferiorSession:(id)arg1 session:(id)arg2;
- (void)_invalidateActivityForTraceInferiorSession:(id)arg1;
- (id)_addNewActivityReportWithSession:(id)arg1 withTitle:(id)arg2;
- (void)_updateActivityReportWithSession:(id)arg1 withTitle:(id)arg2;
- (void)_updateActivityReportWithSession:(id)arg1 withProgressType:(long long)arg2;
- (void)_watchActiveGPUSession:(id)arg1;
- (void)_handleCurrentLaunchSessionChanged:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

