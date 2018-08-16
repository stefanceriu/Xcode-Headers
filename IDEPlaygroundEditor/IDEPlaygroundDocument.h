//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/IDESourceCodeDocument.h>

#import <IDEPlaygroundEditor/IDEPlaygroundExecutionDeviceViewContentReceiver-Protocol.h>
#import <IDEPlaygroundEditor/IDEPlaygroundExecutionSessionDelegate-Protocol.h>
#import <IDEPlaygroundEditor/IDEPlaygroundHostingDocument-Protocol.h>
#import <IDEPlaygroundEditor/IDEToyboxDelegate-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, IDEPlaygroundExecutionSession, IDEPlaygroundPageSharedContext, IDEPlaygroundPreparationParametersWrapper, IDEPlaygroundSharedContext, IDEToybox, NSArray, NSDictionary, NSError, NSHashTable, NSMutableArray, NSString, NSURL, NSUUID;

@interface IDEPlaygroundDocument : IDESourceCodeDocument <IDEPlaygroundExecutionSessionDelegate, IDEToyboxDelegate, IDEPlaygroundExecutionDeviceViewContentReceiver, IDEPlaygroundHostingDocument>
{
    NSMutableArray *_cachedSourceCodeSections;
    NSMutableArray *_consoleItems;
    unsigned long long _playgroundResultsGeneration;
    DVTNotificationToken *_sectionCharactersDidChangeNotificationObserver;
    DVTNotificationToken *_contextPrepareForPageMigrationNotificationObserver;
    DVTNotificationToken *_resourceSymlinkManagerDidSymlinkResourcesNotificationToken;
    DVTNotificationToken *_auxiliarySourceCompilationManagerWillBeginCompilationNotificationToken;
    DVTNotificationToken *_auxiliarySourceCompilationManagerDidCancelCompilationNotificationToken;
    DVTNotificationToken *_auxiliarySourceCompilationManagerDidCompleteCompilationNotificationToken;
    DVTNotificationToken *_playgroundContextPagesDirectoryChangedNotificationToken;
    DVTNotificationToken *_playgroundContextResourcesDirectoryChangedNotificationToken;
    DVTNotificationToken *_playgroundContextSourcesDirectoryChangedNotificationToken;
    DVTObservingToken *_playgroundContextDisplayModeObservingToken;
    DVTObservingToken *_playgroundContextPageContextsObservingToken;
    DVTObservingToken *_playgroundContextTimelineScrubberEnabledToken;
    DVTObservingToken *_deviceServiceStateObservingToken;
    BOOL _isReadingFromURL;
    BOOL _isWritingToURL;
    BOOL _isResettingWholeDocument;
    BOOL _userHadDiagnosticsEnabled;
    BOOL _auxiliarySourceCompilationInProgress;
    BOOL _playgroundExpressionIsComplete;
    BOOL _executeWhenSessionIsReady;
    BOOL _executionSessionSetupFailed;
    BOOL _ignoreExecutionErrors;
    NSHashTable *_registeredEditors;
    BOOL _lastExpressionDidComplete;
    BOOL _resourcesUpdated;
    BOOL _isCommittingStateToDictionary;
    BOOL _isRevertingStateWithDictionary;
    NSArray *_playgroundSections;
    NSArray *_executionIssues;
    IDEToybox *_toybox;
    unsigned long long _executionState;
    IDEPlaygroundPreparationParametersWrapper *_preparationParametersWrapper;
    IDEPlaygroundExecutionSession *_executionSession;
    NSArray *_sourceCodePlaygroundSectionCharacterRanges;
    NSURL *_originalContentURLDuringSaving;
    NSArray *_auxiliarySourceFrameworks;
    NSUUID *_currentUUID;
    IDEPlaygroundSharedContext *_playgroundContext;
    NSString *_originalSwiftContents;
    NSError *_nonFatalReadError;
}

