//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionProvisionable.h>

@class IDEProvisionableEntitlements;

@interface IDEDistributionItemProvisionable : IDEDistributionProvisionable
{
    IDEProvisionableEntitlements *_baseEntitlements;
}

- (void).cxx_destruct;
- (id)appIDFeaturesForConfigurationNamed:(id)arg1;
- (id)baseEntitlementsForConfigurationNamed:(id)arg1;
- (id)signingCertificateIdentifierForConfigurationNamed:(id)arg1;
- (id)bundleIdentifierForConfigurationNamed:(id)arg1;
- (long long)profileSupportForConfigurationNamed:(id)arg1;

@end

