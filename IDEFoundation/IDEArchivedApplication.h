//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEArchivedContent.h>

@class DVTFilePath, DVTPlatform, NSString;

@interface IDEArchivedApplication : IDEArchivedContent
{
}

+ (id)keyPathsForValuesAffectingIconPath;
+ (id)keyPathsForValuesAffectingApplicationPath;
+ (id)_codesigningIdentityFromApplicationPath:(id)arg1;
+ (id)archivedContentPathPlistKey;
+ (id)archivedContentPropertiesPlistKey;
+ (BOOL)fillInfoDictionary:(id)arg1 forContentAtPath:(id)arg2 inArchiveProductsDirectory:(id)arg3;
+ (id)soleArchivedContentRelativePathInDirectory:(id)arg1;
@property(readonly) DVTPlatform *platform;
- (long long)autodetectedFormatForPackaging;
- (BOOL)supportsPackagingAsFormat:(long long)arg1;
- (id)platformName;
@property(readonly) DVTFilePath *applicationPath;
@property(readonly) NSString *signingIdentity;

@end

