//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIODebugGaugesCore/IDEGaugeDataProviderService_LocalComputer.h>

@class NSObject;
@protocol OS_sysmon_request;

@interface IDEGaugeDataProviderService_LocalComputer_sysmon : IDEGaugeDataProviderService_LocalComputer
{
    NSObject<OS_sysmon_request> *_sysmonRequest;
}

+ (id)observableAttributes;
@property(retain, nonatomic) NSObject<OS_sysmon_request> *sysmonRequest; // @synthesize sysmonRequest=_sysmonRequest;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;

@end

