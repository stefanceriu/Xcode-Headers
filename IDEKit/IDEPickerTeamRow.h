//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEAccountTeamPickerRowBase.h>

@class NSString;

@interface IDEPickerTeamRow : IDEAccountTeamPickerRowBase
{
    BOOL _wantsCheckbox;
    id <IDEProvisioningTeam> _team;
    NSString *_teamName;
}

@property(nonatomic) BOOL wantsCheckbox; // @synthesize wantsCheckbox=_wantsCheckbox;
@property(retain, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(retain, nonatomic) id <IDEProvisioningTeam> team; // @synthesize team=_team;
- (void).cxx_destruct;

@end

