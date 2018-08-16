//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTKPTrigger.h>

@interface DTKPTriggerTime : DTKPTrigger
{
    unsigned int _timerID;
    BOOL _profileEveryThread;
    unsigned int _targetTask;
    unsigned long long _sampleRate;
}

+ (int)reinitializeKperf:(id *)arg1;
@property(nonatomic) BOOL profileEveryThread; // @synthesize profileEveryThread=_profileEveryThread;
@property(nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) unsigned int targetTask; // @synthesize targetTask=_targetTask;
- (int)stop:(id *)arg1;
- (int)start:(id *)arg1;
- (int)_configureTimer:(unsigned int)arg1 actionID:(unsigned int)arg2 period:(unsigned long long)arg3 userData:(unsigned int)arg4;
- (void)_timerIDDdealloc:(unsigned int)arg1;
- (unsigned int)_timerIDAlloc;
@property(readonly, nonatomic) unsigned long long pmcEventCount;
- (int)addPMCEventNamed:(id)arg1 error:(id *)arg2;
- (unsigned long long)_recordConfigWordsIntoBuffer:(unsigned long long *)arg1;
- (void)dealloc;
- (id)initWithCounterAllocatorProvider:(id)arg1;

@end

