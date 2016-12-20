//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DBGSBProcess <NSObject>
- (_Bool)StateIsStoppedState;
- (id <DBGSBBroadcaster>)GetBroadcaster;
- (id <DBGSBThreadCollection>)GetHistoryThreads:(unsigned long long)arg1;
- (id <DBGSBQueue>)GetQueueAtIndex:(unsigned long long)arg1;
- (_Bool)SetSelectedThread:(id <DBGSBThread>)arg1;
- (id <DBGSBThread>)GetSelectedThread;
- (id <DBGSBThread>)GetThreadAtIndex:(unsigned long long)arg1;
- (const char *)GetExitDescription;
- (int)GetExitStatus;
- (unsigned long long)GetAsyncProfileData:(char *)arg1 dst_len:(unsigned long long)arg2;
- (unsigned long long)GetSTDERR:(char *)arg1 dst_len:(unsigned long long)arg2;
- (unsigned long long)GetSTDOUT:(char *)arg1 dst_len:(unsigned long long)arg2;
- (id <DBGSBError>)Kill;
- (id <DBGSBError>)Detach;
- (unsigned int)LoadImage:(id <DBGSBFileSpec>)arg1 error:(id <DBGSBError>)arg2;
- (_Bool)SetSelectedThreadByIndexID:(unsigned int)arg1;
- (id <DBGSBError>)SendEventData:(const char *)arg1;
- (id <DBGSBError>)Stop;
- (void)SendAsyncInterrupt;
- (unsigned int)GetAddressByteSize;
- (_Bool)IsInstrumentationRuntimePresent:(int)arg1;
- (id <DBGSBError>)Continue;
- (unsigned long long)ReadMemory:(unsigned long long)arg1 buf:(void *)arg2 size:(unsigned long long)arg3 error:(id <DBGSBError>)arg4;
- (unsigned int)GetNumQueues;
- (unsigned int)GetNumThreads;
- (int)GetState;
- (unsigned long long)GetProcessID;
- (const char *)GetPluginName;
- (id <DBGSBTarget>)GetTarget;
- (_Bool)IsValid;
@end

