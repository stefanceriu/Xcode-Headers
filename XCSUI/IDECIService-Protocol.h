//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/IDECIModelObject-Protocol.h>

@class IDEWorkspace, NSArray, NSString, NSURL;

@protocol IDECIService <IDECIModelObject>
@property(readonly, nonatomic) long long progressValue;
@property(retain, nonatomic) IDEWorkspace *filterToWorkspace;
@property(readonly, nonatomic) long long accountReachability;
@property(readonly, copy, nonatomic) NSString *toolTip;
@property(readonly, nonatomic) BOOL isConnected;
@property(readonly, nonatomic) BOOL hasConnectionError;
@property(readonly, nonatomic) BOOL loggedInUserCanViewBots;
@property(readonly, nonatomic) BOOL isPerformingMaintenanceTask;
@property(readonly, nonatomic) BOOL enabled;
@property(readonly, nonatomic) NSURL *ide_URL;
@property(readonly, nonatomic) NSString *lastCreatedBotID;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *workspaceFilteredBots;
@property(readonly, nonatomic) NSArray *allBots;
- (NSArray *)currentChildItems;
@end

