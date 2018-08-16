//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalyticsClient/DVTAnalyticsServiceURLComponentProviding-Protocol.h>
#import <DVTAnalyticsClient/DVTServicesJSONSerialization-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface DVTAnalyticsAppIdentifier : NSObject <DVTAnalyticsServiceURLComponentProviding, DVTServicesJSONSerialization>
{
    BOOL _isBeta;
    NSString *_rootVersion;
    NSString *_rootBuildNumber;
    NSString *_platformSDKIdentifier;
    NSString *_analyticsPlatformIdentifier;
    NSString *_adamId;
    NSString *_bundleIdentifier;
    NSString *_version;
    NSString *_buildNumber;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (BOOL)hasValidAnalyticsPlatformIdentifierForPlatformSDKIdentifier:(id)arg1;
+ (id)analyticsPlatformIdentifierForPlatformSDKIdentifier:(id)arg1;
+ (id)platformSDKIdentifierForAnalyticsPlatformIdentifier:(id)arg1;
+ (id)appIdentifierWithAdamId:(id)arg1 bundleIdentifier:(id)arg2 version:(id)arg3 buildNumber:(id)arg4 rootVersion:(id)arg5 rootBuildNumber:(id)arg6 isBeta:(BOOL)arg7 platformSDKIdentifierOrNil:(id)arg8;
@property(readonly) BOOL isBeta; // @synthesize isBeta=_isBeta;
@property(readonly) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSString *adamId; // @synthesize adamId=_adamId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)JSONRepresentation;
@property(readonly) NSDictionary *parameters;
@property(readonly) NSArray *pathComponents;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(copy) NSString *rootBuildNumber; // @synthesize rootBuildNumber=_rootBuildNumber;
@property(copy) NSString *rootVersion; // @synthesize rootVersion=_rootVersion;
@property(readonly) NSString *analyticsPlatformIdentifier; // @synthesize analyticsPlatformIdentifier=_analyticsPlatformIdentifier;
@property(copy) NSString *platformSDKIdentifier; // @synthesize platformSDKIdentifier=_platformSDKIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

