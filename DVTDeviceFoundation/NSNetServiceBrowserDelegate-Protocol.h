//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTDeviceFoundation/NSObject-Protocol.h>

@class NSDictionary, NSNetService, NSNetServiceBrowser, NSString;

@protocol NSNetServiceBrowserDelegate <NSObject>

@optional
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didRemoveService:(NSNetService *)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didRemoveDomain:(NSString *)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didFindService:(NSNetService *)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didFindDomain:(NSString *)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didNotSearch:(NSDictionary *)arg2;
- (void)netServiceBrowserDidStopSearch:(NSNetServiceBrowser *)arg1;
- (void)netServiceBrowserWillSearch:(NSNetServiceBrowser *)arg1;
@end

