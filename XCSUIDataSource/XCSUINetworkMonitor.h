//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface XCSUINetworkMonitor : NSObject
{
    struct __SCDynamicStore *_store;
    struct __CFString *_dnsKey;
    id _domainLock;
    NSString *_domainName;
    NSMapTable *_reachabilityReferencesForWatchedAccounts;
}

+ (long long)networkStatus;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *currentStatusString;
@property(readonly) long long currentStatus;
- (void)_clearDomainName;
- (void)_postNetworkChangeNotification;
- (void)_queueNetworkChangeNotification;
- (void)dealloc;
- (id)init;

@end
