//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTTestPerformanceMetricOutput, IDEEntityIdentifier, IDETestIdentifier, IDETestResult, IDETestResultMessage, IDETestRunner, NSError, NSString, XCActivityRecord;

@protocol IDETestRunnerEvents <NSObject>
- (void)testRunner:(IDETestRunner *)arg1 didFinishTestWithIdentifier:(IDETestIdentifier *)arg2 withTestResult:(IDETestResult *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(IDETestRunner *)arg1 didFailTestWithIdentifier:(IDETestIdentifier *)arg2 withTestResultMessage:(IDETestResultMessage *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(IDETestRunner *)arg1 testWithIdentifier:(IDETestIdentifier *)arg2 didMeasurePerformanceMetric:(DVTTestPerformanceMetricOutput *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(IDETestRunner *)arg1 didOutput:(NSString *)arg2;
- (void)testRunner:(IDETestRunner *)arg1 testWithIdentifier:(IDETestIdentifier *)arg2 didFinishActivity:(XCActivityRecord *)arg3;
- (void)testRunner:(IDETestRunner *)arg1 testWithIdentifier:(IDETestIdentifier *)arg2 willStartActivity:(XCActivityRecord *)arg3;
- (void)testRunner:(IDETestRunner *)arg1 didStartTestWithIdentifier:(IDETestIdentifier *)arg2 rawOutput:(NSString *)arg3;
- (void)testSuiteDidFinish:(unsigned long long)arg1 withFailures:(unsigned long long)arg2 unexpected:(unsigned long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(NSString *)arg6;
- (void)testSuite:(IDETestIdentifier *)arg1 willFinishAt:(NSString *)arg2 rawOutput:(NSString *)arg3;
- (void)testSuite:(IDETestIdentifier *)arg1 didStartAt:(NSString *)arg2 rawOutput:(NSString *)arg3;
- (void)testRunner:(IDETestRunner *)arg1 willFinishWithError:(NSError *)arg2 didCancel:(BOOL)arg3;
- (void)testRunner:(IDETestRunner *)arg1 didLaunchTestSessionForScheme:(IDEEntityIdentifier *)arg2 withDisplayName:(NSString *)arg3 diagnosticLogPath:(NSString *)arg4;
- (void)testRunnerDidStartRunningTests:(IDETestRunner *)arg1;
@end

