//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDEArchivePackagerEntitlementsMerger : NSObject
{
}

+ (id)genericallyDefinedAppKeysToCopyFromProfile;
+ (BOOL)_copyGenericallyDefinedAppKeysFromProfile;
+ (id)keysToAlwaysCopyFromProfile;
+ (id)extraKeysToSkipWhenCopyingFromProfileFor25642247;
+ (id)genericallyDefinedProfileKeysToSkipWhenCopyingFromProfile;
+ (BOOL)_wantsExtraKeysFor25642247;
+ (id)sharedMerger;
+ (void)initialize;
- (id)entitlementsByMergingProfileEntitlements:(id)arg1 appEntitlements:(id)arg2 bundleIdentifier:(id)arg3 warnings:(id)arg4 error:(id *)arg5;

@end

