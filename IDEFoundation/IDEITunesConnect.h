//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEITunesSoftwareServiceDelegate, NSString, NSXPCConnection;
@protocol IDEITunesSoftwareServiceProtocol;

@interface IDEITunesConnect : NSObject <DVTInvalidation>
{
    NSXPCConnection *_connection;
    id <IDEITunesSoftwareServiceProtocol> _localService;
    IDEITunesSoftwareServiceDelegate *_serviceDelegate;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)applicationVersionsForApplicationDecription:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)applicationDescriptionsWithSession:(id)arg1 error:(id *)arg2;
- (id)dSYMURLForAdamID:(id)arg1 bundleIdentifier:(id)arg2 version:(id)arg3 buildNumber:(id)arg4 platform:(id)arg5 session:(id)arg6 error:(id *)arg7;
- (id)applicationDescriptionWithBundleIdentifier:(id)arg1 platform:(id)arg2 session:(id)arg3 error:(id *)arg4;
- (id)uploadInAppPurchaseContentArchiveAtPath:(id)arg1 productID:(id)arg2 application:(id)arg3 session:(id)arg4 willBeginCallback:(CDUnknownBlockType)arg5 updatePercentageCallback:(CDUnknownBlockType)arg6 updateMessageCallback:(CDUnknownBlockType)arg7 didCompleteCallback:(CDUnknownBlockType)arg8 error:(id *)arg9;
- (id)applicationsWithContentHostedInAppPurchasesForSession:(id)arg1 error:(id *)arg2;
- (BOOL)cancelUpload:(id *)arg1;
- (id)uploadApplicationArchiveAtPath:(id)arg1 platform:(id)arg2 session:(id)arg3 willBeginCallback:(CDUnknownBlockType)arg4 updatePercentageCallback:(CDUnknownBlockType)arg5 updateMessageCallback:(CDUnknownBlockType)arg6 didCompleteCallback:(CDUnknownBlockType)arg7 error:(id *)arg8;
- (id)validateApplicationAtPath:(id)arg1 platform:(id)arg2 session:(id)arg3 error:(id *)arg4;
- (id)configurationResponseForSession:(id)arg1 bundleID:(id)arg2 error:(id *)arg3;
- (id)configurationResponseForSession:(id)arg1 error:(id *)arg2;
- (void)setLogFileURL:(id)arg1;
- (void)primitiveInvalidate;
- (id)serviceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initRemote;
- (id)initLocal;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
