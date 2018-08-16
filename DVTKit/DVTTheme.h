//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, NSAppearance, NSBundle, NSColor, NSDictionary, NSFont, NSGradient, NSImage;

@interface DVTTheme : NSObject
{
    NSBundle *_bundle;
    NSDictionary *_contents;
    NSAppearance *_appearance;
    NSColor *_vibrantDividerLineColor;
    DVTFilePath *_filePath;
}

+ (id)currentTheme;
+ (void)initialize;
@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(retain) NSColor *vibrantDividerLineColor; // @synthesize vibrantDividerLineColor=_vibrantDividerLineColor;
- (void).cxx_destruct;
- (void)updateHeightOfBarView:(id)arg1 barHasTopBorder:(BOOL)arg2 barHasBottomBorder:(BOOL)arg3 adjacentView:(id)arg4;
- (void)updateHeightOfBarView:(id)arg1 barHasBorder:(BOOL)arg2 adjacentView:(id)arg3;
- (double)barHeightIncludeTopBorder:(BOOL)arg1 includeBottomBorder:(BOOL)arg2;
- (double)barHeightIncludeBorder:(BOOL)arg1;
@property(readonly) NSColor *activityViewScrollingTextFieldTextColorInactive;
@property(readonly) NSColor *activityViewIndeterminateProgessIndicatorColor;
@property(readonly) NSColor *activityViewDeterminateProgessIndicatorColor;
- (id)_activityViewDeterminateProgessIndicatorColorOnDark;
@property(readonly) NSColor *activityViewScrollingTextFieldTextColorActive;
@property(readonly) NSColor *activityViewScrollingTextFieldTextColorActiveOnLightView;
- (BOOL)_activityAreaIsDark;
@property(readonly) BOOL isSubLaunchedXcode;
@property(readonly) BOOL isExtensionDebuggingHost;
- (id)pressedTextShadowForTextColor:(id)arg1;
@property(readonly) NSImage *zoomToIdentityLevelDFRImage;
@property(readonly) NSImage *zoomToFitSelectionDFRImage;
@property(readonly) NSImage *viewVisibilityDFRImage;
@property(readonly) NSImage *viewSpacerMinDFRImage;
@property(readonly) NSImage *viewSpacerDFRImage;
@property(readonly) NSImage *viewDebugger3DDFRImage;
@property(readonly) NSImage *viewDebugger2DDFRImage;
@property(readonly) NSImage *viewDebugDFRImage;
@property(readonly) NSImage *updateFramesDFRImage;
@property(readonly) NSImage *updateConstraintsDFRImage;
@property(readonly) NSImage *unfoldDFRImage;
@property(readonly) NSImage *toyDFRImage;
@property(readonly) NSImage *threadsFilterDFRImage;
@property(readonly) NSImage *testDFRImage;
@property(readonly) NSImage *stopOutlineDFRImage;
@property(readonly) NSImage *stepOverThreadDFRImage;
@property(readonly) NSImage *stepOverInstructionDFRImage;
@property(readonly) NSImage *stepOverDFRImage;
@property(readonly) NSImage *stepOutDFRImage;
@property(readonly) NSImage *stepInThreadDFRImage;
@property(readonly) NSImage *stepInInstructionDFRImage;
@property(readonly) NSImage *stepInDFRImage;
@property(readonly) NSImage *stackFramesFilterDFRImage;
@property(readonly) NSImage *singleResultDFRImage;
@property(readonly) NSImage *scmFilterDFRImage;
@property(readonly) NSImage *schemeTestFilterDFRImage;
@property(readonly) NSImage *runtimeIssuesFilterDFRImage;
@property(readonly) NSImage *runOutlineDFRImage;
@property(readonly) NSImage *profileDFRImage;
@property(readonly) NSImage *printDescriptionDFRImage;
@property(readonly) NSImage *makeNewWorkspaceDFRImage;
@property(readonly) NSImage *makeNewProjectDFRImage;
@property(readonly) NSImage *makeNewPlaygroundDFRImage;
@property(readonly) NSImage *memoryGraphDFRImage;
@property(readonly) NSImage *membersFilterDFRImage;
@property(readonly) NSImage *listResultDFRImage;
@property(readonly) NSImage *jumpToDefinitionDFRImage;
@property(readonly) NSImage *indentLineDFRImage;
@property(readonly) NSImage *historyDFRImage;
@property(readonly) NSImage *hiddenViewDFRImage;
@property(readonly) NSImage *graphResultDFRImage;
@property(readonly) NSImage *gpuWarningFilterDFRImage;
@property(readonly) NSImage *gpuDrawCallFilterDFRImage;
@property(readonly) NSImage *gearDFRImage;
@property(readonly) NSImage *foldDFRImage;
@property(readonly) NSImage *focusDFRImage;
@property(readonly) NSImage *filterDFRImage;
@property(readonly) NSImage *failingTestFilterDFRImage;
@property(readonly) NSImage *expandDFRImage;
@property(readonly) NSImage *errorsFilterDFRImage;
@property(readonly) NSImage *editAllInScopeDFRImage;
@property(readonly) NSImage *documentNavigationDFRImage;
@property(readonly) NSImage *doNotCommitDFRImage;
@property(readonly) NSImage *debuggerControlsOffDFRImage;
@property(readonly) NSImage *continueDFRImage;
@property(readonly) NSImage *constraintsDFRImage;
@property(readonly) NSImage *commitNavDFRImage;
@property(readonly) NSImage *commitDFRImage;
@property(readonly) NSImage *commentLineDFRImage;
@property(readonly) NSImage *collapseDFRImage;
@property(readonly) NSImage *clippedContentDFRImage;
@property(readonly) NSImage *classFilterDFRImage;
@property(readonly) NSImage *checkOutDFRImage;
@property(readonly) NSImage *breakpointsInactiveDFRImage;
@property(readonly) NSImage *breakpointsModifiedFilterDFRImage;
@property(readonly) NSImage *breakpointsFilterDFRImage;
@property(readonly) NSImage *breakpointsActiveDFRImage;
@property(readonly) NSImage *blocksFilterDFRImage;
@property(readonly) NSImage *analyzeDFRImage;
@property(readonly) NSImage *addDFRImage;
- (id)editorAnnotationTestSuccess10;
- (id)editorAnnotationTestFail10;
- (id)editorAnnotationTest10;
- (id)statusTestFailureImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestFailureImageOfSize:(unsigned long long)arg1;
- (id)statusTestFailureMixedImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestFailureMixedImageOfSize:(unsigned long long)arg1;
- (id)statusTestSuccessMixedImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestSuccessMixedImageOfSize:(unsigned long long)arg1;
- (id)statusTestSuccessImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestSuccessImageOfSize:(unsigned long long)arg1;
- (id)statusTestSuccessOutlineImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestSuccessOutlineImageOfSize:(unsigned long long)arg1;
- (id)statusTestOutlineImageOfSize:(unsigned long long)arg1;
- (id)statusTestMissingBaselineForPerformanceMetricsImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestMissingBaselineForPerformanceMetricsImageOfSize:(unsigned long long)arg1;
- (id)statusTestMeasuredPerformanceMetricsImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestMeasuredPerformanceMetricsImageOfSize:(unsigned long long)arg1;
- (id)statusMemoryLeakImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusMemoryLeakImageOfSize:(unsigned long long)arg1;
- (id)statusRuntimeIssueImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusRuntimeIssueImageOfSize:(unsigned long long)arg1;
- (id)statusCanceledImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusCanceledImageOfSize:(unsigned long long)arg1;
- (id)statusWarningFixitImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusWarningFixitImageOfSize:(unsigned long long)arg1;
- (id)statusWarningImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusWarningImageOfSize:(unsigned long long)arg1;
- (id)statusSuccessImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusSuccessImageOfSize:(unsigned long long)arg1;
- (id)statusStaticAnalysisWarningImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusStaticAnalysisWarningImageOfSize:(unsigned long long)arg1;
- (id)statusStaticAnalysisStepImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusStaticAnalysisStepImageOfSize:(unsigned long long)arg1;
- (id)statusStaticAnalysisIssueImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusStaticAnalysisIssueImageOfSize:(unsigned long long)arg1;
- (id)statusStaticAnalysisControlFlowStepImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusStaticAnalysisControlFlowStepImageOfSize:(unsigned long long)arg1;
- (id)statusMessageImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusMessageImageOfSize:(unsigned long long)arg1;
- (id)statusGenericIssueImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusGenericIssueImageOfSize:(unsigned long long)arg1;
- (id)statusFailureImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusFailureImageOfSize:(unsigned long long)arg1;
- (id)statusErrorFixitImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusErrorFixitImageOfSize:(unsigned long long)arg1;
- (id)statusErrorImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusErrorImageOfSize:(unsigned long long)arg1;
- (id)statusBuildInProgressImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusBuildInProgressImageOfSize:(unsigned long long)arg1;
@property(readonly) NSImage *annotationHelpButtonPressedImage;
@property(readonly) NSImage *annotationHelpButtonOverImage;
@property(readonly) NSImage *annotationHelpButtonImage;
@property(readonly) NSImage *certificate;
@property(readonly) NSImage *stopRecordingImage;
@property(readonly) NSImage *recordImage;
@property(readonly) NSImage *stopTemplateImage;
@property(readonly) NSImage *resumeTemplateImage;
@property(readonly) NSImage *pauseTemplateImage;
@property(readonly) NSImage *playSolidTemplateImage;
@property(readonly) NSImage *playTemplateImage;
@property(readonly) NSImage *removeButtonTemplate;
@property(readonly) NSImage *addButtonTemplate;
@property(readonly) NSImage *hideContentTemplateImage;
@property(readonly) NSImage *showContentTemplateImage;
@property(readonly) NSImage *gearTemplateImage;
@property(readonly) NSImage *downloadTemplateImage;
@property(readonly) NSImage *infoTemplateImage;
@property(readonly) NSImage *quickLookTemplateImage;
@property(readonly) NSImage *recentOffImage;
@property(readonly) NSImage *recentOnImage;
@property(readonly) NSImage *favoriteOffSelectedImage;
@property(readonly) NSImage *favoriteOffImage;
@property(readonly) NSImage *favoriteOnSelectedImage;
@property(readonly) NSImage *favoriteOnImage;
@property(readonly) NSColor *bezelAlertShadowColor;
@property(readonly) NSColor *bezelAlertFontColor;
@property(readonly) NSColor *bezelAlertBackgroundColor;
@property(readonly) NSGradient *buttonSeparatorHighlightGradient;
@property(readonly) NSGradient *buttonSeparatorGradient;
@property(readonly) NSGradient *pathSeparatorGradientInactive;
@property(readonly) NSGradient *pathSeparatorGradient;
@property(readonly) NSImage *testRuntimeImage;
@property(readonly) NSImage *testClassImage;
@property(readonly) NSImage *testMethodImage;
@property(readonly) NSImage *controlIntegrationIcon;
@property(readonly) NSImage *integrationIcon;
@property(readonly) NSImage *botIcon;
@property(readonly) NSImage *ideProjectIcon;
@property(readonly) NSImage *canvasZoomInImage;
@property(readonly) NSImage *canvasZoomActualImage;
@property(readonly) NSImage *canvasZoomOutImage;
@property(readonly) NSImage *closeButtonImage;
@property(readonly) NSImage *alternateFilterFieldMenuImage;
@property(readonly) NSImage *filterFieldMenuImage;
@property(readonly) NSImage *filterFieldImageALL;
@property(readonly) NSImage *filterFieldImageANY;
@property(readonly) NSImage *alternateFilterFieldImage;
@property(readonly) NSImage *filterFieldImage;
@property(readonly) NSImage *analyticsPointUnresolvedImage;
@property(readonly) NSImage *analyticsPointResolvedImage;
@property(readonly) NSImage *analyticsLogLowSampleCountFrameCompressionImageOn;
@property(readonly) NSImage *analyticsLogLowSampleCountFrameCompressionImage;
@property(readonly) NSImage *analyticsLogLibraryFrameCompressionImageOn;
@property(readonly) NSImage *analyticsLogLibraryFrameCompressionImage;
@property(readonly) NSImage *consoleButtonClearImage;
@property(readonly) NSImage *toolbarButtonRestoreSnapshotImage;
@property(readonly) NSImage *toolbarButtonRefreshImage;
@property(readonly) NSImage *toolbarButtonDeleteImage;
@property(readonly) NSImage *toolbarButtonAddPopupImage;
@property(readonly) NSImage *toolbarButtonAddImage;
@property(readonly) NSImage *buildTemplate;
@property(readonly) NSImage *breakpointTemplate;
@property(readonly) NSImage *stopTemplate;
@property(readonly) NSImage *pauseTemplate;
@property(readonly) NSImage *profileTemplate;
@property(readonly) NSImage *testTemplate;
@property(readonly) NSImage *analyzeTemplate;
@property(readonly) NSImage *runTemplate;
@property(readonly) NSImage *inFieldGoToButtonSmall;
@property(readonly) NSImage *inFieldCopyButton;
@property(readonly) NSImage *inFieldChooseButtonSmall;
@property(readonly) NSImage *inFieldChooseButtonRegular;
@property(readonly) NSImage *scopeBarConfigurationShadowImage;
@property(readonly) NSImage *smallPullDownArrow;
@property(readonly) NSImage *offlineIndicatorSelected;
@property(readonly) NSImage *offlineIndicator;
@property(readonly) NSImage *statusClearImage;
@property(readonly) NSImage *statusIndeterminateImage;
@property(readonly) NSImage *statusUnavailableImage;
@property(readonly) NSImage *statusAvailableImage;
@property(readonly) NSImage *showHideViewOnRightAlternateTemplate;
@property(readonly) NSImage *showHideViewOnRightTemplate;
@property(readonly) NSImage *showHideViewOnLeftAlternateTemplate;
@property(readonly) NSImage *showHideViewOnLeftTemplate;
@property(readonly) NSImage *statusItemDeleteSelectedPressedImage;
@property(readonly) NSImage *statusItemDeletePressedImage;
@property(readonly) NSImage *statusItemDeleteSelectedImage;
@property(readonly) NSImage *statusItemDeleteImage;
@property(readonly) NSImage *statusItemAddSelectedPressedImage;
@property(readonly) NSImage *statusItemAddPressedImage;
@property(readonly) NSImage *statusItemAddSelectedImage;
@property(readonly) NSImage *statusItemAddImage;
@property(readonly) NSImage *smallLightCheckmarkImage;
@property(readonly) NSImage *smallDarkEncircledCheckmarkImage;
@property(readonly) NSImage *smallDarkCheckmarkImage;
@property(readonly) double interfaceBuilderNavigatorSlideAnimationDuration;
@property(readonly) double assetLibraryReorderAnimationDuration;
@property(readonly) double openQuicklyWindowResizeAnimationDuration;
@property(readonly) double activityAreaChangeAnimationDuration;
@property(readonly) double activityPopupCloseAnimationDuration;
@property(readonly) double activityPopupOpenAnimationDuration;
@property(readonly) double assistantStepAnimationDuration;
@property(readonly) double popupWindowFadeInAnimationDuration;
@property(readonly) double popupWindowScaleAnimationDuration;
@property(readonly) double textCompletionWindowResizeAnimationDuration;
@property(readonly) double textCompletionWindowFadeOutAnimationDuration;
@property(readonly) double textCompletionWindowFadeInAnimationDuration;
@property(readonly) double textVisualizationFadeAnimationDuration;
@property(readonly) double textAnnotationIndicatorAnimationDuration;
@property(readonly) double toggleSwitchAnimationDuration;
@property(readonly) double messageBubblePopAnimationDuration;
@property(readonly) double scopeBarRevealAnimationDuration;
@property(readonly) double hudPopupFadeOutAnimationDuration;
@property(readonly) double splitViewResizeAnimationDuration;
- (double)_adjustedMotionAnimationDuration:(double)arg1 ignoreShiftKey:(BOOL)arg2;
@property(readonly) double splitViewDividerSnappingTolerance;
@property(readonly) NSColor *devicesWindowViolatorBorderColor;
@property(readonly) NSColor *devicesWindowViolatorBackgroundColor;
@property(readonly) NSColor *projectEditorBuildSettingsGridColor;
@property(readonly) NSColor *infoHeaderDescriptionColor;
@property(readonly) NSColor *infoHeaderBigTitleColor;
@property(readonly) NSColor *infoHeaderBorderColor;
@property(readonly) NSColor *infoHeaderBackgroundColor2;
@property(readonly) NSColor *infoHeaderBackgroundColor;
@property(readonly) NSColor *accessibilityHighContrastControlInactiveBorderColor;
@property(readonly) NSColor *accessibilityHighContrastControlBorderColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientContainsOpeningURLEndColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientContainsOpeningURLStartColor;
@property(readonly) NSGradient *navigationHUDTemplateImageInnerGradient;
@property(readonly) struct CGColor *navigationHUDEditorContextInactiveSelectionGradientEndColor;
@property(readonly) struct CGColor *navigationHUDEditorContextInactiveSelectionGradientStartColor;
@property(readonly) struct CGColor *navigationHUDEditorContextActiveSelectionGradientEndColor;
@property(readonly) struct CGColor *navigationHUDEditorContextActiveSelectionGradientStartColor;
@property(readonly) NSColor *navigationHUDTabBarLayerInnerActiveSelectionShadowColor;
@property(readonly) NSColor *navigationHUDTabBarLayerInnerInactiveSelectionShadowColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientActiveSelectionEndColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientActiveSelectionStartColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientInactiveSelectionEndColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientInactiveSelectionStartColor;
@property(readonly) struct CGColor *navigationHUDTabBarOverflowIndicationColor;
@property(readonly) struct CGColor *navigationHUDLineHighlightColor;
@property(readonly) struct CGColor *navigationHUDLineColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientEndColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientStartColor;
@property(readonly) NSGradient *navigationHUDPlusImageGradient;
@property(readonly) struct CGColor *navigationHUDCoverFlowSelectedLayerShadowColor;
@property(readonly) struct CGColor *navigationHUDWindowLayerBorderColor;
@property(readonly) struct CGColor *navigationHUDWindowLayerBackgroundGradientEndColor;
@property(readonly) struct CGColor *navigationHUDWindowLayerBackgroundGradientStartColor;
@property(readonly) struct CGColor *navigationHUDTextShadowColor;
@property(readonly) NSColor *navigationHUDTextColor;
@property(readonly) NSColor *navigationHUDWindowBorderColor;
@property(readonly) NSGradient *navigationHUDWindowBackgroundGradient;
@property(readonly) NSColor *menuStrokeColor;
@property(readonly) NSColor *menuSecondaryColor;
@property(readonly) NSColor *menuWhiteColor;
@property(readonly) NSColor *ibDockGroupSeparatorColor;
@property(readonly) NSGradient *ibDockItemSelectionGradientInactive;
@property(readonly) NSColor *ibDockItemSelectionBorderColorInactive;
@property(readonly) NSGradient *ibDockItemSelectionGradientActive;
@property(readonly) NSColor *ibDockItemSelectionBorderColorActive;
@property(readonly) NSGradient *ibDocumentOutlineViewCapsuleHeaderGradient;
@property(readonly) NSColor *ibDockInactiveBackgroundColor;
@property(readonly) NSColor *ibDockActiveBackgroundColor;
@property(readonly) NSGradient *HUDPopUpHighlightGradient;
@property(readonly) NSColor *HUDPopUpBackgroundColor;
@property(readonly) NSColor *HUDPopUpBorderColor;
@property(readonly) NSColor *libraryTileViewBackgroundColor;
@property(readonly) NSColor *libraryRightClickedAssetBorderColor;
@property(readonly) NSColor *libraryInactiveSelectedAssetBorderColor;
@property(readonly) NSColor *librarySelectedAssetBorderColor;
@property(readonly) NSColor *libraryInactiveSelectedAssetBackgroundColor;
@property(readonly) NSColor *librarySelectedAssetBackgroundColor;
@property(readonly) NSColor *libraryAssetBorderColor;
@property(readonly) NSColor *libraryAssetBackgroundColor;
@property(readonly) struct CGColor *activityViewPopUpBackgroundColor;
@property(readonly) struct CGColor *activityViewPopUpLineCGColor;
@property(readonly) struct CGColor *activityViewProgressIndicatorBackgroundColorPopUp;
@property(readonly) NSColor *filterTokenIconColor;
@property(readonly) NSColor *tokenDefaultValueColor;
@property(readonly) NSColor *tokenDefaultKeyColor;
@property(readonly) NSColor *tokenSelectedValueColor;
@property(readonly) NSColor *tokenSelectedKeyColor;
@property(readonly) NSColor *imageCatalogSubtitleColor;
@property(readonly) NSColor *imageCatalogTitleColor;
@property(readonly) NSColor *imageCatalogVariationTitleColor;
@property(readonly) NSFont *imageCatalogVariationTitleFont;
@property(readonly) NSColor *imageCatalogIdiomTitleColor;
@property(readonly) NSFont *imageCatalogIdiomTitleFont;
@property(readonly) NSGradient *imageCatalogImageSetIdiomTitleBackground;
@property(readonly) NSFont *imageCatalogSubtitleFont;
@property(readonly) NSFont *imageCatalogTitleFont;
@property(readonly) NSColor *analyticsLogs_utilityDetailKeyColor;
@property(readonly) NSColor *analyticsLogs_nonConsecutiveThreadLineSeparatorColor;
@property(readonly) NSColor *analyticsLogs_consecutiveThreadLineSeparatorColor;
@property(readonly) NSColor *analyticsLogs_historicalFrameIconColor;
@property(readonly) NSColor *analyticsLogs_blameFrameIconColor;
@property(readonly) NSColor *analyticsLogs_blameThreadTextColor;
@property(readonly) NSColor *analyticsLogs_blameThreadHighlightColor;
@property(readonly) NSColor *bluePunchOutInactiveColor;
@property(readonly) NSColor *bluePunchOutColor;
@property(readonly) NSColor *blueOnStateTextColor;
@property(readonly) NSColor *reportColorGraphYellow;
@property(readonly) NSColor *reportColorGraphRed;
@property(readonly) NSColor *reportColorGraphGreen;
@property(readonly) NSColor *reportColorGraphBlue;
@property(readonly) NSColor *reportColorLightGray;
@property(readonly) NSColor *reportColorGray;
@property(readonly) NSColor *reportColorDarkGray;
@property(readonly) NSColor *reportColorBlue;
@property(readonly) NSColor *reportColorGreen;
@property(readonly) NSColor *reportCapacityOtherColor;
@property(readonly) NSColor *reportCapacityProcessColor;
@property(readonly) NSColor *reportCapacityUnusedColor;
@property(readonly) NSColor *reportCapacityBorderColor;
@property(readonly) CDStruct_bf6d4a14 reportContentMargins;
@property(readonly) NSColor *reportBackgroundColor;
@property(readonly) NSColor *reportSectionMidLabelColor;
@property(readonly) NSFont *reportSectionMidUnitLabelFont;
@property(readonly) NSFont *reportSectionMidNumberLabelFont;
@property(readonly) NSColor *reportSectionBigLabelColor;
@property(readonly) NSFont *reportSectionBigUnitLabelFont;
@property(readonly) NSFont *reportSectionBigNumberLabelFont;
@property(readonly) NSColor *reportSectionBackgroundColor;
@property(readonly) NSColor *reportSectionBorderColor;
@property(readonly) NSColor *reportSectionBackgroundLabelColor;
@property(readonly) NSFont *reportSectionBackgroundLabelFont;
@property(readonly) NSColor *reportSectionTitleLabelColor;
@property(readonly) NSFont *reportSectionTitleLabelFont;
@property(readonly) NSColor *reportTopSectionDescriptionColor;
@property(readonly) NSFont *reportTopSectionDescriptionFont;
@property(readonly) NSColor *reportTopSectionDescriptionLabelColor;
@property(readonly) NSFont *reportTopSectionDescriptionLabelFont;
@property(readonly) NSColor *reportTopSectionSubtitleColor;
@property(readonly) NSFont *reportTopSectionSubtitleFont;
@property(readonly) NSColor *reportTopSectionTitleLabelColor;
@property(readonly) NSFont *reportTopSectionTitleLabelFont;
@property(readonly) NSColor *headerSliceIssueStripeColor;
@property(readonly) NSGradient *headerSliceIssueBackgroundGradient;
@property(readonly) NSColor *headerSliceDisclosureButtonHighlightColor;
@property(readonly) NSColor *headerSliceDisclosureButtonColor;
@property(readonly) NSFont *headerSliceDisclosureButtonFont;
@property(readonly) NSColor *headerSliceLabelColor;
@property(readonly) NSFont *headerSliceLabelFont;
@property(readonly) NSColor *greenEmphasisBoxStrokeColor;
@property(readonly) NSColor *greenEmphasisBoxBackgroundColor;
@property(readonly) NSColor *selectedTokenColor;
@property(readonly) NSColor *tokenStrokeColor;
@property(readonly) NSColor *tokenBackgroundColor;
@property(readonly) NSFont *noContentMarkerFont;
@property(readonly) NSColor *findUnderlineColor4;
@property(readonly) NSColor *findUnderlineColor3;
@property(readonly) NSColor *findUnderlineColor2;
@property(readonly) NSColor *findUnderlineColor1;
@property(readonly) NSGradient *findBackgroundGradient4;
@property(readonly) NSGradient *findBackgroundGradient3;
@property(readonly) NSGradient *findBackgroundGradient2;
@property(readonly) NSGradient *findBackgroundGradient1;
@property(readonly) double scmBlameUncommittedHue;
@property(readonly) double scmBlameAgeHue;
@property(readonly) NSFont *diffButtonNumberFont;
@property(readonly) NSColor *diffButtonSelectedShadowColor;
@property(readonly) NSColor *diffButtonShadowColor;
@property(readonly) NSColor *scmBlameAnnotationLineColor;
@property(readonly) NSColor *inspectorDisabledSliverLabelColor;
@property(readonly) NSColor *inspectorSliverLabelColor;
@property(readonly) NSFont *inspectorSliverLabelFont;
@property(readonly) NSColor *inspectorSectionTitleColor;
@property(readonly) NSFont *inspectorSectionTitleFont;
@property(readonly) NSFont *lineNumberFont;
@property(readonly) NSColor *messageBubbleButtonForegroundColor;
@property(readonly) NSColor *messageBubbleButtonBackgroundColor;
@property(readonly) NSColor *scrollbarMarkerDiffConflictColor;
@property(readonly) NSColor *scrollbarMarkerDiffColor;
@property(readonly) NSColor *scrollbarMarkerBreakpointColor;
@property(readonly) NSColor *scrollbarMarkerRuntimeIssueColor;
@property(readonly) NSColor *scrollbarMarkerAnalyzerColor;
@property(readonly) NSColor *scrollbarMarkerWarningColor;
@property(readonly) NSColor *scrollbarMarkerErrorColor;
@property(readonly) NSColor *pageGuideColor;
@property(readonly) NSColor *analyzerFlowArrowsColor;
@property(readonly) NSFont *scmLogFont;
@property(readonly) NSColor *scmLogLightSubtextColor;
@property(readonly) NSColor *scmLogSubtextColor;
- (id)statusBadgeConflictColorForSelected:(BOOL)arg1;
@property(readonly) NSColor *statusBadgeConflictColor;
@property(readonly) NSColor *statusBadgeConflictHighlightColor;
- (id)statusBadgeForegroundColorForView:(id)arg1 selected:(BOOL)arg2;
- (id)statusBadgeBackgroundColorForView:(id)arg1 selected:(BOOL)arg2;
@property(readonly) NSColor *statusBadgeInactiveColor;
@property(readonly) NSColor *statusBadgeActiveGraphiteColor;
@property(readonly) NSColor *statusBadgeActiveAquaColor;
@property(readonly) NSColor *statusBadgeFocusedGraphiteColor;
@property(readonly) NSColor *statusBadgeFocusedAquaColor;
@property(readonly) NSColor *secondaryTextColor;
@property(readonly) NSGradient *navigatorSelectionActiveAquaGradient;
@property(readonly) NSFont *codeVoiceFont;
@property(readonly) NSFont *secondaryListFont;
@property(readonly) NSFont *boldListFont;
@property(readonly) NSFont *listFont;
@property(readonly) NSGradient *inactiveGradient;
@property(readonly) NSGradient *active1Gradient;
@property(readonly) NSColor *searchFieldVibrantInactiveBackgroundColor;
@property(readonly) NSColor *searchFieldVibrantActiveBackgroundColor;
@property(readonly) NSColor *searchFieldNonVibrantInactiveBackgroundColor;
@property(readonly) NSColor *searchFieldNonVibrantActiveBackgroundColor;
@property(readonly) NSColor *searchFieldKeyFocusBackgroundColor;
@property(readonly) NSColor *searchFieldVibrantPlaceholderTextColor;
@property(readonly) NSColor *searchFieldNonVibrantPlaceholderTextColor;
@property(readonly) NSColor *linkColor;
@property(readonly) NSColor *listBackgroundColor;
@property(readonly) NSColor *barBackgroundColor;
@property(readonly) NSColor *debugBarBackgroundColor;
@property(readonly) NSColor *jumpBarBackgroundColor;
@property(readonly) NSColor *inspectorAreaButtonBarBackgroundColor;
@property(readonly) NSColor *editorAreaBackgroundColor;
@property(readonly) NSColor *glassSeparatorColor;
@property(readonly) NSColor *blackShadow1Color;
@property(readonly) NSColor *parameterTextColor;
@property(readonly) NSColor *stroke6Color;
@property(readonly) NSColor *stroke5Color;
@property(readonly) NSColor *stroke4Color;
@property(readonly) NSColor *stroke3Color;
@property(readonly) NSColor *stroke2Color;
@property(readonly) NSColor *stroke1Color;
@property(readonly) NSColor *background4Color;
@property(readonly) NSColor *background3Color;
@property(readonly) NSColor *background2Color;
@property(readonly) NSColor *background1Color;
@property(readonly) NSColor *inactiveColor;
@property(readonly) NSColor *active2Color;
@property(readonly) NSColor *active1Color;
@property(readonly) NSColor *whiteColor;
@property(readonly) NSColor *blackColor;
@property(readonly) NSColor *windowBackgroundColor;
@property(readonly) NSAppearance *appearance;
- (id)appearanceNameOrPath;
@property(readonly) BOOL isDark;
@property(readonly) BOOL shouldUseMotionAnimations;
- (id)debugDescription;
- (id)_initWithFilePath:(id)arg1;

@end

