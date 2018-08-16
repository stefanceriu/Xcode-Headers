//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTNotificationToken, DVTReplacementView, IDEProvisioningCreateTeamOwnedCertificateUserAction, IDEViewController, NSOrderedSet;
@protocol IDEDistributionStepInterstitialViewController;

@interface IDEDistributionAutomaticSigningAssetsStepViewController : IDEDistributionStepViewController
{
    unsigned int accountNotificationResponderGeneration;
    unsigned int certificateNotificationResponderGeneration;
    DVTReplacementView *_replacementView;
    NSOrderedSet *_errors;
    IDEProvisioningCreateTeamOwnedCertificateUserAction *_createCertificateAction;
    DVTNotificationToken *_accountsToken;
    DVTNotificationToken *_certificatesToken;
    long long _state;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
+ (id)keyPathsForValuesAffectingAdditionalActionTitle;
+ (id)keyPathsForValuesAffectingWantsPreviousAction;
+ (id)keyPathsForValuesAffectingWantsNextAction;
+ (id)keyPathsForValuesAffectingNextButtonTitle;
+ (id)keyPathsForValuesAffectingCanGoNext;
+ (id)keyPathsForValuesAffectingCanGoPrevious;
+ (id)_errorForCertificatePermissions:(id)arg1 account:(id)arg2 team:(id)arg3;
+ (id)_accountErrorWithUnderlyingError:(id)arg1;
+ (id)accountIssueDetailsForContext:(id)arg1 issue:(id)arg2;
+ (long long)_requiredRoleForError:(id)arg1;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingInterstitialViewController;
+ (Class)correspondingStepClass;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) DVTNotificationToken *certificatesToken; // @synthesize certificatesToken=_certificatesToken;
@property(retain, nonatomic) DVTNotificationToken *accountsToken; // @synthesize accountsToken=_accountsToken;
@property(retain, nonatomic) IDEProvisioningCreateTeamOwnedCertificateUserAction *createCertificateAction; // @synthesize createCertificateAction=_createCertificateAction;
@property(retain, nonatomic) NSOrderedSet *errors; // @synthesize errors=_errors;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void).cxx_destruct;
- (void)takeAdditionalAction;
- (id)additionalActionTitle;
- (void)takePreviousAction;
- (BOOL)wantsPreviousAction;
- (void)takeNextAction;
- (BOOL)wantsNextAction;
- (id)nextButtonTitle;
- (BOOL)canGoNext;
- (BOOL)canGoPrevious;
- (id)_makeErrorsPresentables:(id)arg1;
- (void)generateDistributionCertificate;
- (void)asyncGetAccountDetailsAndUpdateState:(id)arg1;
- (id)_evaluateProvisioning:(id *)arg1;
- (id)_noAccountForTeamErrorFromErrors:(id)arg1;
- (id)_loginErrorFromErrors:(id)arg1;
- (id)_permissionsErrorFromErrors:(id)arg1;
- (id)_accountIssueFromErrors:(id)arg1;
- (id)_missingPrivateKeyErrorFromErrors:(id)arg1;
- (void)_locateSigningAssets;
- (void)viewDidLoad;
- (id)title;
@property(readonly, nonatomic) IDEViewController<IDEDistributionStepInterstitialViewController> *interstitialViewController;
- (void)updateStateWithRepairErrors:(id)arg1;
- (void)updateStateToExportCertificate:(id)arg1;
- (void)updateStateWithMissingPrivateKeyError:(id)arg1;
- (void)updateStateWithAccountDetails:(id)arg1 triggeringIssue:(id)arg2;
- (void)updateStateToGenerateCertificateWithCreateCertificateAction:(id)arg1;
- (void)updateStateWithCreateCertificateAction:(id)arg1;
- (void)updateStateToLocatingSigningAssets;
- (void)_setState:(long long)arg1 userAction:(id)arg2 errors:(id)arg3 subcontrollerClass:(Class)arg4;
- (id)backgroundQueue;
- (id)nibName;
- (void)primitiveInvalidate;

@end

