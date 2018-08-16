//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <GameToolsFoundation/NSPopoverDelegate-Protocol.h>

@class DVTStackView_AppKitAutolayout, NSColor, NSMutableDictionary, NSPopUpButton, NSPopover, NSSegmentedControl, NSString, NSTextField, NSView;
@protocol GTFActionCreateDelegate;

@interface GTFActionCreatePopoverController : DVTViewController <NSPopoverDelegate>
{
    NSMutableDictionary *_filenameToURL;
    BOOL _invalidateAfterClose;
    BOOL _hasInstalled;
    NSColor *_enabledFontColor;
    NSColor *_disabledFontColor;
    BOOL _showFileChooser;
    BOOL _isTargetAvailable;
    BOOL _notifyOnClose;
    id <GTFActionCreateDelegate> _delegate;
    NSPopover *_popover;
    DVTStackView_AppKitAutolayout *_stackView;
    NSView *_actionTargetView;
    NSView *_actionNameView;
    NSView *_actionFileView;
    NSView *_actionCreateView;
    NSPopUpButton *_actionFilenameField;
    NSTextField *_actionNameField;
    NSSegmentedControl *_actionTargetControl;
    NSTextField *_actionNameLabel;
    NSTextField *_actionFileLabel;
}

+ (id)scannedSKSActionFileNames;
+ (BOOL)isSKSActionFile:(id)arg1;
+ (id)supportedFileTypes;
@property __weak NSTextField *actionFileLabel; // @synthesize actionFileLabel=_actionFileLabel;
@property __weak NSTextField *actionNameLabel; // @synthesize actionNameLabel=_actionNameLabel;
@property __weak NSSegmentedControl *actionTargetControl; // @synthesize actionTargetControl=_actionTargetControl;
@property __weak NSTextField *actionNameField; // @synthesize actionNameField=_actionNameField;
@property __weak NSPopUpButton *actionFilenameField; // @synthesize actionFilenameField=_actionFilenameField;
@property __weak NSView *actionCreateView; // @synthesize actionCreateView=_actionCreateView;
@property __weak NSView *actionFileView; // @synthesize actionFileView=_actionFileView;
@property __weak NSView *actionNameView; // @synthesize actionNameView=_actionNameView;
@property __weak NSView *actionTargetView; // @synthesize actionTargetView=_actionTargetView;
@property __weak DVTStackView_AppKitAutolayout *stackView; // @synthesize stackView=_stackView;
@property __weak NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) BOOL notifyOnClose; // @synthesize notifyOnClose=_notifyOnClose;
@property(nonatomic) BOOL isTargetAvailable; // @synthesize isTargetAvailable=_isTargetAvailable;
@property(nonatomic) BOOL showFileChooser; // @synthesize showFileChooser=_showFileChooser;
@property(nonatomic) __weak id <GTFActionCreateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)_removeFromSuperviewAndInvalidate;
- (void)closePopoverAndInvalidate;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)handlePressCreate:(id)arg1;
- (void)handleTargetChanged:(id)arg1;
- (void)refreshFilenameField;
- (void)viewDidAppear;
- (void)setShowFileViewAvailability:(BOOL)arg1;
- (void)setTargetViewAvailability:(BOOL)arg1;
- (void)viewDidInstall;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initUsingDefaultNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

