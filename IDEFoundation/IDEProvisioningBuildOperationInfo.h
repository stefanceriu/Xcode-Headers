//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDEProvisioningBuildOperationInfo : NSObject
{
    NSMutableSet *_automaticallyAuthorizedUserActionNames;
    BOOL _allowProvisioningRepairs;
}

@property BOOL allowProvisioningRepairs; // @synthesize allowProvisioningRepairs=_allowProvisioningRepairs;
- (void).cxx_destruct;
- (void)automaticallyAuthorizeUserActionsNamed:(id)arg1;
- (BOOL)shouldAutomaticallyAuthorizeUserActionNamed:(id)arg1;
- (id)init;

@end

