//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTDispatchLock, DVTFilePath, DVTNotificationToken, DVTObservingToken, DVTSourceControlWorkspace, DVTSourceControlWorkspaceBlueprint, DVTStackBacktrace, DVTTimeSlicedMainThreadWorkQueue, IDEContainerQuery, IDESourceControlManager, IDESourceControlRequest, IDEWorkspace, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface IDESourceControlWorkspaceMonitor : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    IDEContainerQuery *_query;
    DVTTimeSlicedMainThreadWorkQueue *_fileReferenceProcessingQueue;
    NSMutableDictionary *_workspaceSCMInfo;
    NSMutableSet *_workspaceFolders;
    NSObject<OS_dispatch_queue> *_scanningQueue;
    BOOL _resumedScanningQueue;
    NSDate *_startDate;
    NSMutableSet *_repositoriesWarnedAreNewer;
    NSObject<OS_dispatch_queue> *_cachedBlueprintQueue;
    NSMutableSet *_workingCopies;
    NSMutableArray *_workingCopiesNeedingUpgrade;
    NSMutableArray *_workingTrees;
    DVTDispatchLock *_workingTreesLock;
    NSMutableSet *_workingTreeBranchTokens;
    DVTDispatchLock *_workingTreeBranchTokensLock;
    DVTObservingToken *_containerQueryMatchesObserver;
    NSOperationQueue *_scmFileEventQueue;
    IDESourceControlRequest *_sourceControlInfoRequest;
    NSString *_developerFolderPathString;
    unsigned long long _workingTreesCount;
    DVTDispatchLock *_derivedDataLock;
    DVTFilePath *_derivedDataFilePath;
    DVTObservingToken *_deriviedDataObservationToken;
    DVTFilePath *_intermediatesFilePath;
    DVTObservingToken *_intermediatesObservationToken;
    DVTFilePath *_productsFilePath;
    DVTObservingToken *_productsObservationToken;
    DVTFilePath *_clonedSourcePackagesFilePath;
    DVTObservingToken *_clonedSourcePackagesObservationToken;
    DVTNotificationToken *_sourceControlEnabledToken;
    DVTNotificationToken *_metadataUpdatedNotificationToken;
    NSMutableDictionary *_workingCopiesLastModified;
    long long _fetchFileStatusQueueLockCount;
    NSOperationQueue *_fetchFileStatusQueue;
    NSMutableDictionary *_workingCopyRemotesFetchingDisabled;
    NSMutableDictionary *_workingCopyObservers;
    BOOL _localStatusCheckingEnabled;
    BOOL _remoteStatusCheckingEnabled;
    id _rootItem;
    DVTSourceControlWorkspace *_sourceControlWorkspace;
    DVTSourceControlWorkspaceBlueprint *_cachedBlueprint;
    double _serverStatusUpdateInterval;
    unsigned long long _state;
    IDESourceControlManager *_sourceControlManager;
    NSTimer *_statusUpdateTimer;
}

