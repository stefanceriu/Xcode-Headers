//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDETabbedWindow.h>

#import <IDEKit/NSKeyedArchiverDelegate-Protocol.h>

@class DVTObservingToken, NSString;

@interface IDEWorkspaceWindow : IDETabbedWindow <NSKeyedArchiverDelegate>
{
    DVTObservingToken *_workspaceFinishedLoadingObservingToken;
    BOOL __isOverridingEscapeInsteadOfExitingFullscreen;
}

+ (id)lastActiveWorkspaceWindowController;
@property BOOL _isOverridingEscapeInsteadOfExitingFullscreen; // @synthesize _isOverridingEscapeInsteadOfExitingFullscreen=__isOverridingEscapeInsteadOfExitingFullscreen;
- (void).cxx_destruct;
- (void)_invalidateCursorRectsForView:(id)arg1 force:(BOOL)arg2;
- (void)_invalidateCursorRectsForViewsWithNoTrackingAreas;
- (BOOL)_addCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forView:(id)arg3;
- (void)_setCursorForMouseLocation:(struct CGPoint)arg1;
- (BOOL)_keyViewRedirectionDisabled;
- (void)recalculateKeyViewLoop;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)becomeMainWindow;
- (void)setWindowController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dvt_shouldDeallocate;
- (void)close;
- (void)exitFullScreenMode:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)toggleTabBar:(id)arg1;
- (void)renameCurrentTab:(id)arg1;
- (void)toggleToolbarShown:(id)arg1;
- (id)firstResponder;
- (void)endSheet:(id)arg1 returnCode:(long long)arg2;
- (void)sendEvent:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_attemptToCloseAllTabs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
