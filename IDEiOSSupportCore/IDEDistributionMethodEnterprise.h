//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEDistributionMethodExport.h"

@class DVTPlatform;

@interface IDEDistributionMethodEnterprise : IDEDistributionMethodExport
{
}

- (id)summaryPaneNextButtonTitleOverride;
- (BOOL)supportsManifestDistribution;
- (id)requiredTeamTypes;
- (id)packagingStepIdentifier;
- (id)exportStepName;
- (unsigned long long)provisioningProfilePurpose;
- (id)provisioningProfilePlatform;
- (long long)wantsProvisioningProfiles;
- (id)installerCertificateKind;
- (id)certificateKind;
- (id)orderedDistributionStepClassNames;
- (id)subtitle;
- (id)shortTitle;
- (id)title;
- (id)commandLineName;
@property(readonly) DVTPlatform *supportedPlatform;
- (id)appStoreName;
- (_Bool)supportsDistributionOfArchive:(id)arg1;
- (double)sortOrder;

@end

