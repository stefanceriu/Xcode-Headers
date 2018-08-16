//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface DTDKDeveloperProfile : NSObject
{
}

+ (id)accountsPlistVersion;
+ (id)currentProfile;
- (id)importDeveloperProfileFromFile:(id)arg1 withPassword:(id)arg2 accountProviders:(id)arg3 error:(id *)arg4;
- (BOOL)_importIdentityFromData:(id)arg1 withPassword:(id)arg2 error:(id *)arg3;
- (id)exportDeveloperProfileToFile:(id)arg1 withPassword:(id)arg2 accountProviders:(id)arg3 error:(id *)arg4;
- (BOOL)_exportAccountProviders:(id)arg1 toZipFile:(struct zip_internal *)arg2 withPassword:(id)arg3 count:(unsigned long long *)arg4 error:(id *)arg5;
- (id)_accountsPlistWithProviders:(id)arg1 keychain:(id)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)_exportProvisioningProfilesToZipFile:(struct zip_internal *)arg1 numberExported:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)_exportIdentitiesToZipFile:(struct zip_internal *)arg1 withPassword:(id)arg2 numberExported:(unsigned long long *)arg3 error:(id *)arg4;
@property(readonly) NSArray *ADCLogins;
- (id)identities;
@property(readonly) NSSet *provisioningProfiles;
@property(readonly) NSSet *certificates;

@end

