//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSDate, XCSIntegration, XCSStats;

@interface XCSBuildQueueIntegration : XCSObject
{
    XCSIntegration *_integration;
    XCSStats *_stats;
    NSDate *_expectedCompletionDate;
    NSDate *_expectedStartDate;
}

@property(retain, nonatomic) NSDate *expectedStartDate; // @synthesize expectedStartDate=_expectedStartDate;
@property(retain, nonatomic) NSDate *expectedCompletionDate; // @synthesize expectedCompletionDate=_expectedCompletionDate;
@property(retain, nonatomic) XCSStats *stats; // @synthesize stats=_stats;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (BOOL)_validateStatsWithIntegration:(id)arg1 stats:(id)arg2 expectedCompletionDate:(id)arg3 expectedStartDate:(id)arg4 errors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end

