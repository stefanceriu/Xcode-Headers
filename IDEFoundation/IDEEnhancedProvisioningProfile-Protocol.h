//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEProvisioningProfile.h"

@class IDEPortalProfileWrapper;

@protocol IDEEnhancedProvisioningProfile <IDEProvisioningProfile>
@property(readonly, nonatomic) IDEPortalProfileWrapper *portalProfileWrapper;
@property(readonly, nonatomic) id <IDEProvisioningLocalProfileState> localState;
@property(readonly, nonatomic) unsigned long long state;
- (BOOL)isEqualToEnhancedProfile:(id <IDEEnhancedProvisioningProfile>)arg1;
@end

