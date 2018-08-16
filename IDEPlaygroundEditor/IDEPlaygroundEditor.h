//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/IDESourceCodeEditor.h>

#import <IDEPlaygroundEditor/IDEPlaygroundHostingEditor-Protocol.h>
#import <IDEPlaygroundEditor/IDEWorkspaceRunGroupFunctionBarOverride-Protocol.h>
#import <IDEPlaygroundEditor/NSTouchBarDelegate-Protocol.h>
#import <IDEPlaygroundEditor/NSTouchBarProvider-Protocol.h>

@class DVTObservingToken, DVTPerformanceMetric, DVTScopeBarController, IDEPlaygroundDocument, IDEPlaygroundEditorStackView_ML, IDEPlaygroundSourceTextScrollView, IDEPlaygroundTextView, NSArray, NSCountedSet, NSMapTable, NSMutableArray, NSMutableSet, NSSet, NSString, NSTouchBar;
@protocol DVTCancellable, NSObject;

@interface IDEPlaygroundEditor : IDESourceCodeEditor <NSTouchBarProvider, NSTouchBarDelegate, IDEWorkspaceRunGroupFunctionBarOverride, IDEPlaygroundHostingEditor>
{
    NSMutableArray *_sectionViewControllers;
    IDEPlaygroundEditorStackView_ML *_editorStackView;
    IDEPlaygroundSourceTextScrollView *_topLevelPlaygroundScrollView;
    id <DVTCancellable> _clipViewFillToken;
    NSCountedSet *_countedToysSelectedInRegisteredToyboxes;
    NSMutableSet *_toysSelectedInRegisteredToyboxes;
    BOOL _lastEditWasNewline;
    BOOL _lastEditWasWhitespace;
    BOOL _lastEditWasPrecededOnlyByWhitespace;
    BOOL _lastEditWasFollowedOnlyByWhitespace;
    struct _NSRange _lastEditRange;
    DVTObservingToken *_autoterminationDelayObservingToken;
    DVTObservingToken *_timelineScrubberEnabledObservingToken;
    DVTObservingToken *_displayModeObservingToken;
    id <NSObject> _sourceTextSettingsChangedObserver;
    double _minSidebarWidth;
    BOOL _playgroundExecutionEnabled;
    BOOL _playgroundExecutionWasEverScheduled;
    NSMapTable *_toyboxEditorToSelectedToyObserverTokensMap;
    BOOL _alreadySetUp;
    DVTPerformanceMetric *_loadPerformanceMetric;
    DVTPerformanceMetric *_closePerformanceMetric;
    DVTScopeBarController *_errorScopeBarController;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (double)defaultPlaygroundSidebarWidth;
+ (void)setDefaultPlaygroundSidebarWidth:(double)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)_playgroundActivityReporter;
- (void)_registerPlaygroundDocumentWithActivityReporter;
- (void)legacyInsertImageLiteralAction:(id)arg1;
- (void)legacyInsertFileLiteralAction:(id)arg1;
- (void)legacyInsertColorLiteralAction:(id)arg1;
- (void)selectRepresentationType:(unsigned long long)arg1;
- (void)legacySelectGraphResultInlineRepresentation:(id)arg1;
- (void)legacySelectMultipleResultInlineRepresentation:(id)arg1;
- (void)legacySelectSingleResultInlineRepresentation:(id)arg1;
- (void)legacyToggleQuickLookInline:(id)arg1;
- (void)dismissErrorBannerAnimated:(BOOL)arg1;
- (void)presentBannerForError:(id)arg1;
- (void)cancelExecution;
- (void)cancelScheduledExecution;
- (void)executePlayground;
- (void)legacyExecute:(id)arg1;
- (void)scheduleMediumDelayedPlaygroundExecution;
- (void)scheduleShortDelayedPlaygroundExecution;
- (void)scheduleImmediatePlaygroundExecution;
- (void)schedulePlaygroundExecutionWithDelay:(double)arg1;
- (BOOL)executeOnSourceChanges;
@property(getter=isPlaygroundExecutionEnabled) BOOL playgroundExecutionEnabled;
- (void)_updateDocumentationRenderStatus;
- (double)textView:(id)arg1 constrainAccessoryAnnotationWidth:(double)arg2;
- (double)textView:(id)arg1 constrainMaxAccessoryAnnotationWidth:(double)arg2;
- (double)textView:(id)arg1 constrainMinAccessoryAnnotationWidth:(double)arg2;
- (BOOL)textView:(id)arg1 shouldReadObjectLiteralFromPasteboard:(id)arg2 type:(id)arg3;
- (void)textView:(id)arg1 objectLiteralStringsForObjects:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)directoriesForLiteralsInTextView:(id)arg1;
- (double)_minimumSidebarWidth;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (struct _NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (id)annotationContextForTextView:(id)arg1;
- (unsigned long long)textView:(id)arg1 lineEndingForWritingSelectionToPasteboard:(id)arg2 type:(id)arg3;
- (unsigned long long)textView:(id)arg1 lineEndingForReadingSelectionFromPasteboard:(id)arg2 type:(id)arg3;
- (id)sdk;
- (id)languageService;
- (id)playgroundPageContext;
- (id)playgroundContext;
- (id)currentSelectedDocumentLocations;
@property(readonly, copy) NSArray *playgroundSectionViewControllers;
- (void)unregisterToyboxEditor:(id)arg1;
- (void)registerToyboxEditor:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (BOOL)validateInlineResultRepresentation:(unsigned long long)arg1 forMenuItem:(id)arg2 context:(id)arg3;
- (BOOL)validateSelectGraphResultInlineRepresentationMenuItem:(id)arg1 context:(id)arg2;
- (BOOL)validateSelectMultipleResultInlineRepresentationMenuItem:(id)arg1 context:(id)arg2;
- (BOOL)validateSelectSingleResultInlineRepresentationMenuItem:(id)arg1 context:(id)arg2;
- (BOOL)validateToggleQuickLookInlineMenuItem:(id)arg1 context:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)didSetupEditor;
- (void)loadView;
- (void)_configureFoldingManager:(id)arg1 withSourceCodeLanguage:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (void)changeDisplayRepresentation:(id)arg1;
- (long long)_validateToyRepresentationSegmentedControl:(id)arg1;
- (BOOL)_validateRepresentation:(unsigned long long)arg1 segmentedControl:(id)arg2 segment:(long long)arg3;
- (id)_toyRepresentationItem;
- (id)_toggleQuicklookItem;
- (void)dfr_didChangeSelection:(id)arg1;
- (void)_didSelectToy:(id)arg1;
- (void)toggleExecutionState:(id)arg1;
- (id)_playStopItem;
- (id)_playGroupItemWithIdentifier:(id)arg1;
- (id)_accessibilityTitleForExecutionEnabled;
- (id)_imageForExecutionEnabled;
- (id)playgroundEditorDFRController;
- (BOOL)shouldSuppressWorkspaceDebugControlTouchBarItem;
- (id)identifierForWorkspaceRunGroupFunctionBarOverride;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)_touchBarForPlaygrounds;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) IDEPlaygroundDocument *document; // @dynamic document;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableSet *mutableToysSelectedInRegisteredToyboxes; // @dynamic mutableToysSelectedInRegisteredToyboxes;
@property(readonly) Class superclass;
@property(readonly) IDEPlaygroundTextView *textView; // @dynamic textView;
@property(readonly) NSTouchBar *touchBar;
@property(readonly, copy) NSSet *toysSelectedInRegisteredToyboxes; // @dynamic toysSelectedInRegisteredToyboxes;

@end

