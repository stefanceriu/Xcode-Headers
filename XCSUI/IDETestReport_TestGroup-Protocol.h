//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSUI/IDETestReport_Base-Protocol.h>
#import <XCSUI/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol IDETestReport_TestGroup <NSObject, IDETestReport_Base>
@property(readonly, copy, nonatomic) NSString *ide_testReport_testGroup_testTargetName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testGroup_groupName;
- (NSArray *)ide_sharedTests_testGroup_allTests;
- (NSArray *)ide_sharedTests_testGroup_perfTests;
- (NSArray *)ide_sharedTests_testGroup_includePassingTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
@end

