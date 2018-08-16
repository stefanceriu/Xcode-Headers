//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBError-Protocol.h>

@class NSString;

@interface LLDBError : NSObject <DBGSBError>
{
    struct SBError {
        struct unique_ptr<lldb_private::Status, std::__1::default_delete<lldb_private::Status>> m_opaque_ap;
    } _error;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)Success;
- (_Bool)Fail;
- (const char *)GetCString;
- (id)initWithSBError:(const struct SBError *)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

