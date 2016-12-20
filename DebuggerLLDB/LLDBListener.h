//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGSBListener.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface LLDBListener : NSObject <DBGSBListener>
{
    struct SBListener {
        struct shared_ptr<lldb_private::Listener> m_opaque_sp;
        struct Listener *m_unused_ptr;
    } _listener;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSBListener:(const struct SBListener *)arg1;
- (_Bool)GetNextEvent:(id)arg1;
- (_Bool)WaitForEvent:(unsigned int)arg1 event:(id)arg2;
- (unsigned int)StartListeningForEvents:(id)arg1 event_mask:(unsigned int)arg2;
- (unsigned int)StartListeningForEventClass:(id)arg1 broadcaster_class:(const char *)arg2 event_mask:(unsigned int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

