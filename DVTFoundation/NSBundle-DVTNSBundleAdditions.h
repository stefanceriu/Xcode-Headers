//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBundle.h>

@class NSString;

@interface NSBundle (DVTNSBundleAdditions)
+ (id)dvt_rawInfoDictionaryForBundleAtPath:(id)arg1 error:(id *)arg2;
+ (id)dvt_filteredInfoDictionaryForBundleAtPath:(id)arg1 error:(id *)arg2;
+ (id)dvt_uncachedPathForResource:(id)arg1 ofType:(id)arg2 atBundlePath:(id)arg3;
+ (id)_uncachedValueForKey:(struct __CFString *)arg1 atURL:(id)arg2;
+ (id)_uncachedBundleStringForKey:(struct __CFString *)arg1 AtURL:(id)arg2;
+ (id)dvt_uncachedExtensionInfoAtPath:(id)arg1;
+ (id)dvt_uncachedBundleExecutableAtPath:(id)arg1;
+ (id)dvt_uncachedBundleIdentifierAtPath:(id)arg1;
+ (id)dvt_uncachedBundleExecutableAtURL:(id)arg1;
+ (id)dvt_uncachedBundleIdentifierAtURL:(id)arg1;
+ (id)dvt_executablePathForBundleAtPath:(id)arg1;
@property(readonly, nonatomic) NSString *dvt_contentsPath;
@end

