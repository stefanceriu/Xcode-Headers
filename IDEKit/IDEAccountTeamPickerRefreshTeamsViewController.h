//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "DVTPagingSheetViewController.h"

@class IDEAccountTeamPickerWindowController, NSArray, NSButton, NSProgressIndicator, NSString, NSTextField;

@interface IDEAccountTeamPickerRefreshTeamsViewController : IDEViewController <DVTPagingSheetViewController>
{
    IDEAccountTeamPickerWindowController *_pagingSheetWindowController;
    NSTextField *_addAccountPromptLabel;
    NSProgressIndicator *_spinner;
    NSTextField *_statusLabel;
    NSButton *_addAccountsButton;
    NSButton *_joinProgramButton;
    NSButton *_viewAccountsButton;
    NSButton *_cancelButton;
    NSArray *_accountWrappers;
}

+ (id)addAccountPromptWithUserFacingReason:(id)arg1;
@property(copy, nonatomic) NSArray *accountWrappers; // @synthesize accountWrappers=_accountWrappers;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSButton *viewAccountsButton; // @synthesize viewAccountsButton=_viewAccountsButton;
@property(retain, nonatomic) NSButton *joinProgramButton; // @synthesize joinProgramButton=_joinProgramButton;
@property(retain, nonatomic) NSButton *addAccountsButton; // @synthesize addAccountsButton=_addAccountsButton;
@property(retain, nonatomic) NSTextField *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain) NSTextField *addAccountPromptLabel; // @synthesize addAccountPromptLabel=_addAccountPromptLabel;
@property(retain, nonatomic) IDEAccountTeamPickerWindowController *pagingSheetWindowController; // @synthesize pagingSheetWindowController=_pagingSheetWindowController;
- (void).cxx_destruct;
- (void)cancelAction:(id)arg1;
- (void)fetchAccounts;
- (void)handleErrors:(id)arg1 primaryError:(id)arg2;
- (void)fetchTeams;
- (id)_accountWrappersWithFilter:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)joinAProgram:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)viewAccounts:(id)arg1;
- (void)moveToNextPanel;
- (void)showError;
- (void)foo:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)showAddAccountsPrompt;
- (void)primitiveInvalidate;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

