//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUI/XCSUIServiceKeychainDelegate-Protocol.h>

@interface XCSUIKeychainDelegate : NSObject <XCSUIServiceKeychainDelegate>
{
}

- (id)deleteServiceCredentialsFromKeychain:(id)arg1 username:(id)arg2;
- (id)setPasswordInKeychainForService:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)readPasswordFromKeychainForService:(id)arg1 username:(id)arg2;
- (id)_readPasswordForService:(id)arg1 username:(id)arg2 outItem:(struct OpaqueSecKeychainItemRef **)arg3;

@end

