//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

@class NSButton, NSPopUpButton, NSProgressIndicator, NSTextField, XCSBot, XCSUIBotSummaryStatsFetcher, XCSUIStatusBadge, XCSUIStatusBadgesView;

@interface XCSUIBotSummaryStatusAndIssueCountsViewController : DVTViewController
{
    XCSUIStatusBadge *_totalIntegrationsBadge;
    XCSUIStatusBadge *_successRateBadge;
    XCSUIStatusBadge *_commitsBadge;
    XCSUIStatusBadge *_newTestsBadge;
    XCSUIStatusBadge *_coverageDeltaBadge;
    XCSUIBotSummaryStatsFetcher *_statsFetcher;
    XCSBot *_bot;
    NSTextField *_scheduleLabel;
    NSTextField *_cleanLabel;
    NSTextField *_lastIntegrationDateLabel;
    NSTextField *_latestStatusLabel;
    NSTextField *_lastSucceededLabel;
    NSButton *_botDetailsButton;
    XCSUIStatusBadgesView *_issuesBadgeView;
    NSPopUpButton *_statsTimePeriodPopUpButton;
    NSProgressIndicator *_statsLoadingProgressView;
}

@property __weak NSProgressIndicator *statsLoadingProgressView; // @synthesize statsLoadingProgressView=_statsLoadingProgressView;
@property __weak NSPopUpButton *statsTimePeriodPopUpButton; // @synthesize statsTimePeriodPopUpButton=_statsTimePeriodPopUpButton;
@property __weak XCSUIStatusBadgesView *issuesBadgeView; // @synthesize issuesBadgeView=_issuesBadgeView;
@property __weak NSButton *botDetailsButton; // @synthesize botDetailsButton=_botDetailsButton;
@property __weak NSTextField *lastSucceededLabel; // @synthesize lastSucceededLabel=_lastSucceededLabel;
@property __weak NSTextField *latestStatusLabel; // @synthesize latestStatusLabel=_latestStatusLabel;
@property __weak NSTextField *lastIntegrationDateLabel; // @synthesize lastIntegrationDateLabel=_lastIntegrationDateLabel;
@property __weak NSTextField *cleanLabel; // @synthesize cleanLabel=_cleanLabel;
@property __weak NSTextField *scheduleLabel; // @synthesize scheduleLabel=_scheduleLabel;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
- (void).cxx_destruct;
- (void)copyBotID:(id)arg1;
- (void)toggleBotID:(id)arg1;
- (id)botTitleString;
- (void)statsTimePeriodPopupChanged:(id)arg1;
- (void)fetchStatsSinceDate:(id)arg1;
- (void)_updateBotStatsBadgesWithStats:(id)arg1;
- (void)refreshUI;
- (void)primitiveInvalidate;
- (void)loadView;

@end

