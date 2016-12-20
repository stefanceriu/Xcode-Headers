//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTProvisioningProfileSource.h"

@class DVTProvisioningProfileReaper, NSArray, NSSet, NSString;

@interface DVTProvisioningProfileManager : NSObject <DVTProvisioningProfileSource>
{
    id _provider;
    NSArray *_provisioningProfileSearchPaths;
    DVTProvisioningProfileReaper *_provisioningProfileReaper;
}

+ (id)keyPathsForValuesAffectingExpiringProfiles;
+ (id)keyPathsForValuesAffectingAllProfiles;
+ (id)keyPathsForValuesAffectingAreProfilesLoaded;
+ (id)managerWithProvisioningProfileSearchPaths:(id)arg1;
+ (id)defaultManager;
+ (id)logAspect;
@property(readonly) DVTProvisioningProfileReaper *provisioningProfileReaper; // @synthesize provisioningProfileReaper=_provisioningProfileReaper;
@property(readonly) NSArray *provisioningProfileSearchPaths; // @synthesize provisioningProfileSearchPaths=_provisioningProfileSearchPaths;
- (void).cxx_destruct;
- (void)installHostProfiles:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)profileWithData:(id)arg1 error:(id *)arg2;
- (id)profileWithURL:(id)arg1 error:(id *)arg2;
@property(readonly) id provider; // @synthesize provider=_provider;
- (id)profilesMatchingApplicationID:(id)arg1;
- (id)profileMatchingUUID:(id)arg1;
- (id)profilesMatchingPredicate:(id)arg1;
@property(readonly) NSSet *allUsableProfiles;
- (BOOL)isProfileExpiringWithCodeSigningIdentity:(id)arg1 profileName:(id *)arg2;
- (id)expiringProfilesInExpansionContext:(id)arg1;
@property(readonly) NSSet *expiringProfiles;
@property(readonly) NSSet *allProfiles;
@property(readonly) BOOL areProfilesLoaded;
- (id)allProfiles_sync;
- (void)forceProfileLoading;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

