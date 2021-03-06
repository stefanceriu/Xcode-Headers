//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTAnalyticsClient/DVTAnalyticsCrashPointData.h>

@class DVTAnalyticsCrashPointLogList, NSArray, NSString;

@interface DVTAnalyticsCrashPointMoreLogsData : DVTAnalyticsCrashPointData
{
    DVTAnalyticsCrashPointLogList *_logList;
    NSString *_moreLogs;
    NSString *_lastCrashPointTime;
    NSString *_lastCrashReporterKey;
    NSArray *_logData;
}

+ (id)crashPointUpdateForSession:(id)arg1 crashPointIdentifier:(id)arg2 moreLogsOptions:(id)arg3 error:(id *)arg4;
@property(retain) NSArray *logData; // @synthesize logData=_logData;
@property(retain) NSString *lastCrashReporterKey; // @synthesize lastCrashReporterKey=_lastCrashReporterKey;
@property(retain) NSString *lastCrashPointTime; // @synthesize lastCrashPointTime=_lastCrashPointTime;
@property(retain) NSString *moreLogs; // @synthesize moreLogs=_moreLogs;
- (void).cxx_destruct;
- (id)JSONRepresentation;
@property(readonly) DVTAnalyticsCrashPointLogList *logList; // @synthesize logList=_logList;

@end

