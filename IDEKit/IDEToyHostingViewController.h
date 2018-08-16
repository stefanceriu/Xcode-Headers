//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEToyViewController.h>

@class DVTNotificationToken, DVTObservingToken, NSArray, NSMutableArray, NSView;
@protocol IDEToyHostingView, IDEToyHostingViewControllerDelegate;

@interface IDEToyHostingViewController : IDEToyViewController
{
    NSMutableArray *_mutableToyViewControllers;
    DVTObservingToken *_currentResultsObservingToken;
    DVTObservingToken *_executionIsInProgressObservingToken;
    DVTObservingToken *_toyboxResultDisplayDateObservationToken;
    DVTNotificationToken *_playgroundDidSelectToyNotificationToken;
    DVTNotificationToken *_playgroundDidHighlightToyNotificationToken;
    DVTNotificationToken *_fontAndColorSourceTextSettingsChangedNotificationToken;
    BOOL _dataUpdateScheduled;
    BOOL _shouldDisplayToyHostingContentView;
    BOOL _toyIsSelected;
    BOOL _toyIsHighlighted;
    BOOL _isLockedToMaxSize;
    struct CGSize _lockedMaxSize;
    BOOL _shouldTrackSuperviewWidth;
    BOOL _hasInitiallySizedController;
    BOOL _needsPersistedSelectionRestoration;
    BOOL _allowDragResizing;
    BOOL _drawRoundedCorners;
    BOOL _allowHighlight;
    BOOL _allowSelection;
    BOOL _alwaysEnableUserInteraction;
    unsigned long long _selectedRepresentationIndex;
    id <IDEToyHostingViewControllerDelegate> _hostingDelegate;
    NSView<IDEToyHostingView> *_toyHostingView;
    NSView *_toyHostingContentView;
    NSArray *_currentToyViewControllerConstraints;
    struct CGSize _minimumViewSize;
    struct CGSize _maximumViewSize;
}

+ (void)initialize;
@property(retain) NSArray *currentToyViewControllerConstraints; // @synthesize currentToyViewControllerConstraints=_currentToyViewControllerConstraints;
@property(retain) NSView *toyHostingContentView; // @synthesize toyHostingContentView=_toyHostingContentView;
@property(retain) NSView<IDEToyHostingView> *toyHostingView; // @synthesize toyHostingView=_toyHostingView;
@property(nonatomic, getter=shouldAlwaysEnableUserInteraction) BOOL alwaysEnableUserInteraction; // @synthesize alwaysEnableUserInteraction=_alwaysEnableUserInteraction;
@property(nonatomic, getter=shouldAllowSelection) BOOL allowSelection; // @synthesize allowSelection=_allowSelection;
@property(nonatomic, getter=shouldAllowHighlight) BOOL allowHighlight; // @synthesize allowHighlight=_allowHighlight;
@property(nonatomic, getter=shouldDrawRoundedCorners) BOOL drawRoundedCorners; // @synthesize drawRoundedCorners=_drawRoundedCorners;
@property(nonatomic, getter=shouldAllowDragResizing) BOOL allowDragResizing; // @synthesize allowDragResizing=_allowDragResizing;
@property(nonatomic) struct CGSize maximumViewSize; // @synthesize maximumViewSize=_maximumViewSize;
@property(nonatomic) struct CGSize minimumViewSize; // @synthesize minimumViewSize=_minimumViewSize;
@property(nonatomic) __weak id <IDEToyHostingViewControllerDelegate> hostingDelegate; // @synthesize hostingDelegate=_hostingDelegate;
- (void).cxx_destruct;
- (void)removeViewAsAccessibilityChild;
- (void)addViewAsAccessibilityChild;
- (void)primitiveInvalidate;
- (void)_updateViewSize:(struct CGSize)arg1;
- (void)updateViewHeight:(double)arg1;
- (void)resizeToFitToyPreferredContentSizeRestrictToHeight:(BOOL)arg1;
- (void)resizeToFitToyPreferredContentSize;
- (void)lockToSize:(struct CGSize)arg1;
- (void)tearDownConstraintsForCurrentToyView;
- (void)setupConstraintsForToyView:(id)arg1;
- (void)updateToyViewControllerForSelectedIndex;
- (void)replaceToyViewControllersInRange:(struct _NSRange)arg1 withToyViewControllers:(id)arg2;
- (void)replaceToyViewControllerInstanceOfClass:(Class)arg1 atIndex:(unsigned long long)arg2;
- (void)updateToyViewControllerInstancesForceUpdate:(BOOL)arg1;
- (void)renderResultsForceRedraw:(BOOL)arg1 renderImmediately:(BOOL)arg2;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
@property unsigned long long selectedRepresentationIndex; // @synthesize selectedRepresentationIndex=_selectedRepresentationIndex;
- (void)selectGraphRepresentation:(id)arg1;
- (void)selectMultipleRepresentation:(id)arg1;
- (void)selectSingleRepresentation:(id)arg1;
- (void)displayRepresentation:(unsigned long long)arg1;
- (BOOL)canDisplayRepresentation:(unsigned long long)arg1;
- (unsigned long long)currentRepresentation;
- (void)removeToyFromToybox;
- (id)currentToyViewController;
- (void)setDelegate:(id)arg1;
- (void)setResultDisplayDate:(id)arg1;
- (void)displayContextualMenuForEvent:(id)arg1;
- (void)_deregisterMouseHandling;
- (void)registerMouseHandling_InlineToys;
- (void)registerMouseHandling_DefaultToys;
- (void)registerMouseHandling;
- (void)_deregisterForNotifications;
- (void)registerForNotifications;
- (void)_deregisterResultsExecutionObservation;
- (void)registerResultsExecutionObservation;
- (struct CGSize)sizeByRemovingContentViewPadding:(struct CGSize)arg1;
- (struct CGSize)sizeByAddingContentViewPadding:(struct CGSize)arg1;
- (double)verticalContentViewPadding;
- (double)horizontalContentViewPadding;
- (struct CGSize)maximumContentSize;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (struct CGSize)preferredContentSize;
- (double)maximumClampedViewHeight:(double)arg1;
- (double)minimumClampedViewHeight:(double)arg1;
- (double)clampedViewHeight:(double)arg1;
- (double)clampedViewWidth:(double)arg1;
- (double)maximumClampedViewWidth:(double)arg1;
- (double)minimumClampedViewWidth:(double)arg1;
- (void)updateUserInteractionEnabled;
- (void)updateCornerRadius;
- (void)_pushToyPersistentSelectionIndex;
- (void)_pushToyPersistentViewSizing;
- (void)_pullToyPersistentSelectionIndex;
- (void)_pullToyPersistentViewSizing;
- (void)_updateViewsForCurrentFontsAndColors;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewDidLoad_InlineToys;
- (void)viewDidLoad_DefaultToys;
- (void)viewDidLoad;
- (BOOL)shouldDisplayInTimeline;
- (id)initWithToy:(id)arg1;

// Remaining properties
@property(readonly) NSArray *toyViewControllers; // @dynamic toyViewControllers;

@end

