//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEKit/DVTPackageInstallerHelperDelegate-Protocol.h>
#import <IDEKit/NSTextViewDelegate-Protocol.h>

@class IDEPackageInstallerHelper, NSArray, NSArrayController, NSButton, NSImageView, NSProgressIndicator, NSScrollView, NSString, NSTextField, NSTextView, NSTimer, NSView, NSWindow;

@interface IDEPackageInstallerViewController : NSViewController <DVTPackageInstallerHelperDelegate, NSTextViewDelegate>
{
    NSView *_packagesToBeInstalledView;
    NSButton *_quitButton;
    NSButton *_actionButton;
    NSArrayController *_packagesToInstallArrayController;
    NSProgressIndicator *_progressBar;
    NSTextView *_errorTextView;
    NSScrollView *_errorTextScrollView;
    NSTextField *_needToRestartXcodeLabel;
    NSButton *_cancelQuitAppsButton;
    NSWindow *_appsToQuitSheet;
    NSButton *_quitAllButton;
    NSTextField *_descriptionLabel;
    NSTextField *_titleLabel;
    NSTimer *_alertAllAppTimer;
    NSTimer *_appsToQuitTimer;
    double _progress;
    IDEPackageInstallerHelper *_packageInstallerHelper;
    CDUnknownBlockType _continueButtonTitleProvider;
    CDUnknownBlockType _installationCompleteButtonHandler;
    NSArray *_appsThatNeedToBeQuitBeforeInstallCanProceed;
    CDUnknownBlockType installationCompleteHandler;
    NSImageView *_imageView;
}

+ (void)initialize;
@property __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property(copy) NSArray *appsThatNeedToBeQuitBeforeInstallCanProceed; // @synthesize appsThatNeedToBeQuitBeforeInstallCanProceed=_appsThatNeedToBeQuitBeforeInstallCanProceed;
@property(copy) CDUnknownBlockType installationCompleteButtonHandler; // @synthesize installationCompleteButtonHandler=_installationCompleteButtonHandler;
@property(copy) CDUnknownBlockType installationCompleteHandler; // @synthesize installationCompleteHandler;
- (void).cxx_destruct;
- (void)cancelQuitAppsThatNeedToBeQuitBeforeInstallationStarts:(id)arg1;
- (void)quitAppsThatNeedToBeQuitBeforeInstallationStarts:(id)arg1;
- (void)continueAfterSuccessfulInstallation:(id)arg1;
- (void)_doneWithQuitSheet;
- (void)_checkAllAppsThatNeedToBeQuitArentRunning;
- (void)_ensureAllAppsThatNeedToBeQuitArentRunning;
- (void)startInstall:(id)arg1;
- (void)quit:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)installationFailed:(id)arg1;
- (void)installationSucceeded;
- (void)installationProgressChanged:(long long)arg1;
- (void)installationStarted;
- (void)showRestartDescriptionLabel;
- (void)setInstallationCompleteButtonTitle:(id)arg1;
- (id)packagesToDisplay;
@property(readonly) NSArray *packagesToInstall;
- (BOOL)backgroundDownloadInProgress;
- (BOOL)needToInstallPackages;
- (void)_checkForAlertAllApp;
- (void)loadView;
- (id)_localizedString:(id)arg1;
- (id)initWithDefaultNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

