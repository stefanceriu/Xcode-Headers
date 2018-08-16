//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <XCSUI/NSTableViewDataSource-Protocol.h>
#import <XCSUI/NSTableViewDelegate-Protocol.h>

@class DVTObservingToken, DVTTableView, NSArray, NSButton, NSMapTable, NSMenu, NSObject, NSScrollView, NSString, NSView, XCSUIBotDefinitionContext, XCSUIBotDefinition_SigningEditor;
@protocol OS_dispatch_semaphore;

@interface XCSUIBotDefinition_SigningTeamsViewController : DVTViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    DVTObservingToken *_teamsObserver;
    NSObject<OS_dispatch_semaphore> *_detailsRefresherSema;
    NSMapTable *_accountsByTeamID;
    unsigned long long _countOfDeveloperAccounts;
    NSMapTable *_developerAccounts;
    BOOL _hasTeams;
    XCSUIBotDefinition_SigningEditor *_signingEditor;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    CDUnknownBlockType _fetchTeamsCallback;
    DVTTableView *_tableView;
    NSScrollView *_scrollView;
    NSView *_teamsContainerView;
    NSButton *_manageCertsAndProfilesButton;
    NSButton *_addMissingDevicesToTeamsButton;
    NSArray *_teams;
    NSMenu *_teamCellContextMenu;
}

@property(retain) NSMenu *teamCellContextMenu; // @synthesize teamCellContextMenu=_teamCellContextMenu;
@property(copy, nonatomic) NSArray *teams; // @synthesize teams=_teams;
@property __weak NSButton *addMissingDevicesToTeamsButton; // @synthesize addMissingDevicesToTeamsButton=_addMissingDevicesToTeamsButton;
@property __weak NSButton *manageCertsAndProfilesButton; // @synthesize manageCertsAndProfilesButton=_manageCertsAndProfilesButton;
@property __weak NSView *teamsContainerView; // @synthesize teamsContainerView=_teamsContainerView;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property __weak DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) BOOL hasTeams; // @synthesize hasTeams=_hasTeams;
@property(copy, nonatomic) CDUnknownBlockType fetchTeamsCallback; // @synthesize fetchTeamsCallback=_fetchTeamsCallback;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
@property(nonatomic) __weak XCSUIBotDefinition_SigningEditor *signingEditor; // @synthesize signingEditor=_signingEditor;
- (void).cxx_destruct;
- (void)showError:(id)arg1;
- (void)reviewAgreement:(id)arg1;
- (void)removeTeam:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)joinTeam:(id)arg1;
- (void)signIn:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)showTeamsTable:(BOOL)arg1;
- (void)queryServiceForTeamID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)accountForTeam:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchAccountsForTeamsFinishedHandler:(CDUnknownBlockType)arg1;
- (id)accountForTeam:(id)arg1;
- (void)findTeamsInScheme;
- (id)schemeCommandsFromContext;
- (void)provisioningOptionHasChanged:(id)arg1;
- (void)updateOptions;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