+ (id)keyPathsForValuesAffectingDidScanWorkspace;
+ (id)keyPathsForValuesAffectingIsPerformingInitialWorkspaceScan;
+ (void)initialize;
+ (void)setRootItemBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)rootItemBlock;
@property(retain) NSTimer *statusUpdateTimer; // @synthesize statusUpdateTimer=_statusUpdateTimer;
@property(retain) IDESourceControlManager *sourceControlManager; // @synthesize sourceControlManager=_sourceControlManager;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property unsigned long long state; // @synthesize state=_state;
@property(nonatomic) BOOL remoteStatusCheckingEnabled; // @synthesize remoteStatusCheckingEnabled=_remoteStatusCheckingEnabled;
@property(nonatomic) BOOL localStatusCheckingEnabled; // @synthesize localStatusCheckingEnabled=_localStatusCheckingEnabled;
@property double serverStatusUpdateInterval; // @synthesize serverStatusUpdateInterval=_serverStatusUpdateInterval;
@property(retain) DVTSourceControlWorkspaceBlueprint *cachedBlueprint; // @synthesize cachedBlueprint=_cachedBlueprint;
@property(retain) DVTSourceControlWorkspace *sourceControlWorkspace; // @synthesize sourceControlWorkspace=_sourceControlWorkspace;
@property(retain) id rootItem; // @synthesize rootItem=_rootItem;
- (void).cxx_destruct;
- (id)rootDirectoryOfAllWorkingCopies;
- (void)checkForMissingCheckouts;
- (void)writeSCMInfoToWorkspace;
- (void)saveSCMInfo;
- (id)getSCMInfoObjectforKey:(id)arg1;
- (void)setSCMInfoObject:(id)arg1 forSCMKey:(id)arg2;
- (void)setSuppressMissingCheckoutsAlert:(BOOL)arg1;
- (BOOL)suppressMissingCheckoutsAlert;
- (BOOL)_saveWorkspaceSCMInfo;
- (id)_loadWorkspaceSCMInfo;
- (id)_SCMInfoFilePath;
- (void)unblockFetchingFilesAndStatus;
- (void)blockFetchingFilesAndStatus;
@property(readonly) NSOperationQueue *fetchFileStatusQueue;
- (void)_updateLocalStatusForWorkingTreesWithForce:(BOOL)arg1 modifiedSinceDate:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)forceUpdateLocalStatusForWorkingTreesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateLocalStatusForWorkingTreesModifiedSinceDate:(id)arg1;
- (void)forceUpdateLocalStatusForWorkingTrees;
- (void)updateLocalStatusForWorkingTrees;
- (void)_updateCurrentBranchForWorkingTreesModifiedSinceDate:(id)arg1;
- (void)_updateServerStatusForWorkingTreesWithForce:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_fetchFromWorkingCopiesWithForce:(BOOL)arg1 authenticationContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_disableRemote:(id)arg1 fromWorkingCopy:(id)arg2;
- (void)fetchAndUpdateServerStatusForWorkingTreesWithAuthenticationContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)forceUpdateServerStatusForWorkingTreesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchAndUpdateServerStatusForWorkingCopies;
- (void)endPeriodicServerStatusUpdates;
- (void)beginPeriodicServerStatusUpdates;
- (void)endObservingWorkingTree:(id)arg1;
- (void)beginObservingWorkingTree:(id)arg1;
- (BOOL)isBlacklistedPath:(id)arg1;
- (void)removeWorkingCopyObserver:(id)arg1;
- (void)addWorkingCopyObserver:(id)arg1 forPath:(id)arg2;
- (void)updateWorkingCopyLocations;
- (void)_scanBatchFinished;
- (void)_updatePrimaryWorkingCopyInSourceControlWorkspace:(id)arg1 forWorkspace:(id)arg2;
- (void)endObservingWorkingTrees;
- (void)beginObservingWorkingTrees;
- (void)_updateWorkingCopyMetadata:(id)arg1;
- (void)_updateAllWorkingCopyMetadata;
- (void)startScanningWorkspace:(id)arg1;
- (void)warnToCommitBefore:(id)arg1 warnedBy:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setSuppressCommitAlert:(BOOL)arg1;
- (void)_startScanningWorkspace:(id)arg1;
- (void)_processFileReference:(id)arg1;
- (void)upgradedWorkingCopy:(id)arg1;
- (void)scanForWorkingCopyInFilePath:(id)arg1;
- (void)addWorkspaceFilePathToCheck:(id)arg1;
- (void)_scanWorkspaceFolders:(BOOL)arg1;
- (void)_requestScanWorkspaceFolders;
- (BOOL)_filePathIsInDerivedDataFolder:(id)arg1;
@property(readonly) BOOL didScanWorkspace;
@property(readonly) BOOL isPerformingInitialWorkspaceScan;
- (void)addWorkingTree:(id)arg1;
- (void)_sortWorkingCopies;
- (id)workingTreeForWorkingCopy:(id)arg1;
@property(readonly) NSArray *workingCopies;
@property(readonly) NSArray *unmanagedWorkingTrees;
@property(readonly) NSArray *workingTrees;
@property(readonly) NSArray *workingCopiesNeedingUpgrade;
- (void)primitiveInvalidate;
- (void)_disableSourceControlMonitor;
- (id)initWithSCMManager:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

