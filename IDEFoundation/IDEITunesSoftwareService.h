//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEITunesSoftwareServiceProtocol-Protocol.h>
#import <IDEFoundation/ITunesSoftwareServiceAuthenticationDelegate-Protocol.h>

@class DVTITunesConnectProxy, DVTLogAspect, IDEITunesSoftwareServiceApplicationDescriptionCache, NSMutableArray, NSString;
@protocol IDEITunesSoftwareServiceDelegateProtocol;

@interface IDEITunesSoftwareService : NSObject <ITunesSoftwareServiceAuthenticationDelegate, IDEITunesSoftwareServiceProtocol>
{
    BOOL _shouldContinueUploading;
    id <IDEITunesSoftwareServiceDelegateProtocol> _delegate;
    DVTITunesConnectProxy *_proxy;
    DVTLogAspect *_logAspect;
    NSMutableArray *_authenticationDelegates;
    IDEITunesSoftwareServiceApplicationDescriptionCache *_applicationDescriptionCache;
}

@property BOOL shouldContinueUploading; // @synthesize shouldContinueUploading=_shouldContinueUploading;
@property(readonly) IDEITunesSoftwareServiceApplicationDescriptionCache *applicationDescriptionCache; // @synthesize applicationDescriptionCache=_applicationDescriptionCache;
@property(readonly) NSMutableArray *authenticationDelegates; // @synthesize authenticationDelegates=_authenticationDelegates;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly) DVTITunesConnectProxy *proxy; // @synthesize proxy=_proxy;
@property(retain) id <IDEITunesSoftwareServiceDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dSYMURLForAdamID:(id)arg1 bundleIdentifier:(id)arg2 version:(id)arg3 buildNumber:(id)arg4 platformIdentifier:(id)arg5 accountCredentials:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (id)_dSYMURLForAdamID:(id)arg1 bundleIdentifier:(id)arg2 version:(id)arg3 buildNumber:(id)arg4 platformIdentifier:(id)arg5 accountCredentials:(id)arg6 error:(id *)arg7;
- (void)applicationVersionsForApplicationDecription:(id)arg1 accountCredentials:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)_applicationVersionsForApplicationDecription:(id)arg1 accountCredentials:(id)arg2 error:(id *)arg3;
- (void)applicationDescriptionsWithAccountCredentials:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_applicationDescriptionsWithAccountCredentials:(id)arg1 error:(id *)arg2;
- (void)applicationDescriptionWithBundleIdentifier:(id)arg1 platformIdentifier:(id)arg2 accountCredentials:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)_applicationDescriptionWithBundleIdentifier:(id)arg1 platformIdentifier:(id)arg2 accountCredentials:(id)arg3 error:(id *)arg4;
- (void)applicationsWithContentHostedInAppPurchasesForAccountCredentials:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_applicationsWithContentHostedInAppPurchasesForAccountCredentials:(id)arg1 error:(id *)arg2;
- (id)_ITunesApplicationDescriptionForDescription:(id)arg1 accountCredentials:(id)arg2 error:(id *)arg3;
- (void)uploadInAppPurchaseContentArchiveAtPath:(id)arg1 productID:(id)arg2 application:(id)arg3 accountCredentials:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)_uploadResponseForInAppPurchaseContentArchiveAtPath:(id)arg1 productID:(id)arg2 application:(id)arg3 accountCredentials:(id)arg4 error:(id *)arg5;
- (void)cancelUploadWithCallback:(CDUnknownBlockType)arg1;
- (void)uploadApplicationAtPath:(id)arg1 platformIdentifier:(id)arg2 accountCredentials:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)_uploadResponseForApplicationAtPath:(id)arg1 platformIdentifier:(id)arg2 accountCredentials:(id)arg3 error:(id *)arg4;
- (void)_uploadDidComplete;
- (BOOL)_uploadShouldContinue;
- (void)_updateUploadMessage:(id)arg1;
- (void)_updateUploadPercentage:(double)arg1;
- (void)_uploadWillBegin;
- (void)validationResponseForApplicationAtPath:(id)arg1 platformIdentifier:(id)arg2 accountCredentials:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)_validationResponseForApplicationAtPath:(id)arg1 platformIdentifier:(id)arg2 accountCredentials:(id)arg3 error:(id *)arg4;
- (void)configurationResponseForAccountCredentials:(id)arg1 bundleID:(id)arg2 toolsBuildVersionName:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)_configurationResponseForAccountCredentials:(id)arg1 bundleID:(id)arg2 toolsBuildVersionName:(id)arg3 error:(id *)arg4;
- (void)configurationResponseForAccountCredentials:(id)arg1 toolsBuildVersionName:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)_configurationResponseForAccountCredentials:(id)arg1 toolsBuildVersionName:(id)arg2 error:(id *)arg3;
- (id)_authContextForAccountCredentials:(id)arg1 error:(id *)arg2;
- (void)setLogFileURL:(id)arg1;
- (id)initWithLogAspect:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