+ (id)keyPathsForValuesAffectingBuildSettings;
+ (id)keyPathsForValuesAffectingPlaygroundPageContext;
+ (id)directoryForPlaygroundAppConstructionWithAppUniquingString:(id *)arg1 error:(id *)arg2;
+ (id)keyPathsForValuesAffectingAllowsReset;
+ (id)keyPathsForValuesAffectingSourceCodePlaygroundSectionCharacterRanges;
+ (id)keyPathsForValuesAffectingSourceCodePlaygroundSections;
+ (id)playgroundDocumentContainingFilePath:(id)arg1;
+ (void)initialize;
+ (id)availablePlaygroundSectionClasses;
+ (id)keyPathsForValuesAffectingTimelineScrubberEnabled;
+ (id)keyPathsForValuesAffectingRenderDocumentationForInspector;
+ (id)keyPathsForValuesAffectingShowRenderDocumentationChoice;
+ (id)keyPathsForValuesAffectingSDK;
@property BOOL isRevertingStateWithDictionary; // @synthesize isRevertingStateWithDictionary=_isRevertingStateWithDictionary;
@property BOOL isCommittingStateToDictionary; // @synthesize isCommittingStateToDictionary=_isCommittingStateToDictionary;
@property(retain) NSError *nonFatalReadError; // @synthesize nonFatalReadError=_nonFatalReadError;
@property(copy) NSString *originalSwiftContents; // @synthesize originalSwiftContents=_originalSwiftContents;
@property(readonly) IDEPlaygroundSharedContext *playgroundContext; // @synthesize playgroundContext=_playgroundContext;
@property(readonly, copy) NSUUID *currentUUID; // @synthesize currentUUID=_currentUUID;
@property BOOL resourcesUpdated; // @synthesize resourcesUpdated=_resourcesUpdated;
@property(copy, nonatomic) NSArray *auxiliarySourceFrameworks; // @synthesize auxiliarySourceFrameworks=_auxiliarySourceFrameworks;
@property(copy, nonatomic) NSURL *originalContentURLDuringSaving; // @synthesize originalContentURLDuringSaving=_originalContentURLDuringSaving;
@property(copy, nonatomic) NSArray *sourceCodePlaygroundSectionCharacterRanges; // @synthesize sourceCodePlaygroundSectionCharacterRanges=_sourceCodePlaygroundSectionCharacterRanges;
@property(retain) IDEPlaygroundExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
@property(retain) IDEPlaygroundPreparationParametersWrapper *preparationParametersWrapper; // @synthesize preparationParametersWrapper=_preparationParametersWrapper;
@property BOOL lastExpressionDidComplete; // @synthesize lastExpressionDidComplete=_lastExpressionDidComplete;
@property unsigned long long executionState; // @synthesize executionState=_executionState;
@property(readonly) IDEToybox *toybox; // @synthesize toybox=_toybox;
@property(copy, nonatomic) NSArray *executionIssues; // @synthesize executionIssues=_executionIssues;
@property(copy, nonatomic) NSArray *playgroundSections; // @synthesize playgroundSections=_playgroundSections;
- (void).cxx_destruct;
- (void)viewContentProvider:(id)arg1 didUpdateIOSurfaceID:(unsigned int)arg2 screenSize:(struct CGSize)arg3;
- (void)configureViewContentHandlerForDeviceService:(id)arg1;
- (void)configureInputEventHandlerForDeviceService:(id)arg1;
- (BOOL)dvt_shouldShowDocumentDirtyState;
- (id)willPresentError:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_updateFileModificationDate;
- (void)_prepareForPageCreationWithCompletion:(CDUnknownBlockType)arg1;
- (struct _NSRange)characterRangeFromDocumentLocation:(id)arg1;
- (id)indexCompatibleLocationFromLocation:(id)arg1;
- (id)editorCompatibleLocationFromLocation:(id)arg1;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)editorDocumentWillClose;
- (id)fileWrapperForToybox;
- (id)fileWrappersForPlaygroundContents;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (id)contentPathsToPreserveOnSave;
- (id)originalSingleFileContentsFromFileWrapper:(id)arg1 withCurrentSingleFileContents:(id)arg2 error:(id *)arg3;
- (id)singleFileContentsFromFileWrapper:(id)arg1 error:(id *)arg2;
- (id)playgroundSectionsFromPlaygroundContents:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)playgroundSectionsFromFileWrapper:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (BOOL)validatePlaygroundFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)registerPlaygroundContextObservers;
- (void)registerNotificationTokens;
- (void)_auxiliarySourceCompilationDidCompleteWithFrameworkLocations:(id)arg1 error:(id)arg2;
- (void)_auxiliarySourceCompilationWasCanceled;
- (void)_auxiliarySourceCompilationWillBegin;
- (void)toybox:(id)arg1 didRemoveToy:(id)arg2;
- (void)toybox:(id)arg1 didAddToy:(id)arg2;
- (void)toyboxArchivableStateDidChange:(id)arg1;
- (id)updatedLocationFromLocation:(id)arg1 toTimestamp:(double)arg2;
- (id)sourceLanguageServiceContext;
@property(readonly) NSDictionary *buildSettings;
- (id)_createCrashResultFromError:(id)arg1 inSession:(id)arg2;
- (void)_handlePlaygroundResult:(id)arg1;
- (void)_clearErrorsFromPreviousExecutionSessions;
- (void)_presentErrorToUser:(id)arg1;
- (void)playgroundExecutionSession:(id)arg1 didEncounterError:(id)arg2;
- (void)playgroundExecutionSession:(id)arg1 didReceiveConsoleItem:(id)arg2;
- (void)playgroundExecutionSession:(id)arg1 didReceiveResult:(id)arg2;
- (void)playgroundExecutionSessionDidFinishExecution:(id)arg1;
- (void)playgroundExecutionSessionWillFinishExecution:(id)arg1;
- (void)playgroundExecutionSessionDidCompleteExpression:(id)arg1;
- (void)playgroundExecutionSessionWillBeginExpression:(id)arg1;
- (void)playgroundExecutionSession:(id)arg1 didMoveToState:(unsigned long long)arg2;
- (void)cancelExecution;
- (void)execute;
- (BOOL)_executeWithError:(id *)arg1;
- (void)_executeIfNeeded;
- (BOOL)_isReadyForExecution;
- (void)_prepareExecutionSession;
- (void)_prepareExecutionSessionIfNeeded;
- (BOOL)_isValidForExecutionOnPlatform:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) IDEPlaygroundPageSharedContext *playgroundPageContext; // @dynamic playgroundPageContext;
- (void)setPlaygroundContext:(id)arg1;
- (void)_cleanupAppBundlesIfNeeded;
- (void)unregisterEditor:(id)arg1;
- (void)registerEditor:(id)arg1;
- (id)_createPreparationParametersGeneratingAppBundle:(id *)arg1 error:(id *)arg2;
- (id)_configuredPreparationParametersWrapperWithError:(id *)arg1;
- (id)sourceCodePreambleForExecution;
- (id)sourceCodeForExecution;
- (void)executionGenerationDidEnd;
- (void)playgroundExpressionCompleted;
- (void)executionGenerationWillEnd;
- (void)beginExecutionGeneration;
- (void)addPlaygroundLoggerResult:(id)arg1;
- (void)removeAllPlaygroundResults;
- (void)_updateExecutionState;
- (void)_forceDiagnosticsUpdate;
- (void)resetAllPlaygroundPages;
- (void)resetPlaygroundImpl;
- (void)resetPlayground;
@property(readonly) BOOL allowsReset;
@property(readonly, copy, nonatomic) NSArray *sourceCodePlaygroundSections;
- (void)_displayUpgradeError:(id)arg1;
- (void)_requestPermissionToUpgradeInteractiveLearningPlaygroundWithSharedContext:(id)arg1 toModernFormatWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_requestPermissionToUpgradeSimplePlaygroundWithSharedContext:(id)arg1 toModernFormatWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestPermissionToUpgradePlaygroundWithSharedContext:(id)arg1 toLatestVersionWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_upgradeFormatWithCompletion:(CDUnknownBlockType)arg1;
- (void)upgradeFormat:(id)arg1;
- (id)displayName;
- (id)contentsURL;
- (BOOL)documentSupportsAuxiliarySources;
- (void)legacyToggleDisplayMode:(id)arg1;
@property(readonly, nonatomic) unsigned long long lineEndings;
@property(readonly, copy, nonatomic) NSString *contents;
- (void)_closeWindowHostingURL:(id)arg1;
- (void)dealloc;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)init;
@property(readonly, nonatomic) BOOL isLegacyDocument;
- (void)setTimelineScrubberEnabled:(BOOL)arg1;
- (BOOL)timelineScrubberEnabled;
- (BOOL)renderDocumentationForInspector;
- (void)setRenderDocumentationForInspector:(BOOL)arg1;
- (BOOL)showRenderDocumentationChoice;
- (void)setSdk:(id)arg1;
- (id)sdk;

// Remaining properties
@property(readonly) NSArray *consoleItems; // @dynamic consoleItems;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableConsoleItems; // @dynamic mutableConsoleItems;
@property(readonly) Class superclass;

@end

