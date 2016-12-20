//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DBGSBThread <NSObject>
- (BOOL)isEqual:(id <DBGSBThread>)arg1;
- (id <DBGSBError>)StepOverUntil:(id <DBGSBFrame>)arg1 fileSpec:(id <DBGSBFileSpec>)arg2 line:(unsigned int)arg3;
- (id <DBGSBValue>)GetStopReturnValue;
- (id <DBGSBFrame>)SetSelectedFrame:(unsigned int)arg1;
- (id <DBGSBFrame>)GetSelectedFrame;
- (id <DBGSBFrame>)GetFrameAtIndex:(unsigned int)arg1;
- (void)StepOut;
- (void)StepOver:(int)arg1;
- (void)StepInto:(int)arg1;
- (void)StepInstruction:(_Bool)arg1;
- (unsigned int)GetExtendedBacktraceOriginatingIndexID;
- (const char *)GetQueueName;
- (unsigned long long)GetQueueID;
- (unsigned long long)GetThreadID;
- (unsigned long long)GetStopDescription:(char *)arg1 dst_len:(unsigned long long)arg2;
- (id <DBGSBThreadCollection>)GetStopReasonExtendedBacktraces:(int)arg1;
- (_Bool)GetStopReasonExtendedInfoAsJSON:(id <DBGSBStream>)arg1;
- (unsigned long long)GetStopReasonDataAtIndex:(unsigned int)arg1;
- (int)GetStopReason;
- (_Bool)Resume;
- (_Bool)Suspend;
- (unsigned int)GetNumFrames;
- (id <DBGSBProcess>)GetProcess;
- (id <DBGSBThread>)GetExtendedBacktraceThread:(const char *)arg1;
- (_Bool)GetInfoItemByPathAsString:(const char *)arg1 stream:(id <DBGSBStream>)arg2;
- (const char *)GetName;
- (unsigned int)GetIndexID;
- (_Bool)IsValid;
@end

