//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGSBTarget.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface LLDBTarget : NSObject <DBGSBTarget>
{
    struct SBTarget {
        struct shared_ptr<lldb_private::Target> m_opaque_sp;
    } _target;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)BreakpointDelete:(int)arg1;
- (_Bool)DeleteWatchpoint:(int)arg1;
- (unsigned int)GetNumWatchpoints;
- (unsigned int)GetNumModules;
- (void)Clear;
- (_Bool)IsValid;
- (id)initWithSBTarget:(const struct SBTarget *)arg1;
- (id)ResolveLoadAddress:(unsigned long long)arg1;
- (id)GetBroadcaster;
- (id)GetModuleAtIndex:(unsigned int)arg1;
- (id)AddModule:(const char *)arg1 triple:(const char *)arg2 uuid:(const char *)arg3;
- (id)GetWatchpointAtIndex:(unsigned int)arg1;
- (id)FindWatchpointByID:(int)arg1;
- (id)BreakpointCreateForException:(int)arg1 catch_bp:(_Bool)arg2 throw_bp:(_Bool)arg3 extra_args:(id)arg4;
- (id)BreakpointCreateByNames:(const char **)arg1 num_names:(unsigned int)arg2 name_type_mask:(unsigned int)arg3 module_list:(id)arg4 comp_unit_list:(id)arg5;
- (id)BreakpointCreateByAddress:(unsigned long long)arg1;
- (id)BreakpointCreateByName:(const char *)arg1 module_name:(const char *)arg2;
- (id)BreakpointCreateByLocation:(const char *)arg1 line:(unsigned int)arg2;
- (id)FindBreakpointByID:(int)arg1;
- (id)FindFirstGlobalVariable:(const char *)arg1;
- (id)Launch:(id)arg1 error:(id)arg2;
- (id)ConnectRemote:(id)arg1 url:(const char *)arg2 plugin_name:(const char *)arg3 error:(id)arg4;
- (id)GetProcess;
- (id)Attach:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

