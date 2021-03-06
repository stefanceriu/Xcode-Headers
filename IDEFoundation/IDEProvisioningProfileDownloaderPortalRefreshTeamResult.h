//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError;
@protocol IDEProvisioningBasicTeam;

@interface IDEProvisioningProfileDownloaderPortalRefreshTeamResult : NSObject
{
    id <IDEProvisioningBasicTeam> _team;
    NSArray *_profiles;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
- (void).cxx_destruct;
- (id)initWithTeam:(id)arg1 profiles:(id)arg2;
- (id)initWithTeam:(id)arg1 error:(id)arg2;

@end

