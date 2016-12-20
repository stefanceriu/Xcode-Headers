//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "GTFActionCreateDelegate.h"
#import "GTFActionLibraryDelegate.h"
#import "GTFActionLibraryReferenceLookupSourceDelegate.h"
#import "GTFActionLoopPopoverDelegate.h"
#import "GTFActionNodeOverviewDelegate.h"
#import "GTFActionNodeTrackViewDelegate.h"
#import "GTFActionOverviewViewControllerDelegate.h"
#import "GTFActionRefPopoverDelegate.h"
#import "GTFActionTimelineModelDelegate.h"
#import "GTFActionTimelineViewDelegate.h"
#import "GTFActionTrackOverviewDelegate.h"
#import "GTFFileSystemEventStreamDelegate.h"

@class DVTObservingToken, DVTSplitView, GTFActionCreatePopoverController, GTFActionLibrary, GTFActionLoopPopoverController, GTFActionMapper, GTFActionNodeOverviewView, GTFActionRefPreviewPopoverController, GTFActionTimelineControlView, GTFActionTimelineModel, GTFActionTimelineView, GTFActionTrackOverviewView, GTFFileSystemEventStream, IDEEditorDocument<GTFActionDocument>, IDEMediaResourceVariantContext, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSScrollView, NSSlider, NSString, NSView, SKActionReference;

@interface GTFActionEditor : IDEViewController <GTFActionNodeTrackViewDelegate, GTFActionTimelineViewDelegate, GTFActionLibraryDelegate, GTFActionCreateDelegate, GTFActionLoopPopoverDelegate, GTFActionRefPopoverDelegate, GTFActionOverviewViewControllerDelegate, GTFActionNodeOverviewDelegate, GTFActionTrackOverviewDelegate, GTFActionTimelineModelDelegate, GTFFileSystemEventStreamDelegate, GTFActionLibraryReferenceLookupSourceDelegate>
{
    DVTObservingToken *_filteredTargetsKVOToken;
    NSArray *_filteredTargetsObservers;
    NSArray *_currentFilteredTargets;
    NSMutableArray *_nodeTrackViews;
    NSMutableArray *_observedActions;
    NSMutableArray *_filteredNodeTrackViews;
    NSMutableArray *_referencedDocuments;
    NSMutableDictionary *_nameToDocumentPath;
    NSMapTable *_nameToRefActionLibrary;
    GTFFileSystemEventStream *_eventStream;
    id <DVTInvalidation> _variantContextObservation;
    IDEMediaResourceVariantContext *_variantContext;
    GTFActionTimelineModel *_conversionTimelineModel;
    SKActionReference *_conversionRefAction;
    NSArray *_convertToReferenceActions;
    NSArray *_convertToReferenceActionsForNewFile;
    int _convertToReferenceLoops;
    double _previewStartTime;
    double _lastUpdateTime;
    double _timeSinceSceneLoaded;
    double _timeScale;
    double _timelineEndTime;
    BOOL _ignorePreviewUpdates;
    BOOL _isPlaying;
    BOOL _supressSelectionUpdate;
    BOOL _isPreviewPaused;
    id <GTFActionEditorDelegate> _delegate;
    NSArray *_selectedActions;
    NSDictionary *_filteredTargets;
    NSString *_filterString;
    double _playbackSpeed;
    NSScrollView *_trackOverviewScroll;
    GTFActionLoopPopoverController *_loopActionViewController;
    GTFActionCreatePopoverController *_addActionViewController;
    GTFActionRefPreviewPopoverController *_refActionViewController;
    NSView *_actionNodeSelectorTimelineTabSubview;
    GTFActionTimelineControlView *_actionNodeSelectorTimelineControlView;
    DVTSplitView *_sideSplitView;
    NSScrollView *_actionTimelinePanel;
    GTFActionNodeOverviewView *_nodeOverview;
    GTFActionTrackOverviewView *_trackOverviewView;
    GTFActionTimelineView *_timelineView;
    NSPopUpButton *_filterCategoriesField;
    NSSlider *_timeScaleSlider;
    GTFActionMapper *_mapper;
    NSDictionary *_imageAssetLookup;
    NSString *_filterCategoryName;
}

