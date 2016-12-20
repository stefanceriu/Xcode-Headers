//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYTransport, DYTransportSource, NSMutableDictionary;

@interface DYGuestAppClient : NSObject
{
    DYTransport *_transport;
    DYTransportSource *_source;
    NSMutableDictionary *_saveptrPtrInfoDict;
    struct dispatch_queue_s *_saveptrQueue;
    NSMutableDictionary *_ptrUrlInfoDict;
    struct dispatch_queue_s *_globalSyncQueue;
    BOOL _triggerCaptureOnNextGraphicsCommand;
    BOOL _includeBacktraceInPbufs;
    BOOL _queryDriverEventsOnGraphicsCommands;
    BOOL _harvestAtEndOfCapture;
    BOOL _suspendAfterCapture;
    BOOL _lockGraphicsAfterCapture;
    BOOL _didSendAllDataSentMessage;
    BOOL _allDataReceivedAck;
    BOOL _isLocalDebuggingEnabled;
    struct Stream *_defaultFbufStream;
    struct Stream *_platformFbufStream;
    int _traceMode;
    int _previousTraceMode;
    unsigned int _globalFrameCounter;
    struct CaptureInfo *_captureInfo;
    unsigned int _overrideFlags;
    unsigned long long _xcodeOverrideFlags;
    double _xcodeOverrideScaleTessFactor;
    unsigned int _capturing;
    int _waitOnGraphicsSemaphoreAssertions;
    struct dispatch_queue_s *_graphicsLockWaitQueue;
    struct dispatch_semaphore_s *_graphicsSemaphore;
}

+ (id)timebaseDictionary;
@property(readonly, nonatomic) struct dispatch_queue_s *graphicsLockWaitQueue; // @synthesize graphicsLockWaitQueue=_graphicsLockWaitQueue;
@property(readonly, nonatomic) struct dispatch_semaphore_s *graphicsSemaphore; // @synthesize graphicsSemaphore=_graphicsSemaphore;
@property(readonly, nonatomic) int waitOnGraphicsSemaphoreAssertions; // @synthesize waitOnGraphicsSemaphoreAssertions=_waitOnGraphicsSemaphoreAssertions;
@property(nonatomic) BOOL queryDriverEventsOnGraphicsCommands; // @synthesize queryDriverEventsOnGraphicsCommands=_queryDriverEventsOnGraphicsCommands;
@property(nonatomic) BOOL includeBacktraceInPbufs; // @synthesize includeBacktraceInPbufs=_includeBacktraceInPbufs;
@property(readonly, nonatomic) struct dispatch_queue_s *saveptrQueue; // @synthesize saveptrQueue=_saveptrQueue;
@property(readonly) unsigned int capturing; // @synthesize capturing=_capturing;
@property(readonly, nonatomic) struct dispatch_queue_s *globalSyncQueue; // @synthesize globalSyncQueue=_globalSyncQueue;
@property(readonly, nonatomic) NSMutableDictionary *ptrUrlInfoDict; // @synthesize ptrUrlInfoDict=_ptrUrlInfoDict;
@property(readonly, nonatomic) NSMutableDictionary *saveptrPtrInfoDict; // @synthesize saveptrPtrInfoDict=_saveptrPtrInfoDict;
@property double xcodeOverrideScaleTessFactor; // @synthesize xcodeOverrideScaleTessFactor=_xcodeOverrideScaleTessFactor;
@property unsigned long long xcodeOverrideFlags; // @synthesize xcodeOverrideFlags=_xcodeOverrideFlags;
@property unsigned int overrideFlags; // @synthesize overrideFlags=_overrideFlags;
@property(readonly, nonatomic) struct CaptureInfo *captureInfo; // @synthesize captureInfo=_captureInfo;
@property(readonly) unsigned int globalFrameCounter; // @synthesize globalFrameCounter=_globalFrameCounter;
@property(nonatomic) int previousTraceMode; // @synthesize previousTraceMode=_previousTraceMode;
@property(nonatomic) int traceMode; // @synthesize traceMode=_traceMode;
@property(readonly, nonatomic) struct Stream *platformFbufStream; // @synthesize platformFbufStream=_platformFbufStream;
@property(readonly, nonatomic) struct Stream *defaultFbufStream; // @synthesize defaultFbufStream=_defaultFbufStream;
@property(readonly, nonatomic) BOOL harvestAtEndOfCapture; // @synthesize harvestAtEndOfCapture=_harvestAtEndOfCapture;
@property(readonly, nonatomic) BOOL triggerCaptureOnNextGraphicsCommand; // @synthesize triggerCaptureOnNextGraphicsCommand=_triggerCaptureOnNextGraphicsCommand;
- (void)_waitForGraphicsThreads;
- (BOOL)_canTriggerCaptureOnNextGraphicsCommand;
- (void)_appendLinkTimeLibrariesToVersionsDictionary:(id)arg1;
- (void)_appendToAllCaptureDataSentMessagePayload:(id)arg1;
- (void)_populateQueueAndThreadLabelMaps;
- (void)_appendLinkTimeLibrary:(const char *)arg1 toVersionsDictionary:(id)arg2;
- (void)unlockGraphics;
- (void)lockGraphicsAndWaitForThreads:(BOOL)arg1;
- (void)notifyAllCaptureDataSent;
- (void)_handleActivateCaptureMessage:(id)arg1;
- (void)_armCapturing:(unsigned int)arg1 andFrameLimit:(unsigned int)arg2 andSerial:(unsigned int)arg3;
- (void)_turnOnCapturing;
- (void)_resetBufferUsageCounters;
- (void)invalidateSavePointerMap:(id)arg1;
- (void)resetPointerToUrlAssociation:(const void *)arg1;
- (void)_turnOffCapturing;
- (void)_sendBufferUsageCounters;
- (id)_buildLibraryLinkTimeVersionsDictionary;
- (id)_buildQueueThreadLabelsDictionary;
- (void)sendTimebaseUpdate;
- (void)sendCaptureData:(id)arg1 name:(id)arg2 inReplyTo:(id)arg3;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 inReplyTo:(id)arg2;
- (BOOL)shouldLockGraphicsWhenTurningOffCapturing;
- (void)processMessage:(id)arg1;
- (void)_resetCapturing;
- (void)handleCaptureModeTransition:(_Bool)arg1;
- (void)handleFrameBoundaryCommon;
- (void)atexit;
- (void)dealloc;
- (id)initWithTransport:(id)arg1;
- (BOOL)globalFrameCounterAtomicCompareAndSwap32:(int)arg1 newValue:(int)arg2;
- (BOOL)capturingCompareAndSwap;
- (unsigned int)globalFrameCounterAtomicIncrement;
- (id)init;
- (void)_handleTurnOffCapture;
- (void)_handleTurnOnCapture;

@end

