//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DVTFilePath, DVTPlatform, DVTSearchPath, NSArray, NSDictionary, NSNumber, NSSet, NSString;

@interface DVTSDK : NSObject
{
    DVTPlatform *_platform;
    NSString *_canonicalName;
    NSSet *_aliases;
    NSString *_displayName;
    NSString *_operatingSystemVersion;
    DVTFilePath *_sdkPath;
    NSString *_alternateSDKName;
    NSArray *_supportedBuildToolComponents;
    NSArray *_librarySearchPaths;
    NSDictionary *_infoDictionary;
    NSString *_propertyConditionName;
    NSArray *_propertyConditionFallbackNames;
    NSString *_minimalDisplayName;
    NSDictionary *_defaultProperties;
    NSNumber *_isInternal;
    NSNumber *_isBaseSDK;
    DVTSearchPath *_commandLineToolSearchPath;
    NSArray *_headerSearchPaths;
    NSArray *_frameworkSearchPaths;
    NSDictionary *_versionInfo;
    NSArray *_toolchains;
    NSArray *_toolchainNames;
    NSDictionary *_simulatorOptions;
    NSDictionary *_debuggerOptions;
}

+ (id)sdksInDirectory:(id)arg1 forPlatform:(id)arg2;
+ (id)sdkInDirectory:(id)arg1 forPlatform:(id)arg2;
+ (id)sdkForPath:(id)arg1 forceCreate:(BOOL)arg2;
+ (id)sdkForPath:(id)arg1;
+ (id)sdkForUnsetSDKROOTOrNil;
+ (id)sdkForUnsetSDKROOT;
+ (id)sdkForNameOrPath:(id)arg1 withBasePath:(id)arg2 forceCreate:(BOOL)arg3;
+ (id)_absolutePathForSDKPathString:(id)arg1;
+ (id)sdksForFamily:(id)arg1;
+ (id)sdkForCanonicalName:(id)arg1;
+ (void)_setSDK:(id)arg1 forCanonicalName:(id)arg2;
+ (id)_sdkForResolvedAbsolutePath:(id)arg1;
+ (void)_setSDK:(id)arg1 forResolvedAbsolutePath:(id)arg2;
+ (id)knownSDKs;
+ (void)initialize;
@property(retain) NSSet *aliases; // @synthesize aliases=_aliases;
@property(readonly, copy) NSDictionary *debuggerOptions; // @synthesize debuggerOptions=_debuggerOptions;
@property(readonly, copy) NSDictionary *simulatorOptions; // @synthesize simulatorOptions=_simulatorOptions;
@property(readonly, copy) NSArray *toolchainNames; // @synthesize toolchainNames=_toolchainNames;
@property(readonly, copy) NSArray *propertyConditionFallbackNames; // @synthesize propertyConditionFallbackNames=_propertyConditionFallbackNames;
@property(readonly, copy) NSDictionary *defaultProperties; // @synthesize defaultProperties=_defaultProperties;
@property(readonly, copy) NSArray *toolchains; // @synthesize toolchains=_toolchains;
@property(readonly, copy) NSArray *librarySearchPaths; // @synthesize librarySearchPaths=_librarySearchPaths;
@property(readonly, copy) NSString *alternateSDKName; // @synthesize alternateSDKName=_alternateSDKName;
@property(readonly, copy) NSArray *supportedBuildToolComponents; // @synthesize supportedBuildToolComponents=_supportedBuildToolComponents;
@property(readonly, copy) NSString *propertyConditionName; // @synthesize propertyConditionName=_propertyConditionName;
@property(readonly, copy) NSString *minimalDisplayName; // @synthesize minimalDisplayName=_minimalDisplayName;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
@property(readonly, copy) DVTFilePath *sdkPath; // @synthesize sdkPath=_sdkPath;
@property(readonly, copy) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(readonly, copy) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)additionalLibrarySearchPaths;
- (id)additionalFrameworkSearchPaths;
- (id)additionalHeaderSearchPaths;
- (id)commandLineToolSearchPath;
@property(readonly) NSDictionary *versionInfo; // @synthesize versionInfo=_versionInfo;
@property(readonly, getter=isBaseSDK) BOOL baseSDK;
@property(readonly, getter=isInternal) BOOL internal;
@property(retain) DVTPlatform *platform;
- (BOOL)isEmbedded;
- (id)initWithFilePath:(id)arg1;
- (id)initWithFilePath:(id)arg1 infoDictionary:(id)arg2;

@end

