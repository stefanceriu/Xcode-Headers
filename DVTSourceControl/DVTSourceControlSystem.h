//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSSet, NSString;

@interface DVTSourceControlSystem : NSObject <NSSecureCoding>
{
    BOOL _isLegacyPlugIn;
    NSString *_name;
    NSString *_version;
    NSString *_workingCopyFolderIdentifier;
    NSSet *_URLHintStrings;
    unsigned long long _supportedAuthenticationTypes;
    unsigned long long _features;
    NSString *_plugInIdentifier;
    NSString *_nonLegacyIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)sourceControlSystemsWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)bestGuessSystemForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)cachedSourceControlSystems;
+ (id)systemWithIdentifier:(id)arg1;
@property(copy) NSString *nonLegacyIdentifier; // @synthesize nonLegacyIdentifier=_nonLegacyIdentifier;
@property(readonly) BOOL isLegacyPlugIn; // @synthesize isLegacyPlugIn=_isLegacyPlugIn;
@property(copy) NSString *plugInIdentifier; // @synthesize plugInIdentifier=_plugInIdentifier;
@property unsigned long long features; // @synthesize features=_features;
@property unsigned long long supportedAuthenticationTypes; // @synthesize supportedAuthenticationTypes=_supportedAuthenticationTypes;
@property(retain) NSSet *URLHintStrings; // @synthesize URLHintStrings=_URLHintStrings;
@property(retain) NSString *workingCopyFolderIdentifier; // @synthesize workingCopyFolderIdentifier=_workingCopyFolderIdentifier;
@property(retain) NSString *version; // @synthesize version=_version;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, getter=isUsable) BOOL usable;
- (BOOL)isIsLegacyPlugIn;
- (id)initWithName:(id)arg1 plugInIdentifier:(id)arg2 version:(id)arg3 legacyPlugInForIdentifier:(id)arg4 workingCopyFolderIdentifier:(id)arg5 URLHintStrings:(id)arg6 features:(unsigned long long)arg7 supportedAuthenticationTypes:(unsigned long long)arg8;
- (id)initWithName:(id)arg1 plugInIdentifier:(id)arg2 version:(id)arg3 workingCopyFolderIdentifier:(id)arg4 URLHintStrings:(id)arg5 features:(unsigned long long)arg6 supportedAuthenticationTypes:(unsigned long long)arg7;
- (id)_init;
- (id)init;
@property(readonly) BOOL requiresLocationsForBranchesAndTags;
@property(readonly) BOOL repositoryURLIncludesSubpath;
@property(readonly) BOOL supportsPathLocation;
@property(readonly) BOOL supportsMultipleRemoteRepositories;
@property(readonly) BOOL hasLocalRepository;
- (id)keychainNameFromURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pluginIdentifier;

@end

