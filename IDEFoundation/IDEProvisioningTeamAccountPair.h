//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDeveloperAccount, DVTPortalTeam;

@interface IDEProvisioningTeamAccountPair : NSObject
{
    DVTPortalTeam *_team;
    DVTDeveloperAccount *_account;
}

@property(readonly, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
- (void).cxx_destruct;
- (id)initWithTeam:(id)arg1 account:(id)arg2;

@end

