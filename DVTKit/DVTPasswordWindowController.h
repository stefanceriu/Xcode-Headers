//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <DVTKit/NSOpenSavePanelDelegate-Protocol.h>

@class DVTStackView_ML, NSString, NSView;

@interface DVTPasswordWindowController : NSWindowController <NSOpenSavePanelDelegate>
{
    BOOL _verify;
    BOOL _useInvalidIcons;
    BOOL _showButtons;
    DVTStackView_ML *_accessoryView;
    NSString *_password;
    NSString *_password2;
    NSString *_message;
    id _context;
    NSView *_verifyView;
    NSView *_buttonsView;
}

+ (id)keyPathsForValuesAffectingPasswordsMatch;
@property(retain) NSView *buttonsView; // @synthesize buttonsView=_buttonsView;
@property(retain) NSView *verifyView; // @synthesize verifyView=_verifyView;
@property(nonatomic) BOOL showButtons; // @synthesize showButtons=_showButtons;
@property(retain) id context; // @synthesize context=_context;
@property BOOL useInvalidIcons; // @synthesize useInvalidIcons=_useInvalidIcons;
@property(copy) NSString *message; // @synthesize message=_message;
@property(copy) NSString *password2; // @synthesize password2=_password2;
@property(copy) NSString *password; // @synthesize password=_password;
@property(retain) DVTStackView_ML *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) BOOL verify; // @synthesize verify=_verify;
- (void).cxx_destruct;
- (void)cancelPassphraseAction:(id)arg1;
- (void)setPassphraseAction:(id)arg1;
- (void)windowDidLoad;
- (void)_resizeWindow;
- (id)init;
- (void)setPasswordsMatch:(BOOL)arg1;
@property(readonly) BOOL passwordsMatch;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (BOOL)_isExportPasswordValid:(id *)arg1;
- (BOOL)_isImportPasswordValid:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

