//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalyticsClient/DVTServicesJSONSerialization-Protocol.h>

@class NSArray, NSString;

@interface DVTAnalyticsPointDeviceFamilyDistribution : NSObject <DVTServicesJSONSerialization>
{
    NSArray *_deviceFamilyData;
}

@property(readonly) NSArray *deviceFamilyData; // @synthesize deviceFamilyData=_deviceFamilyData;
- (void).cxx_destruct;
- (id)JSONRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

