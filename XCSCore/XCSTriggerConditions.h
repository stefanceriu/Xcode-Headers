//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@interface XCSTriggerConditions : XCSObject
{
}

+ (id)triggerConditionsWithStatus:(long long)arg1 onSuccess:(BOOL)arg2 onAllIssuesResolved:(BOOL)arg3 onWarnings:(BOOL)arg4 onAnalyzerWarnings:(BOOL)arg5 onFailingTests:(BOOL)arg6 onBuildErrors:(BOOL)arg7 validationErrors:(id *)arg8;
- (BOOL)shouldExecuteForIntegration:(id)arg1;
- (BOOL)_validateStatus:(long long)arg1 onSuccess:(BOOL)arg2 onAllIssuesResolved:(BOOL)arg3 onWarnings:(BOOL)arg4 onAnalyzerWarnings:(BOOL)arg5 onFailingTests:(BOOL)arg6 onBuildErrors:(BOOL)arg7 validationErrors:(id *)arg8;
- (id)initWithStatus:(long long)arg1 onSuccess:(BOOL)arg2 onAllIssuesResolved:(BOOL)arg3 onWarnings:(BOOL)arg4 onAnalyzerWarnings:(BOOL)arg5 onFailingTests:(BOOL)arg6 onBuildErrors:(BOOL)arg7 service:(id)arg8 validationErrors:(id *)arg9;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(nonatomic) BOOL onAllIssuesResolved; // @dynamic onAllIssuesResolved;
@property(nonatomic) BOOL onAnalyzerWarnings; // @dynamic onAnalyzerWarnings;
@property(nonatomic) BOOL onBuildErrors; // @dynamic onBuildErrors;
@property(nonatomic) BOOL onFailingTests; // @dynamic onFailingTests;
@property(nonatomic) BOOL onInternalErrors; // @dynamic onInternalErrors;
@property(nonatomic) BOOL onSuccess; // @dynamic onSuccess;
@property(nonatomic) BOOL onWarnings; // @dynamic onWarnings;
@property(nonatomic) long long status; // @dynamic status;

@end

