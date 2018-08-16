//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUIDataSource/XCSServiceConnectionDelegate-Protocol.h>
#import <XCSUIDataSource/XCSUIDataSourceSnapshotsObserver-Protocol.h>
#import <XCSUIDataSource/XCSUIServicesManagerDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTDispatchLock, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableSet, NSString, XCSUIBotStatsCache, XCSUIBotsCache, XCSUIBuildAgentsCache, XCSUIBuildQueuesCache, XCSUIDataSourceOperator, XCSUIDataSourceQueueManager, XCSUIIntegrationStatusesCache, XCSUIIntegrationsCache, XCSUIIssuesStreaksCache, XCSUIServicesCache, XCSUIServicesManager, XCSUIVersionInfosCache;

@interface XCSUIDataSource : NSObject <XCSUIDataSourceSnapshotsObserver, XCSUIServicesManagerDelegate, XCSServiceConnectionDelegate>
{
    XCSUIServicesCache *_servicesCache;
    XCSUIBotsCache *_botsCache;
    XCSUIIntegrationsCache *_integrationsCache;
    XCSUIIntegrationStatusesCache *_statusesCache;
    XCSUIVersionInfosCache *_versionInfosCache;
    XCSUIBuildQueuesCache *_buildQueuesCache;
    XCSUIIssuesStreaksCache *_issuesStreaksCache;
    XCSUIBotStatsCache *_botStatsCache;
    XCSUIBuildAgentsCache *_buildAgentsCache;
    NSMutableSet *_observers;
    XCSUIDataSourceOperator *_operator;
    XCSUIServicesManager *_servicesManager;
    NSMutableArray *_integrationsWatchedByUser;
    id _networkMonitorToken;
    NSMapTable *_listenerTokensByService;
    NSMutableArray *_servicesStateAffectingObservingTokens;
    DVTDelayedInvocation *_availableStateChangeDelayedInvocation;
    NSMutableSet *_servicesWithPendingAvailableStateChanges;
    DVTDispatchLock *_servicesWithPendingAvailableStateChangesLock;
    BOOL _shouldFetchIssuesStreaks;
    unsigned long long _numberOfIntegrationsToFetch;
    DVTDispatchLock *_lock;
    XCSUIDataSourceQueueManager *_queueManager;
    NSDate *_overrideLastWeekAgoDateForTesting;
}

