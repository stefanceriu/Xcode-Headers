//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTKPTriggerCounterAllocatorProvider-Protocol.h>

@class DTKPCPUCounterAllocator, DTKPRecordDecoder, DTKPTriggerKDebug, DTKPTriggerPMI, NSMutableArray, NSString;
@protocol DTKPDatastream, OS_dispatch_semaphore;

@interface DTKPSession : NSObject <DTKPTriggerCounterAllocatorProvider>
{
    DTKPRecordDecoder *_recordDecoder;
    unsigned int _sessionID;
    BOOL _holdingSessionLock;
    BOOL _replayOnly;
    NSObject<OS_dispatch_semaphore> *_idleSemaphore;
    DTKPTriggerKDebug *_triggerKDebug;
    DTKPTriggerPMI *_triggerPMI;
    NSMutableArray *_allTriggerTimes;
    BOOL _initializedCounterAllocator;
    DTKPCPUCounterAllocator *_counterAllocator;
    struct SessionCallbackState _kernelCallback;
    struct kperf_buf *_kperfBuffer;
    BOOL _hasPMI;
    BOOL _hasPMCs;
    BOOL _hasTimer;
    BOOL _tryingToStop;
    unsigned char _collectionMode;
    unsigned char _recordingPriority;
    unsigned int _state;
    unsigned long long _bufferSize;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_semaphore> *_lock;
    id <DTKPDatastream> _currentDatastream;
    id <DTKPDatastream> _onDeckDatastream;
}

+ (int)blessPid:(int)arg1;
+ (BOOL)existsInDirectory:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) id <DTKPDatastream> onDeckDatastream; // @synthesize onDeckDatastream=_onDeckDatastream;
@property(retain, nonatomic) id <DTKPDatastream> currentDatastream; // @synthesize currentDatastream=_currentDatastream;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) unsigned char recordingPriority; // @synthesize recordingPriority=_recordingPriority;
@property(nonatomic) unsigned char collectionMode; // @synthesize collectionMode=_collectionMode;
- (void).cxx_destruct;
- (void)ensureCallbackThreadIsActive;
- (int)_flushDataFromKernelLocked:(unsigned int)arg1 actualBytesReadOut:(unsigned int *)arg2;
- (int)flushDataFromKernel:(unsigned int)arg1 actualBytesReadOut:(unsigned int *)arg2;
- (int)flushDataFromKernel:(unsigned int)arg1;
- (int)_returnKernelBuffer:(void *)arg1;
- (int)_getKernelBuffer:(void **)arg1 bufferSize:(unsigned long long *)arg2 more:(_Bool *)arg3;
- (void)_releaseKernelResources;
- (BOOL)isPaused;
- (BOOL)isActive;
- (void)waitForIdle;
- (int)stop:(id *)arg1;
- (int)resume:(id *)arg1;
- (int)pause:(id *)arg1;
- (int)start:(id *)arg1;
- (int)_validateConfigLocked;
- (int)_reinitializeKperf:(id *)arg1;
- (int)_configureSettingsForKDebug:(BOOL)arg1 callstacks:(BOOL)arg2 contextSwitch:(BOOL)arg3 error:(id *)arg4;
- (int)_setSessionConfigLocked:(BOOL)arg1;
- (id)allTriggerTime;
- (id)firstTriggerTime;
- (id)triggerPMI;
- (id)triggerKDebug;
- (void)clearAllTriggerTime;
- (void)clearTriggerTimeAtIndex:(unsigned long long)arg1;
- (void)clearTriggerPMI;
- (void)clearTriggerKDebug;
- (id)createTriggerTime:(id *)arg1;
- (id)createTriggerPMI:(id *)arg1;
- (id)createTriggerKDebug:(id *)arg1;
- (int)_clearActiveSessionLocked;
- (BOOL)_isActiveSessionLocked;
- (int)_setActiveSessionLocked;
- (id)swapOutCurrentDatastream:(id *)arg1;
- (id)_swapOutCurrentDatastreamLocked:(id *)arg1;
- (void)logKPRecsIncludingCallstacks:(BOOL)arg1 toFile:(struct __sFILE *)arg2;
- (void)setEnumerateTimeRangeStart:(unsigned long long)arg1 stop:(unsigned long long)arg2;
- (int)exportData:(char *)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (int)enumerateRecords:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (id)queryCounterAllocator;
- (id)counterAllocator;
@property(readonly, nonatomic) unsigned int sessionID;
- (void)dealloc;
- (id)initAsFileBackedWithDirectory:(id)arg1 retainFiles:(BOOL)arg2 error:(id *)arg3;
- (id)initAsMemoryBackedWithError:(id *)arg1;
- (id)init;
- (BOOL)_commonInitWithError:(id *)arg1;
- (int)_kernelCallbackThreadInit;
- (int)_startCallbackThread;
- (void)_kernelCallbackShutdown;
- (void)_kernelCallbackStop;
- (void *)callbackThread;
- (void)_kernelCallbackThreadActive;
- (void)callbackThreadAlertForReason:(unsigned int)arg1;
- (void)notifyCallbackThread:(int)arg1;
- (void)notifyCallbackThreadLocked:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

