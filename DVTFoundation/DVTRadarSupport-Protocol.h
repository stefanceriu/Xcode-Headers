//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTStackBacktraceFrame, NSArray, NSData, NSNumber, NSString, NSWindow;
@protocol DVTRadarSupport_Issue, DVTRadar_Associate, DVTRadar_AttachmentDownloadDelegate, DVTRadar_ComponentForIdentifier, DVTRadar_Problem;

@protocol DVTRadarSupport <NSObject>
+ (id)sharedClient;
@property id <DVTRadar_AttachmentDownloadDelegate> attachmentDownloadDelegate;
- (void)reportSelfDiagnosisIssueWithSignature:(NSString *)arg1 title:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 description:(NSString *)arg5 keywords:(NSArray *)arg6 classification:(unsigned long long)arg7 ownerProblemID:(NSNumber *)arg8 canFileNewProblem:(BOOL)arg9 completionBlock:(void (^)(BOOL, unsigned long long, BOOL))arg10;
- (void)reportSelfDiagnosisIssueWithSignature:(NSString *)arg1 title:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 description:(NSString *)arg5 keywords:(NSArray *)arg6 classification:(unsigned long long)arg7 ownerProblemID:(NSNumber *)arg8 completionBlock:(void (^)(BOOL, unsigned long long, BOOL))arg9;
- (void)asyncPrepareToReportSelfDiagnosisIssueWithBlock:(void (^)(void))arg1;
- (BOOL)selfDiagnosisEnabled;
- (void)validateRadarComponentName:(NSString *)arg1 version:(NSString *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (id <DVTRadar_ComponentForIdentifier>)bestComponentForBundleName:(NSString *)arg1;
- (id <DVTRadar_ComponentForIdentifier>)bestComponentForClassName:(NSString *)arg1;
- (id <DVTRadar_ComponentForIdentifier>)bestComponentForFrame:(DVTStackBacktraceFrame *)arg1;
- (id <DVTRadar_ComponentForIdentifier>)bestComponentForPath:(NSString *)arg1;
- (id <DVTRadar_ComponentForIdentifier>)defaultComponent;
- (NSArray *)hltComponentForBundleNames;
- (NSArray *)hltComponentForClassNames;
- (NSArray *)hltComponentForPaths;
- (id)attachmentFromData:(NSData *)arg1 withFilename:(NSString *)arg2 isPicture:(BOOL)arg3;
- (id)attachmentFromFile:(NSString *)arg1;
- (void)associateProblem:(id <DVTRadar_Problem>)arg1 withAssociate:(id <DVTRadar_Associate>)arg2;
- (void)problemsForKeyword:(NSString *)arg1 completionBlock:(void (^)(NSError *, NSArray *))arg2;
- (void)problemsForProblemIDs:(NSArray *)arg1 completionBlock:(void (^)(NSError *, NSArray *))arg2;
- (void)showRadarNumberPromptForIssues:(NSArray *)arg1 attachedToWindow:(NSWindow *)arg2 completionBlock:(void (^)(NSError *, unsigned long long))arg3;
- (void)showRadarNumberPromptForIssue:(id <DVTRadarSupport_Issue>)arg1 attachedToWindow:(NSWindow *)arg2 completionBlock:(void (^)(NSError *, unsigned long long))arg3;
- (void)showRadarUIForIssues:(NSArray *)arg1 bugTitle:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 keywords:(NSArray *)arg5 attachmentDownloadDelegate:(id <DVTRadar_AttachmentDownloadDelegate>)arg6 attachedToWindow:(NSWindow *)arg7 completionBlock:(void (^)(NSError *, unsigned long long))arg8;
- (void)showRadarUIForIssue:(id <DVTRadarSupport_Issue>)arg1 componentName:(NSString *)arg2 componentVersion:(NSString *)arg3 keywords:(NSArray *)arg4 attachmentDownloadDelegate:(id <DVTRadar_AttachmentDownloadDelegate>)arg5 attachedToWindow:(NSWindow *)arg6 completionBlock:(void (^)(NSError *, unsigned long long))arg7;
@end

