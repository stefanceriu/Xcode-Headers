//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSMapTable;

@interface IDEProvisioningSessionManager : NSObject
{
    DVTDispatchLock *_lock;
    NSMapTable *_accountToSessionMap;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)invalidateSession:(id)arg1;
- (id)sessionForAccount:(id)arg1 error:(id *)arg2;
- (id)initWithLock:(id)arg1 accountsToSessionMap:(id)arg2;

@end

