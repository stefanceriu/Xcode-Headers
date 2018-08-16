//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEProducts/IDEProductSource.h>

@class DVTDelayedInvocation, DVTFilePath, DVTNotificationToken, DVTPerformanceMetric, NSArray, NSMutableDictionary, NSMutableSet, NSSet;

@interface IDEAppStoreProductSource : IDEProductSource
{
    DVTPerformanceMetric *_perfMetric;
    BOOL _hasCompletedInitialLoading;
    DVTDelayedInvocation *_delayedRefreshInvocation;
    DVTNotificationToken *_developerAccountsObserver;
    NSSet *_developerAccountPasswordObservers;
    NSMutableDictionary *_deliveryQueue;
    NSMutableSet *_priorityDeliveryQueue;
    NSMutableDictionary *_rateLimiters;
    NSArray *_lastNetworkRefreshErrors;
    DVTFilePath *_productsRootDirectory;
}

+ (id)defaultProductsRootDirectory;
+ (BOOL)isAdamIdBlacklisted:(id)arg1;
+ (BOOL)isAdamIdWhitelisted:(id)arg1;
+ (id)blackListedAdamIDs;
+ (id)whiteListedAdamIDs;
@property(retain, nonatomic) DVTFilePath *productsRootDirectory; // @synthesize productsRootDirectory=_productsRootDirectory;
@property(retain, nonatomic) NSArray *lastNetworkRefreshErrors; // @synthesize lastNetworkRefreshErrors=_lastNetworkRefreshErrors;
@property(retain, nonatomic) NSMutableDictionary *rateLimiters; // @synthesize rateLimiters=_rateLimiters;
@property(retain, nonatomic) NSMutableSet *priorityDeliveryQueue; // @synthesize priorityDeliveryQueue=_priorityDeliveryQueue;
@property(retain, nonatomic) NSMutableDictionary *deliveryQueue; // @synthesize deliveryQueue=_deliveryQueue;
@property(retain) NSSet *developerAccountPasswordObservers; // @synthesize developerAccountPasswordObservers=_developerAccountPasswordObservers;
@property(retain) DVTNotificationToken *developerAccountsObserver; // @synthesize developerAccountsObserver=_developerAccountsObserver;
@property(retain, nonatomic) DVTDelayedInvocation *delayedRefreshInvocation; // @synthesize delayedRefreshInvocation=_delayedRefreshInvocation;
@property BOOL hasCompletedInitialLoading; // @synthesize hasCompletedInitialLoading=_hasCompletedInitialLoading;
- (void).cxx_destruct;
- (id)binaryInfosForVersion:(id)arg1;
- (id)supportedDeviceTypesForAppVersion:(id)arg1 productCategory:(id)arg2;
- (id)productFromAppDescription:(id)arg1 versionDescriptions:(id)arg2 session:(id)arg3 coordinator:(id)arg4 errors:(id *)arg5;
- (id)appStoreProductsResultForAccount:(id)arg1 iTunesConnect:(id)arg2 coordinator:(id)arg3 productLocationResultNotification:(CDUnknownBlockType)arg4;
- (id)appStoreProductsForCoordinator:(id)arg1 productLocationResultNotification:(CDUnknownBlockType)arg2;
- (id)productForAppDescription:(id)arg1 session:(id)arg2 iTunesConnect:(id)arg3 coordinator:(id)arg4;
- (id)versionDescriptionsForAppDescription:(id)arg1 session:(id)arg2 iTunesConnect:(id)arg3 error:(id *)arg4;
- (id)appDescriptionsForAccountSession:(id)arg1 iTunesConnect:(id)arg2 error:(id *)arg3;
- (void)_setBusyOnMainThread:(BOOL)arg1;
- (void)delayedRefreshProducts;
- (id)rateLimiter;
- (void)drainAllProductsInPriorityDeliveryQueue;
- (void)drainAllProductsInDeliveryQueue;
- (id)drainProductsDeliveryQueueOfProductIdentifiers:(id)arg1;
- (void)addToProductDeliveryQueue:(id)arg1;
- (void)prioritizeDeliveryOfResultsForProductIdentifier:(id)arg1;
- (void)refreshProducts;
- (void)startLocating;
- (BOOL)networkRefreshEnabled;
- (id)resultByMergingProductResults:(id)arg1 withCoordinator:(id)arg2;
- (id)updateCacheWithResult:(id)arg1;
- (id)readProductsFromCacheWithCoordinator:(id)arg1 withNetworkErrors:(id)arg2;
- (id)readProductFromCachedProductDir:(id)arg1 withCoordinator:(id)arg2;
- (id)appIconPathForProduct:(id)arg1;
- (id)filePathForProductVersion:(id)arg1 rootProductVersion:(id)arg2 parentProduct:(id)arg3;
- (id)filePathForProduct:(id)arg1;
- (id)cacheAndNetworkLock;
- (void)dealloc;
- (id)initWithProductManager:(id)arg1 productsRootDirectory:(id)arg2;
- (id)initWithProductManager:(id)arg1;

@end
