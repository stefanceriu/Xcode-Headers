//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IDEProvisioningRepair, IDEProvisioningUserAction, NSError, NSString;

@protocol IDEProvisioningRepairDelegate
- (void)repair:(IDEProvisioningRepair *)arg1 didFinishUserAction:(IDEProvisioningUserAction *)arg2;
- (void)repairUserActionDidBegin:(IDEProvisioningRepair *)arg1;
- (void)repair:(IDEProvisioningRepair *)arg1 userAction:(IDEProvisioningUserAction *)arg2 didFailWithError:(NSError *)arg3;
- (void)repair:(IDEProvisioningRepair *)arg1 userActionWasAuthorized:(IDEProvisioningUserAction *)arg2;
- (void)repair:(IDEProvisioningRepair *)arg1 requiresUserAction:(IDEProvisioningUserAction *)arg2;
- (void)repair:(IDEProvisioningRepair *)arg1 didFailWithError:(NSError *)arg2;
- (void)repairDidFinish:(IDEProvisioningRepair *)arg1;
- (void)repair:(IDEProvisioningRepair *)arg1 isExecutingStep:(NSString *)arg2;
- (void)repairDidBegin:(IDEProvisioningRepair *)arg1;
@end