+ (BOOL)_addLoadMoreIntegration;
+ (BOOL)isInitialized;
+ (id)shared;
@property(retain, nonatomic) NSDate *overrideLastWeekAgoDateForTesting; // @synthesize overrideLastWeekAgoDateForTesting=_overrideLastWeekAgoDateForTesting;
@property(retain, nonatomic) XCSUIDataSourceQueueManager *queueManager; // @synthesize queueManager=_queueManager;
@property(retain) DVTDispatchLock *lock; // @synthesize lock=_lock;
@property unsigned long long numberOfIntegrationsToFetch; // @synthesize numberOfIntegrationsToFetch=_numberOfIntegrationsToFetch;
@property(nonatomic) BOOL shouldFetchIssuesStreaks; // @synthesize shouldFetchIssuesStreaks=_shouldFetchIssuesStreaks;
- (void).cxx_destruct;
- (id)_dumpSnapshots;
- (void)forgetWhenWatchedIntegrationFinishes:(id)arg1;
- (BOOL)shouldNotifyWhenWatchedIntegrationFinishes:(id)arg1;
- (void)notifyWhenWatchedIntegrationFinishes:(id)arg1;
- (void)refreshACLCacheForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateCache;
- (void)setEnabled:(BOOL)arg1 forService:(id)arg2;
- (void)deactivateService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resetAccounts;
- (void)activateService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addAccountForConnectionAddress:(id)arg1 withUserName:(id)arg2 password:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addAccountForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addAccountForService:(id)arg1 username:(id)arg2 password:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)reloadService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)canUserCreateBotOnService:(id)arg1;
- (BOOL)canUserEditBotOnService:(id)arg1;
- (BOOL)canUserViewBotsOnService:(id)arg1;
- (id)versionInfoSnapshotForBot:(id)arg1;
- (id)versionInfoSnapshotForService:(id)arg1;
- (id)_versionInfoSnapshotForServiceID:(id)arg1;
- (void)cacheVersionInfo:(id)arg1;
- (void)_schedulePlatformsOperation:(id)arg1 versionInfo:(id)arg2;
- (void)_buildVersionInfoForService:(id)arg1;
- (void)_fireVersionInfoSnapshotsChangedCallbacks:(id)arg1;
- (id)statusSnapshotForIntegrationID:(id)arg1 botID:(id)arg2 service:(id)arg3;
- (id)statusSnapshotForIntegration:(id)arg1;
- (id)statusSnapshotForIntegrationSnapshot:(id)arg1;
- (id)runningIntegrationForBot:(id)arg1;
- (id)newestCompletedIntegrationForBot:(id)arg1;
- (id)integrationSnapshotsForBot:(id)arg1;
- (void)dataSource:(id)arg1 botSnapshotsChanged:(id)arg2 wasRemoved:(BOOL)arg3;
- (void)_fetchLastIntegrationsForBot:(id)arg1;
- (void)_processFetchedIntegrations:(id)arg1 requestCount:(unsigned long long)arg2 botSnapshot:(id)arg3;
- (BOOL)canFetchDataForService:(id)arg1;
- (void)populateCachesForService:(id)arg1;
- (void)_fireBuildAgentSnapshotsChangedCallback:(id)arg1;
- (void)_fireBuildQueueSnapshotsChangedCallback:(id)arg1;
- (void)_postxcsuidatasource_botDefinitionChanged:(id)arg1 onService:(id)arg2;
- (void)_postxcsuidatasource_aclUpdateForService:(id)arg1;
- (void)_postIntegrationFinishedMessage:(id)arg1;
- (void)_fireStepChangedStatusSnapshotsChangedCallback:(id)arg1 serviceSnapshot:(id)arg2 botSnapshot:(id)arg3 integrationSnapshot:(id)arg4;
- (void)_fireAdvisoryStatusSnapshotsChangedCallback:(id)arg1 serviceSnapshot:(id)arg2 botSnapshot:(id)arg3 integrationSnapshot:(id)arg4;
- (void)_fireIntegrationSnapshotsChangedCallback:(id)arg1;
- (void)_fireBotStatsChangedCallback:(id)arg1 bot:(id)arg2;
- (void)_fireBotSnapshotsChangedCallback:(id)arg1 wasRemoved:(BOOL)arg2;
- (void)_notifyObservers_accountWasDisabledForService:(id)arg1;
- (void)_notifyObservers_accountWasEnabledForService:(id)arg1;
- (void)_notifyObservers_didFinishInitialLoadForService:(id)arg1;
- (void)_notifyObservers_accountWasRemovedForService:(id)arg1;
- (void)_notifyObservers_accountWasAddedForService:(id)arg1;
- (void)removeSnapshotsObserver:(id)arg1;
- (void)addSnapshotsObserver:(id)arg1;
- (void)issuesForIntegrationID:(id)arg1 serviceID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)issuesStreakForBot:(id)arg1;
- (void)_buildIssuesStreakForBot:(id)arg1;
- (id)buildQueueIntegrationsForBot:(id)arg1;
- (id)buildQueueIntegrationsForServiceIdentifier:(id)arg1;
- (void)_updateBuildQueueSnapshotForService:(id)arg1;
- (id)primaryBuildAgentForService:(id)arg1;
- (void)_updateBuildAgentsForService:(id)arg1;
- (void)serviceConnectionStatusDidDisconnect:(id)arg1;
- (void)serviceConnectionStatusDidConnect:(id)arg1;
- (void)_removeService:(id)arg1;
- (void)_populateCachesAndListenToEventsOn:(id)arg1;
- (void)_purgeCachesForService:(id)arg1;
- (void)_addListenersForService:(id)arg1;
- (void)_removeListenersForService:(id)arg1;
- (void)_purgeIntegrationStatusSnapshot:(id)arg1;
- (void)_buildIntegrationStatusSnapshotForIntegration:(id)arg1;
- (void)_buildStatusSnapshotForStepChangeInIntegration:(id)arg1 botID:(id)arg2 onService:(id)arg3 step:(long long)arg4 result:(long long)arg5;
- (void)_buildStatusSnapshotForAdvisoryEventInIntegration:(id)arg1 botID:(id)arg2 onService:(id)arg3 message:(id)arg4 percentage:(double)arg5;
@property(readonly, nonatomic) NSArray *integrationStatusSnapshots;
- (id)integrationSnapshotForIntegrationID:(id)arg1 botID:(id)arg2 onService:(id)arg3;
- (void)fetchIntegrationSnapshotForIntegrationID:(id)arg1 botID:(id)arg2 onService:(id)arg3 notifyClients:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchIntegrationWithID:(id)arg1 onService:(id)arg2 notifyClients:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)integrationSnapshotForIntegration:(id)arg1;
- (void)_purgeSnapshotForIntegrationID:(id)arg1 botID:(id)arg2 onService:(id)arg3;
- (id)cachedIntegrationSnapshotForKey:(id)arg1;
- (void)_buildIntegrationSnapshotForIntegrationID:(id)arg1 botID:(id)arg2 onService:(id)arg3 andNotify:(BOOL)arg4;
- (void)_removeIntegrationSnapshot:(id)arg1;
- (void)_addIntegrationSnapshot:(id)arg1;
- (id)integrationCacheKeyForIntegrationID:(id)arg1 botID:(id)arg2 service:(id)arg3;
- (id)integrationCacheKeyForSnapshot:(id)arg1;
- (void)populateIntegrations:(unsigned long long)arg1 forBot:(id)arg2 onService:(id)arg3 lookingForIntegrationID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)loadMoreIntegrationsForBot:(id)arg1 factor:(double)arg2;
- (void)loadMoreIntegrations:(id)arg1 factor:(double)arg2;
- (void)loadMoreItem:(id)arg1 factor:(double)arg2;
- (BOOL)isLoadMoreItem:(id)arg1;
@property(readonly, nonatomic) NSArray *integrationSnapshots;
- (void)_fetchTestResultChangesInLastWeekForBot:(id)arg1;
- (id)dateOneWeekAgoForFetchingTestResultChanges;
- (void)overrideLastWeekAgoDateForTesting:(id)arg1;
- (id)testsAddedForBot:(id)arg1;
- (id)coverageChangeForBot:(id)arg1;
- (void)_purgeSnapshotForBotID:(id)arg1 onService:(id)arg2;
- (id)cachedBotSnapshotForKey:(id)arg1;
- (id)botCacheKeyForBotID:(id)arg1 onService:(id)arg2;
- (id)botCacheKeyForSnapshot:(id)arg1;
- (void)_buildBotSnapshotForBotID:(id)arg1 onService:(id)arg2 andNotify:(BOOL)arg3;
- (id)botSnapshotForBotID:(id)arg1 onService:(id)arg2;
- (id)botSnapshotsForService:(id)arg1;
- (id)botForIntegration:(id)arg1;
@property(readonly, nonatomic) NSArray *botSnapshots;
- (void)_removeBotSnapshot:(id)arg1;
- (void)_addBotSnapshot:(id)arg1;
- (id)serviceSnapshotForCanonicalName:(id)arg1;
- (id)serviceSnapshotForMatchingNetServiceName:(id)arg1;
- (id)serviceSnapshotForConnectionAddress:(id)arg1;
- (id)serviceSnapshotForServiceID:(id)arg1;
- (void)removeAccountForService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)serviceSnapshotForService:(id)arg1;
- (void)_cacheService:(id)arg1;
@property(readonly, nonatomic) NSArray *serviceSnapshots;
- (id)availabilityDescriptionForState:(unsigned long long)arg1;
- (void)availabilityStateChangedForService:(id)arg1;
- (void)servicesManager:(id)arg1 serviceWasRemoved:(id)arg2;
- (void)servicesManager:(id)arg1 serviceWasAdded:(id)arg2;
- (void)servicesManager:(id)arg1 didReloadService:(id)arg2 error:(id)arg3;
- (void)_observeAvailabilityStateAffectingPropertiesOfService:(id)arg1;
- (void)_scheduleAvailabilityUpdateForService:(id)arg1;
- (id)servicesManager;
- (void)cancelOperations;
- (void)invalidate;
- (id)initForTesting:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
