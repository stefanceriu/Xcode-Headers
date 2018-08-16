//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestingSpecifier-Protocol.h>

@class DVTObservingToken, IDEDeviceAppDataReference, IDELocationScenarioReference, IDEScheme, NSArray, NSMutableArray, NSSet, NSString;
@protocol IDETestable;

@interface IDEConcreteTestingSpecifier : NSObject <IDETestingSpecifier>
{
    id <IDETestable> _testable;
    NSMutableArray *_mutableSkippedTests;
    IDEDeviceAppDataReference *_deviceAppDataReference;
    IDELocationScenarioReference *_locationScenarioReference;
    DVTObservingToken *_buildableValidityObservingToken;
    NSSet *_adHocTests;
    BOOL _skipped;
    IDEScheme *_scheme;
}

@property(readonly) IDEScheme *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
@property(copy) NSSet *adHocTests;
- (void)disableTest:(id)arg1;
- (void)enableTest:(id)arg1;
@property(copy) NSArray *skippedTests;
@property BOOL skipped;
@property(retain) IDELocationScenarioReference *locationScenarioReference;
@property(retain) IDEDeviceAppDataReference *deviceAppDataReference;
- (id)testable;
- (id)initWithTestable:(id)arg1 scheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