+ (id)createShowActionButton;
+ (void)setLastEditorHeight:(double)arg1;
+ (double)lastEditorHeight;
+ (void)setLastEditorVisibility:(BOOL)arg1;
+ (BOOL)lastEditorVisibility;
+ (id)dataCache;
@property(retain, nonatomic) NSString *filterCategoryName; // @synthesize filterCategoryName=_filterCategoryName;
@property(retain, nonatomic) NSDictionary *imageAssetLookup; // @synthesize imageAssetLookup=_imageAssetLookup;
@property(retain, nonatomic) GTFActionMapper *mapper; // @synthesize mapper=_mapper;
@property(retain) NSSlider *timeScaleSlider; // @synthesize timeScaleSlider=_timeScaleSlider;
@property(retain) NSPopUpButton *filterCategoriesField; // @synthesize filterCategoriesField=_filterCategoriesField;
@property(retain) GTFActionTimelineView *timelineView; // @synthesize timelineView=_timelineView;
@property(retain) GTFActionTrackOverviewView *trackOverviewView; // @synthesize trackOverviewView=_trackOverviewView;
@property(retain) GTFActionNodeOverviewView *nodeOverview; // @synthesize nodeOverview=_nodeOverview;
@property(retain) NSScrollView *actionTimelinePanel; // @synthesize actionTimelinePanel=_actionTimelinePanel;
@property __weak DVTSplitView *sideSplitView; // @synthesize sideSplitView=_sideSplitView;
@property __weak GTFActionTimelineControlView *actionNodeSelectorTimelineControlView; // @synthesize actionNodeSelectorTimelineControlView=_actionNodeSelectorTimelineControlView;
@property __weak NSView *actionNodeSelectorTimelineTabSubview; // @synthesize actionNodeSelectorTimelineTabSubview=_actionNodeSelectorTimelineTabSubview;
@property(retain, nonatomic) GTFActionRefPreviewPopoverController *refActionViewController; // @synthesize refActionViewController=_refActionViewController;
@property(retain, nonatomic) GTFActionCreatePopoverController *addActionViewController; // @synthesize addActionViewController=_addActionViewController;
@property(retain, nonatomic) GTFActionLoopPopoverController *loopActionViewController; // @synthesize loopActionViewController=_loopActionViewController;
@property(retain) NSScrollView *trackOverviewScroll; // @synthesize trackOverviewScroll=_trackOverviewScroll;
@property(nonatomic) double playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(nonatomic) BOOL isPreviewPaused; // @synthesize isPreviewPaused=_isPreviewPaused;
@property(readonly, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(copy, nonatomic) NSDictionary *filteredTargets; // @synthesize filteredTargets=_filteredTargets;
@property(copy, nonatomic) NSArray *selectedActions; // @synthesize selectedActions=_selectedActions;
@property(nonatomic) __weak id <GTFActionEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nodeTrackView:(id)arg1 reverseActions:(id)arg2;
- (void)nodeTrackView:(id)arg1 duplicateActions:(id)arg2;
- (void)pasteActionsIntoNodeTrackView:(id)arg1;
- (BOOL)pasteActionsAvailableForNodeTrackView:(id)arg1;
- (void)nodeTrackView:(id)arg1 copyActions:(id)arg2;
- (void)trackOverviewView:(id)arg1 moveSelectedActionsFromNodeTrackView:(id)arg2 toNodeTrackView:(id)arg3 movingDown:(BOOL)arg4 selectActionsAfterMove:(BOOL)arg5;
- (void)actionLibraryForceLookupUpdate:(id)arg1;
- (id)timelineModelForActionLibrary:(id)arg1 forActionNamed:(id)arg2;
- (void)endChangeInTimelineModel:(id)arg1;
- (void)beginChangeInTimelineModel:(id)arg1;
- (void)checkTimelineModelsForUpdatedEndTimeWithAllowDownsize:(BOOL)arg1;
- (void)actionTimelineUpdateView:(id)arg1;
- (void)actionTimelineUpdateEditorWithEndTime:(id)arg1;
- (double)actionTimeLineGetEditorEndTime:(id)arg1;
- (id)actionTimeline:(id)arg1 lookupImageAssetPath:(id)arg2;
- (void)actionTimeline:(id)arg1 didRemoveAction:(id)arg2;
- (void)actionTimeline:(id)arg1 didAddAction:(id)arg2;
- (void)endCommandForNodeTrackView:(id)arg1;
- (void)beginCommandForNodeTrackView:(id)arg1;
- (void)createUndoEventForTimelines:(id)arg1;
- (int)nodeTrackView:(id)arg1 getClosestTrackWithoutInfiniteLoops:(int)arg2;
- (int)nodeTrackView:(id)arg1 getBottomTrackForGroup:(int)arg2;
- (int)nodeTrackView:(id)arg1 getTopTrackForGroup:(int)arg2;
- (int)nodeTrackView:(id)arg1 getGroupIndexThatContainsActions:(id)arg2;
- (BOOL)nodeTrackView:(id)arg1 doesAnyGroupContainAtLeastOneAction:(id)arg2;
- (int)nodeTrackView:(id)arg1 getGroupIndexForTrack:(int)arg2;
- (id)nodeTrackView:(id)arg1 getActionsForGroup:(int)arg2 inTrack:(int)arg3;
- (BOOL)nodeTrackView:(id)arg1 isActionInGroup:(id)arg2;
- (id)nodeTrackView:(id)arg1 getActionsForGroup:(int)arg2;
- (id)nodeTrackView:(id)arg1 getTracksForGroup:(int)arg2;
- (void)nodeTrackView:(id)arg1 setIterationTime:(double)arg2 forLoop:(int)arg3;
- (int)nodeTrackView:(id)arg1 getActionCountForGroup:(int)arg2;
- (void)nodeTrackView:(id)arg1 setDuration:(double)arg2 forGroup:(int)arg3;
- (void)nodeTrackView:(id)arg1 offsetStartTime:(double)arg2 forGroup:(int)arg3;
- (void)nodeTrackView:(id)arg1 setStartTime:(double)arg2 forGroup:(int)arg3;
- (double)nodeTrackView:(id)arg1 getDurationForGroup:(int)arg2;
- (double)nodeTrackView:(id)arg1 getStartTimeForGroup:(int)arg2;
- (double)nodeTrackView:(id)arg1 getIterationTimeForLoop:(int)arg2;
- (void)nodeTrackView:(id)arg1 setLoopCount:(int)arg2 forLoop:(int)arg3;
- (int)nodeTrackView:(id)arg1 getLoopCountForGroup:(int)arg2;
- (id)nodeTrackView:(id)arg1 getGroup:(int)arg2;
- (int)nodeTrackViewGetNumGroups:(id)arg1;
- (void)nodeTrackView:(id)arg1 destroyGroup:(int)arg2;
- (BOOL)nodeTrackView:(id)arg1 createGroupReferenceForActions:(id)arg2;
- (void)loopPopover:(id)arg1 didRemoveLoop:(id)arg2 fromTimelineModel:(id)arg3;
- (void)loopPopover:(id)arg1 willRemoveLoop:(id)arg2 fromTimelineModel:(id)arg3;
- (void)loopPopover:(id)arg1 didModifyLoop:(id)arg2 inTimelineModel:(id)arg3;
- (void)nodeTrackView:(id)arg1 showPopoverForLoop:(int)arg2 relativeToRect:(struct CGRect)arg3;
- (int)nodeTrackView:(id)arg1 createLoopForActions:(id)arg2 withLoopCount:(int)arg3;
- (void)actionTimelineViewDidEndScrubbing:(id)arg1;
- (void)actionTimelineViewDidBeginScrubbing:(id)arg1;
- (void)incrementPreviewStartTime:(double)arg1 startPreview:(BOOL)arg2;
- (void)setNodeSelectorTimelineControlViewPositionForPreviewTime;
- (void)stopTimelineControlAnimation;
- (void)setActionPreviewStartTime:(double)arg1 startPreview:(BOOL)arg2;
- (void)didUpdatePreviewScene:(double)arg1;
- (BOOL)canLiveReloadScene;
- (void)updateAnimationForPlaybackSpeed;
- (void)didEndPlayingPreviewScene;
- (void)didUnpausePlayingPreviewScene;
- (void)didPausePlayingPreviewScene;
- (void)startPlayForTimelineControl;
- (void)willBeginPlayingPreviewScene;
- (void)actionRefPopover:(id)arg1 didPressGotoSourceForTimeline:(id)arg2;
- (void)nodeTrackView:(id)arg1 didDoubleClickAction:(id)arg2;
- (void)closeRefPopover;
- (void)nodeTrackView:(id)arg1 performedIdleSelectOnAction:(id)arg2;
- (void)resolveConversionTimelineModelWithName:(id)arg1 inFile:(id)arg2;
- (void)nodeTrackView:(id)arg1 convertToReference:(id)arg2;
- (BOOL)shouldCreateReferenceActionWithActions:(id)arg1;
- (void)actionModelDataDidChange:(id)arg1;
- (void)observeAllActions;
- (void)unobserveAllActions;
- (void)unobserveAllTimelineActions:(id)arg1;
- (void)observeAllTimelineActions:(id)arg1;
- (void)unobserveAction:(id)arg1;
- (void)observeAction:(id)arg1;
- (void)nodeTrackViewUpdateEditorEndTime:(id)arg1;
- (double)nodeTrackViewGetTimelineEndTime:(id)arg1;
- (double)nodeTrackView:(id)arg1 getTrackEndTime:(int)arg2;
- (void)nodeTrackView:(id)arg1 noteActionStartTimesAndDurationsForTrack:(int)arg2;
- (BOOL)nodeTrackView:(id)arg1 verifyCanMoveActions:(id)arg2 byTrackOffset:(int)arg3 ignoreEachOther:(BOOL)arg4;
- (void)nodeTrackView:(id)arg1 getSmallestTimeMarginForGroup:(int)arg2 outLeftMargin:(double *)arg3 outRightMargin:(double *)arg4;
- (void)nodeTrackView:(id)arg1 getSmallestTimeMarginForActions:(id)arg2 ignoreEachOther:(BOOL)arg3 outLeftMargin:(double *)arg4 outRightMargin:(double *)arg5;
- (void)nodeTrackView:(id)arg1 offsetTrack:(int)arg2 forActions:(id)arg3;
- (void)nodeTrackView:(id)arg1 offsetTime:(double)arg2 forActions:(id)arg3;
- (void)nodeTrackView:(id)arg1 updateActionPosition:(id)arg2 enableSnapping:(BOOL)arg3;
- (void)nodeTrackView:(id)arg1 updateActionPosition:(id)arg2;
- (void)nodeTrackView:(id)arg1 updateActionWidth:(id)arg2 enableSnapping:(BOOL)arg3;
- (void)nodeTrackView:(id)arg1 updateActionWidth:(id)arg2;
- (void)updateActionView:(id)arg1 fromModel:(id)arg2;
- (void)updateNodeTrackView:(id)arg1;
- (void)updateAllNodeTrackViews;
- (void)nodeTrackView:(id)arg1 setSelectedActionsFromViews:(id)arg2;
- (void)setupActionSelectionHandling;
- (void)actionCreatePopoverDidClose;
- (void)actionCreatePopoverCreateActionNamed:(id)arg1 forFile:(id)arg2;
- (void)actionCreatePopoverCreateActionNamed:(id)arg1 forFile:(id)arg2 createNewFile:(BOOL)arg3;
- (void)actionCreatePopoverCreateActionForSelectedTarget;
- (void)showAddActionPanel:(id)arg1;
- (void)showAddActionPanel:(id)arg1 withRect:(struct CGRect)arg2;
- (id)unarchiveActionModel:(id)arg1;
- (BOOL)nodeTrackViewIsLastInOverview:(id)arg1;
- (BOOL)nodeTrackViewIsPreviousTrackExpanded:(id)arg1;
- (void)nodeTrackViewDidChangeTrackCount:(id)arg1;
- (void)nodeTrackView:(id)arg1 finishedMovingActionView:(id)arg2;
- (void)nodeTrackView:(id)arg1 actionViewRemoved:(id)arg2;
- (void)nodeTrackView:(id)arg1 actionViewAdded:(id)arg2 withModel:(id)arg3;
- (void)resetCursorRectsInTrackOverviewForNodeTrackView:(id)arg1;
- (void)redrawTrackOverviewForNodeTrackView:(id)arg1 resetCursorRects:(BOOL)arg2;
- (struct CGRect)getVisibleRect;
- (void)refreshOverviewViewsToFilteredNodes;
- (id)getSCNActionForTarget:(id)arg1;
- (void)refreshFilteredNodeTrackViewsFromTargets:(id)arg1;
- (void)overviewController:(id)arg1 didUpdateFilterString:(id)arg2;
- (void)overviewController:(id)arg1 didSelectFilterCategoryName:(id)arg2;
- (void)updateFilterView;
- (void)updateFilteredTargetsObservers:(id)arg1;
- (void)updateFilteredTargets;
- (void)nodeOverview:(id)arg1 duplicateNodeTrack:(id)arg2;
- (void)nodeOverview:(id)arg1 removeNodeTrack:(id)arg2;
- (void)updatePreviewTimeForAllTimelines;
- (void)updateTargetTrack:(id)arg1;
- (void)createInitialActionsForNodeTrackView:(id)arg1 fromModel:(id)arg2;
- (id)createNodeTrackViewForTimelineModel:(id)arg1;
- (void)updateTimelineEndTime:(double)arg1;
- (void)actionsDidChangeInTimeline:(id)arg1;
- (void)didReplaceTimeline:(id)arg1 withTimeline:(id)arg2;
- (void)didRemoveTimeline:(id)arg1;
- (void)didAddTimeline:(id)arg1;
- (void)setupInitialNodeTrackViews;
- (void)openDocumentForReferenceName:(id)arg1;
- (void)releaseReferencedDocuments;
- (void)releaseReferencedDocument:(id)arg1;
- (id)loadAndRetainActionDocumentAtURL:(id)arg1;
- (void)fileSystemEventStream:(id)arg1 notedChangeAtPath:(id)arg2 scanRecursively:(BOOL)arg3;
- (void)registerFSEvents;
- (void)addActionPressed:(id)arg1;
- (void)updateTimeScale:(id)arg1;
- (void)clearFilteredTargetsObservers;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (id)timelineModelForActionNamed:(id)arg1;
- (void)cacheReferencedActionsInDocument:(id)arg1;
- (void)reloadLookupForActionDocument:(id)arg1;
- (void)cacheNamedActionsInURL:(id)arg1;
- (void)setupReferenceActionLookup;
- (void)setupViewsAfterInstall;
- (void)setupModelsAfterInstall;
- (void)setupViewsBeforeInstall;
- (void)setupModelsBeforeInstall;
- (void)setupActionEditorViews;
- (void)viewDidInstall;
- (void)viewDidLoad;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) double previewStartTime;
@property(readonly, nonatomic) GTFActionLibrary *actionLibrary;
@property(readonly, nonatomic) IDEEditorDocument<GTFActionDocument> *actionEditorDocument;
@property(readonly, nonatomic) BOOL isActionFileEditor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

