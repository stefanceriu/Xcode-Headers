//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSNumber, NSString, XCSTriggerSCMOptions;

@interface XCSTriggerEmailConfiguration : XCSObject
{
    BOOL _emailCommitters;
    BOOL _includeIssueDetails;
    BOOL _includeCommitMessages;
    BOOL _includeBotConfiguration;
    BOOL _includeLogs;
    BOOL _emailCommittersHaveIntroducedIssues;
    BOOL _sendToAdditionalRecipitents;
    unsigned long long _type;
    XCSTriggerSCMOptions *_scmOptions;
    NSArray *_allowedDomainNames;
    NSArray *_additionalRecipients;
    NSString *_fromAddress;
    NSArray *_ccAddresses;
    NSString *_replyToAddress;
    long long _weeklyScheduleDay;
    NSNumber *_hour;
    NSNumber *_minutesAfterHour;
    unsigned long long _periodicScheduleInterval;
}

+ (id)emailConfigurationWithAdditionalRecipients:(id)arg1 type:(unsigned long long)arg2 scmOptions:(id)arg3 allowedDomainNames:(id)arg4 fromAddress:(id)arg5 ccAddresses:(id)arg6 replyToAddress:(id)arg7 emailCommitters:(BOOL)arg8 includeIssueDetails:(BOOL)arg9 includeCommitMessages:(BOOL)arg10 includeBotConfiguration:(BOOL)arg11 includeLogs:(BOOL)arg12 weeklyScheduleDay:(long long)arg13 hour:(id)arg14 minutesAfterHour:(id)arg15 validationErrors:(id *)arg16;
@property(nonatomic) BOOL sendToAdditionalRecipitents; // @synthesize sendToAdditionalRecipitents=_sendToAdditionalRecipitents;
@property(nonatomic) unsigned long long periodicScheduleInterval; // @synthesize periodicScheduleInterval=_periodicScheduleInterval;
@property(nonatomic) BOOL emailCommittersHaveIntroducedIssues; // @synthesize emailCommittersHaveIntroducedIssues=_emailCommittersHaveIntroducedIssues;
@property(nonatomic) BOOL includeLogs; // @synthesize includeLogs=_includeLogs;
@property(nonatomic) BOOL includeBotConfiguration; // @synthesize includeBotConfiguration=_includeBotConfiguration;
@property(nonatomic) BOOL includeCommitMessages; // @synthesize includeCommitMessages=_includeCommitMessages;
@property(nonatomic) BOOL includeIssueDetails; // @synthesize includeIssueDetails=_includeIssueDetails;
@property(retain, nonatomic) NSNumber *minutesAfterHour; // @synthesize minutesAfterHour=_minutesAfterHour;
@property(retain, nonatomic) NSNumber *hour; // @synthesize hour=_hour;
@property(nonatomic) long long weeklyScheduleDay; // @synthesize weeklyScheduleDay=_weeklyScheduleDay;
@property(retain, nonatomic) NSString *replyToAddress; // @synthesize replyToAddress=_replyToAddress;
@property(retain, nonatomic) NSArray *ccAddresses; // @synthesize ccAddresses=_ccAddresses;
@property(retain, nonatomic) NSString *fromAddress; // @synthesize fromAddress=_fromAddress;
@property(retain, nonatomic) NSArray *additionalRecipients; // @synthesize additionalRecipients=_additionalRecipients;
@property(retain, nonatomic) NSArray *allowedDomainNames; // @synthesize allowedDomainNames=_allowedDomainNames;
@property(retain, nonatomic) XCSTriggerSCMOptions *scmOptions; // @synthesize scmOptions=_scmOptions;
@property(nonatomic) BOOL emailCommitters; // @synthesize emailCommitters=_emailCommitters;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)_validateAdditionalRecipients:(id)arg1 type:(unsigned long long)arg2 scmOptions:(id)arg3 allowedDomainNames:(id)arg4 fromAddress:(id)arg5 ccAddresses:(id)arg6 replyToAddress:(id)arg7 emailCommitters:(BOOL)arg8 includeIssueDetails:(BOOL)arg9 includeCommitMessages:(BOOL)arg10 includeBotConfiguration:(BOOL)arg11 includeLogs:(BOOL)arg12 weeklyScheduleDay:(long long)arg13 hour:(id)arg14 minutesAfterHour:(id)arg15 validationErrors:(id *)arg16;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithAdditionalRecipients:(id)arg1 type:(unsigned long long)arg2 scmOptions:(id)arg3 allowedDomainNames:(id)arg4 fromAddress:(id)arg5 ccAddresses:(id)arg6 replyToAddress:(id)arg7 emailCommitters:(BOOL)arg8 includeIssueDetails:(BOOL)arg9 includeCommitMessages:(BOOL)arg10 includeBotConfiguration:(BOOL)arg11 includeLogs:(BOOL)arg12 weeklyScheduleDay:(long long)arg13 hour:(id)arg14 minutesAfterHour:(id)arg15 validationErrors:(id *)arg16;

@end

