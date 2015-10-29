//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTKPTrigger.h>

@class DTKPCPU, DTKPCPUCounterAllocator, NSString;

@interface DTKPTriggerPMI : DTKPTrigger
{
    DTKPCPU *_cpu;
    DTKPCPUCounterAllocator *_counterAllocator;
    _Bool _mustUnforceCounters;
    NSString *_pmiEvent;
    NSString *_pmiCounter;
    unsigned long long _thresholdCount;
}

@property(nonatomic) unsigned long long thresholdCount; // @synthesize thresholdCount=_thresholdCount;
@property(retain, nonatomic) NSString *pmiCounter; // @synthesize pmiCounter=_pmiCounter;
@property(retain, nonatomic) NSString *pmiEvent; // @synthesize pmiEvent=_pmiEvent;
- (void).cxx_destruct;
- (int)stop:(id *)arg1;
- (int)start:(id *)arg1;
- (int)stopHardwareCounters:(id *)arg1;
- (int)startHardwareCounters:(id *)arg1;
- (unsigned long long)pmcEventCount;
- (int)addPMCEventNamed:(id)arg1 error:(id *)arg2;
- (unsigned long long)_recordConfigWordsIntoBuffer:(unsigned long long *)arg1;
- (id)init;

@end
