//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@class NSString;

@interface XCSCreateServiceUsersOperation : XCSInitializationOperation
{
    NSString *_buildServiceUsername;
}

@property(retain, nonatomic) NSString *buildServiceUsername; // @synthesize buildServiceUsername=_buildServiceUsername;
- (void).cxx_destruct;
- (void)undo;
- (id)undoStatusDescription;
- (void)run;
- (id)allUsersIncludingBuildServiceUser;
- (id)buildServiceUser;
- (id)statusDescription;

@end

