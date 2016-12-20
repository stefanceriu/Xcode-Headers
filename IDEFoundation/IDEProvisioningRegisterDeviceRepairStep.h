//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningRepairStep.h>

@class DVTPortalTeam;

@interface IDEProvisioningRegisterDeviceRepairStep : IDEProvisioningRepairStep
{
    id <DVTPortalDevice> _device;
    DVTPortalTeam *_team;
}

+ (id)createRegisterDeviceRepairStepWithDevice:(id)arg1 team:(id)arg2;
@property(readonly) DVTPortalTeam *team; // @synthesize team=_team;
@property(readonly) id <DVTPortalDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;
- (BOOL)handleExecutionWithContext:(id)arg1 ledgerEntry:(id)arg2 error:(id *)arg3;
- (BOOL)preflightWithContext:(id)arg1 error:(id *)arg2;
- (id)activityDescription;
- (id)stepDescription;
- (id)initWithDevice:(id)arg1 team:(id)arg2;

@end

