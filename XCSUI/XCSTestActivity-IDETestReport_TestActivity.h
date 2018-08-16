//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSTestActivity.h>

#import <XCSUI/IDETestReport_TestActivity-Protocol.h>

@class NSArray, NSDate, NSString;

@interface XCSTestActivity (IDETestReport_TestActivity) <IDETestReport_TestActivity>
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_subitems;
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_transitiveAttachments;
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_directAttachments;
@property(readonly, copy, nonatomic) NSDate *sortingTimestamp;
@property(readonly, nonatomic) BOOL ide_test_activity_containsFailure;
@property(readonly, copy, nonatomic) NSArray *ide_test_activity_subactivities;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_memoryGraphFileName;
@property(readonly, copy, nonatomic) id ide_test_activity_memoryGraph;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_diagnosticReportFileName;
@property(readonly, copy, nonatomic) id ide_test_activity_diagnosticReport;
@property(readonly, copy, nonatomic) id ide_test_activity_screenshot;
@property(readonly, nonatomic) double ide_test_activity_duration;
@property(readonly, copy, nonatomic) NSDate *ide_test_activity_finishTime;
@property(readonly, copy, nonatomic) NSDate *ide_test_activity_startTime;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_UUID;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_activityType;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_attachment_base_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

