//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBTypeMember-Protocol.h>

@class NSString;

@interface LLDBTypeMember : NSObject <DBGSBTypeMember>
{
    struct SBTypeMember {
        struct unique_ptr<lldb_private::TypeMemberImpl, std::__1::default_delete<lldb_private::TypeMemberImpl>> m_opaque_ap;
    } _typeMember;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSBTypeMember:(const struct SBTypeMember *)arg1;
- (id)GetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

