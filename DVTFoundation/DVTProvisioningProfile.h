//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DVTFoundation/DVTQualifiableProfile-Protocol.h>
#import <DVTFoundation/NSCopying-Protocol.h>

@class DVTFilePath, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString;

@interface DVTProvisioningProfile : NSObject <DVTQualifiableProfile, NSCopying>
{
    BOOL _isUniversal;
    BOOL _isAppleInternal;
    NSString *_appIdentifierEntitlementWithoutPrefix;
    NSString *_name;
    NSString *_UUID;
    NSString *_teamName;
    NSArray *_teamIdentifierPrefixes;
    NSDictionary *_entitlements;
    NSString *_appIdentifierName;
    NSArray *_applicationIdentifierPrefixes;
    NSDate *_dateCreated;
    NSDate *_dateExpired;
    NSString *_certificateKind;
    NSSet *_certificateSHA1Hashes;
    NSSet *_supportedUDIDs;
    DVTFilePath *_filePath;
    NSString *_pathExtension;
    NSSet *_platforms;
    NSData *_dataRepresentation;
    NSSet *_profilePlatforms;
}

@property(readonly) NSSet *profilePlatforms; // @synthesize profilePlatforms=_profilePlatforms;
@property(readonly, nonatomic) NSData *dataRepresentation; // @synthesize dataRepresentation=_dataRepresentation;
@property(readonly) NSSet *platforms; // @synthesize platforms=_platforms;
@property(readonly, nonatomic) NSString *pathExtension; // @synthesize pathExtension=_pathExtension;
@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(readonly) BOOL isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property(readonly) BOOL isUniversal; // @synthesize isUniversal=_isUniversal;
@property(readonly) NSSet *supportedUDIDs; // @synthesize supportedUDIDs=_supportedUDIDs;
@property(readonly) NSSet *certificateSHA1Hashes; // @synthesize certificateSHA1Hashes=_certificateSHA1Hashes;
@property(readonly) NSString *certificateKind; // @synthesize certificateKind=_certificateKind;
@property(readonly) NSDate *dateExpired; // @synthesize dateExpired=_dateExpired;
@property(readonly) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly) NSArray *applicationIdentifierPrefixes; // @synthesize applicationIdentifierPrefixes=_applicationIdentifierPrefixes;
@property(readonly) NSString *appIdentifierName; // @synthesize appIdentifierName=_appIdentifierName;
@property(readonly) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly) NSArray *teamIdentifierPrefixes; // @synthesize teamIdentifierPrefixes=_teamIdentifierPrefixes;
@property(readonly) NSString *teamName; // @synthesize teamName=_teamName;
@property(readonly) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)certificates;
@property(readonly) id underlyingProfile;
- (BOOL)matchesEntitlements:(id)arg1 nonMatchingKeys:(id *)arg2;
@property(readonly, nonatomic) NSString *applicationIdentifierEntitlement;
- (BOOL)writeToFilePath:(id)arg1 error:(id *)arg2;
@property(readonly) BOOL isActive;
@property(readonly) BOOL isExpired;
@property(readonly) NSString *teamID;
@property(readonly) NSString *appIdentifierEntitlementWithoutPrefix; // @synthesize appIdentifierEntitlementWithoutPrefix=_appIdentifierEntitlementWithoutPrefix;
- (BOOL)matchesBundleIdentifier:(id)arg1;
@property(readonly) BOOL isXcodeManaged;
@property(readonly) BOOL usesExplicitAppIdentifier;
- (long long)localizedCompare:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 UUID:(id)arg2 entitlements:(id)arg3 appIdentifierName:(id)arg4 appIdentifierPrefixes:(id)arg5 teamName:(id)arg6 teamIdentifierPrefixes:(id)arg7 dateCreated:(id)arg8 dateExpired:(id)arg9 platforms:(id)arg10 supportedUDIDs:(id)arg11 certificateSHA1Hashes:(id)arg12 certificateKind:(id)arg13 isUniversal:(BOOL)arg14 isAppleInternal:(BOOL)arg15;
- (id)initWithName:(id)arg1 UUID:(id)arg2 entitlements:(id)arg3 appIdentifierName:(id)arg4 appIdentifierPrefixes:(id)arg5 teamName:(id)arg6 teamIdentifierPrefixes:(id)arg7 dateCreated:(id)arg8 dateExpired:(id)arg9 platforms:(id)arg10 supportedUDIDs:(id)arg11 certificates:(id)arg12 isUniversal:(BOOL)arg13 isAppleInternal:(BOOL)arg14;

@end

