//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTPortal/NSCopying-Protocol.h>

@class DVTExtension, DVTPortalProgram, NSString;

@interface DVTPortalCertificateType : NSObject <NSCopying>
{
    NSString *_installerCertificateIdentifier;
    BOOL _teamMemberSpecific;
    BOOL _supportsOneCertPerMac;
    BOOL _isInstallerCertificate;
    BOOL _primaryTypeForCertificateOID;
    BOOL _canBeUsedByMembers;
    BOOL _canBeUsedByAdmins;
    BOOL _canBeCreatedByFreeTeams;
    BOOL _canBeCreatedByEnterpriseTeams;
    BOOL _canBeCreatedByUniversityTeams;
    BOOL _canBeRevoked;
    BOOL _canBeRevokedByEnterpriseTeams;
    NSString *_name;
    DVTPortalProgram *_portalProgram;
    NSString *_certificateOID;
    NSString *_automaticSelector;
    NSString *_automaticSelectorDescription;
    DVTExtension *_extension;
    NSString *_distributionType;
    NSString *_distributionMethod;
    NSString *_listServiceIdentifier;
    NSString *_requestServiceIdentifier;
    NSString *_revokeServiceIdentifier;
    NSString *_listCSRServiceIdentifier;
    NSString *_keyNameFormat;
}

+ (id)_certificateTypeWithPlatformIdentifier:(id)arg1 distributionType:(id)arg2 andDistributionMethod:(id)arg3;
+ (id)certificateTypeForAutomaticSelector:(id)arg1;
+ (id)certificateTypeForOID:(id)arg1;
+ (id)_primaryTypeInTypes:(id)arg1;
+ (id)certificateTypeWithIdentifier:(id)arg1;
+ (id)certificateTypesForPortalProgram:(id)arg1;
+ (id)allCertificateTypes;
+ (id)_certificateTypeMap;
@property(readonly, nonatomic) BOOL canBeRevokedByEnterpriseTeams; // @synthesize canBeRevokedByEnterpriseTeams=_canBeRevokedByEnterpriseTeams;
@property(readonly, nonatomic) BOOL canBeRevoked; // @synthesize canBeRevoked=_canBeRevoked;
@property(readonly, nonatomic) BOOL canBeCreatedByUniversityTeams; // @synthesize canBeCreatedByUniversityTeams=_canBeCreatedByUniversityTeams;
@property(readonly, nonatomic) BOOL canBeCreatedByEnterpriseTeams; // @synthesize canBeCreatedByEnterpriseTeams=_canBeCreatedByEnterpriseTeams;
@property(readonly, nonatomic) BOOL canBeCreatedByFreeTeams; // @synthesize canBeCreatedByFreeTeams=_canBeCreatedByFreeTeams;
@property(readonly, nonatomic) BOOL canBeUsedByAdmins; // @synthesize canBeUsedByAdmins=_canBeUsedByAdmins;
@property(readonly, nonatomic) BOOL canBeUsedByMembers; // @synthesize canBeUsedByMembers=_canBeUsedByMembers;
@property(readonly, nonatomic) NSString *keyNameFormat; // @synthesize keyNameFormat=_keyNameFormat;
@property(readonly, nonatomic) NSString *listCSRServiceIdentifier; // @synthesize listCSRServiceIdentifier=_listCSRServiceIdentifier;
@property(readonly, nonatomic) NSString *revokeServiceIdentifier; // @synthesize revokeServiceIdentifier=_revokeServiceIdentifier;
@property(readonly, nonatomic) NSString *requestServiceIdentifier; // @synthesize requestServiceIdentifier=_requestServiceIdentifier;
@property(readonly, nonatomic) NSString *listServiceIdentifier; // @synthesize listServiceIdentifier=_listServiceIdentifier;
@property(readonly, nonatomic) NSString *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
@property(readonly, nonatomic) NSString *distributionType; // @synthesize distributionType=_distributionType;
@property(readonly, nonatomic, getter=isPrimaryTypeForCertificateOID) BOOL primaryTypeForCertificateOID; // @synthesize primaryTypeForCertificateOID=_primaryTypeForCertificateOID;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) NSString *automaticSelectorDescription; // @synthesize automaticSelectorDescription=_automaticSelectorDescription;
@property(readonly, nonatomic) NSString *automaticSelector; // @synthesize automaticSelector=_automaticSelector;
@property(readonly, nonatomic) BOOL isInstallerCertificate; // @synthesize isInstallerCertificate=_isInstallerCertificate;
@property(readonly, nonatomic) BOOL supportsOneCertPerMac; // @synthesize supportsOneCertPerMac=_supportsOneCertPerMac;
@property(readonly, nonatomic, getter=isTeamMemberSpecific) BOOL teamMemberSpecific; // @synthesize teamMemberSpecific=_teamMemberSpecific;
@property(readonly, nonatomic) NSString *certificateOID; // @synthesize certificateOID=_certificateOID;
@property(readonly, nonatomic) DVTPortalProgram *portalProgram; // @synthesize portalProgram=_portalProgram;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_keyNameForTeam:(id)arg1;
- (id)_listCSRServiceForTeam:(id)arg1;
- (id)_revokeServiceForCertificate:(id)arg1;
- (id)_requestServiceForTeam:(id)arg1 machineName:(id)arg2 machineID:(id)arg3 csr:(id)arg4;
- (id)_listServiceForTeam:(id)arg1;
@property(readonly, nonatomic) DVTPortalCertificateType *installerCertificateType;
@property(readonly, nonatomic) NSString *identifier;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_assertValidity;
- (_Bool)_isValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExtension:(id)arg1;
- (id)init;

@end

