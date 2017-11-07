//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEProvisioningTeamSelectionDataSource-Protocol.h>
#import <IDEKit/IDEProvisioningTeamsDataSource-Protocol.h>

@class NSOrderedSet;
@protocol IDEProvisioningBasicTeam;

@interface _IDEDistributionManualSigningTeamDataSource : NSObject <IDEProvisioningTeamsDataSource, IDEProvisioningTeamSelectionDataSource>
{
    id <IDEProvisioningBasicTeam> _team;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isTeamSelectionRequired;
@property(readonly) NSOrderedSet *teams;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team;
- (id)initWithTeam:(id)arg1;

@end
