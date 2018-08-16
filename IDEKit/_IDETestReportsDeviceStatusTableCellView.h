//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDETestReportViewController, NSButton, NSImageView;
@protocol IDETestReport_Test, IDETestReport_TestRun;

@interface _IDETestReportsDeviceStatusTableCellView : NSTableCellView
{
    NSImageView *_statusImageView;
    NSButton *_perfResultButton;
    IDETestReportViewController *_reportViewController;
    id <IDETestReport_TestRun> _testRun;
    id <IDETestReport_Test> _test;
}

@property(retain) id <IDETestReport_Test> test; // @synthesize test=_test;
@property(retain) id <IDETestReport_TestRun> testRun; // @synthesize testRun=_testRun;
@property __weak IDETestReportViewController *reportViewController; // @synthesize reportViewController=_reportViewController;
@property __weak NSButton *perfResultButton; // @synthesize perfResultButton=_perfResultButton;
@property(retain) NSImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
- (void).cxx_destruct;
- (void)showDeviceAssertions:(id)arg1;
- (void)awakeFromNib;

@end

