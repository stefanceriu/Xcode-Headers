//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDEProductsUI/DVTReplacementViewDelegate-Protocol.h>

@class DVTReplacementView, NSString;

@interface IDECrashReportEditor : IDEEditor <DVTReplacementViewDelegate>
{
    DVTReplacementView *_replacementView;
}

@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void).cxx_destruct;
- (void)showSymbolInDebugNavigator:(id)arg1;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)installCrashReportViewController;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

