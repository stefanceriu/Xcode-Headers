//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTAnalytics/NSCopying-Protocol.h>
#import <DVTAnalytics/NSObject-Protocol.h>

@class DVTAnalyticsAppIdentifier, DVTAnalyticsAppStoreSourceUserDefaultsKey, DVTAnalyticsPointAbstractClass, DVTFilePath, DVTServicesSession, NSArray, NSString;

@protocol DVTAnalyticsAppStoreSourceProtocol <NSObject, NSCopying>
@property(readonly) long long type;
@property(readonly) DVTAnalyticsAppStoreSourceUserDefaultsKey *userDefaultsKey;
@property(readonly) NSString *appExtensionPointIdentifier;
@property(readonly) DVTAnalyticsAppIdentifier *appIdentifier;
@property(readonly) BOOL isBeta;
@property(readonly) NSString *buildNumber;
@property(readonly) NSString *version;
@property(readonly) NSString *bundleIdentifier;
@property(readonly) BOOL hasCompletedInitialLoading;
@property(readonly) NSArray *analyticsPoints;
- (void)cacheAnalyticsPoints:(NSArray *)arg1;
- (BOOL)updateFromNetworkWithSession:(DVTServicesSession *)arg1 error:(id *)arg2;
- (void)fetchFromDisk;
- (DVTFilePath *)cachedPathForAnalyticsPoint:(DVTAnalyticsPointAbstractClass *)arg1;
@end
