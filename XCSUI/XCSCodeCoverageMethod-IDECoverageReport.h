//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSCodeCoverageMethod.h>

#import <XCSUI/IDECoverage_Method-Protocol.h>

@class NSArray, NSImage, NSNumber, NSString;

@interface XCSCodeCoverageMethod (IDECoverageReport) <IDECoverage_Method>
@property(readonly, copy, nonatomic) NSArray *ide_coverage_children;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePctDelta;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePct;
@property(readonly, copy, nonatomic) NSString *ide_coverage_title;
@property(readonly, nonatomic) unsigned long long ide_coverage_devicesCount;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_devices;
- (id)ide_coverage_identifier;
@property(readonly, copy, nonatomic) NSImage *ide_coverage_image;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

