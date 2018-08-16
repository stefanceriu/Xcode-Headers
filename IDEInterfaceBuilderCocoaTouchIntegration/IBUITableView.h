//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIScrollView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBUIRefreshControl, IBUITableViewLayoutInfo, IBUITableViewSection, IBUIView, NSArray, NSColor, NSDictionary, NSFont, NSMutableDictionary, NSShadow, NSString, NSValue;

@interface IBUITableView : IBUIScrollView <IBDocumentArchiving>
{
    NSShadow *_shadowBoxShadow;
    IBUITableViewSection *_prototypeSection;
    NSMutableDictionary *_compiledPrototypeNIBs;
    IBUITableViewLayoutInfo *_hintedSectionLayoutInfo;
    BOOL _allowsSelection;
    BOOL _allowsSelectionDuringEditing;
    BOOL _allowsMultipleSelection;
    BOOL _allowsMultipleSelectionDuringEditing;
    BOOL _springLoaded;
    BOOL _ibInsetsContentViewsToSafeArea;
    int _style;
    int _separatorStyle;
    NSColor *_separatorColor;
    long long _sectionIndexMinimumDisplayRowCount;
    double _rowHeight;
    double _estimatedRowHeight;
    double _sectionHeaderHeight;
    double _estimatedSectionHeaderHeight;
    double _sectionFooterHeight;
    double _estimatedSectionFooterHeight;
    NSArray *_sections;
    IBUIView *_tableHeaderView;
    IBUIView *_tableFooterView;
    IBUIRefreshControl *_refreshControl;
    NSColor *_sectionIndexColor;
    NSColor *_sectionIndexBackgroundColor;
    NSColor *_sectionIndexTrackingBackgroundColor;
    NSValue *_separatorInset;
    long long _separatorInsetReference;
    long long _dataMode;
    IBUITableViewLayoutInfo *_cachedSectionLayoutInfo;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingDefaultBackgroundColor;
+ (CDStruct_c519178c)defaultSeparatorInset;
+ (id)keyPathsForValuesAffectingIbInspectedEditingSelectionType;
+ (id)keyPathsForValuesAffectingIbInspectedSelectionType;
+ (id)keyPathsForValuesAffectingIbInspectedNumberOfSections;
+ (id)keyPathsForValuesAffectingIbInspectedSeparatorInsetsMaxX;
+ (id)keyPathsForValuesAffectingIbInspectedSeparatorInsetsMinX;
+ (id)keyPathsForValuesAffectingIbInspectedSeparatorInsetType;
+ (id)keyPathsForValuesAffectingIbInspectedSeparatorInset;
+ (id)keyPathsForValuesAffectingIbInspectedNumberOfPrototypes;
+ (id)keyPathsForValuesAffectingIbInspectedDefaultSectionHeaderFooterHeight;
+ (id)keyPathsForValuesAffectingIbInspectedEstimatedSectionFooterHeight;
+ (id)keyPathsForValuesAffectingIbInspectedSectionFooterHeight;
+ (id)keyPathsForValuesAffectingIbInspectedEstimatedSectionHeaderHeight;
+ (id)keyPathsForValuesAffectingIbInspectedSectionHeaderHeight;
+ (id)keyPathsForValuesAffectingIbInspectedEstimatedRowHeight;
+ (id)keyPathsForValuesAffectingIbInspectedRowHeight;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy, nonatomic) NSDictionary *compiledPrototypeNIBs; // @synthesize compiledPrototypeNIBs=_compiledPrototypeNIBs;
@property(retain, nonatomic) IBUITableViewLayoutInfo *cachedSectionLayoutInfo; // @synthesize cachedSectionLayoutInfo=_cachedSectionLayoutInfo;
@property(nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) long long separatorInsetReference; // @synthesize separatorInsetReference=_separatorInsetReference;
@property(copy, nonatomic) NSValue *separatorInset; // @synthesize separatorInset=_separatorInset;
@property(copy, nonatomic) NSColor *sectionIndexTrackingBackgroundColor; // @synthesize sectionIndexTrackingBackgroundColor=_sectionIndexTrackingBackgroundColor;
@property(copy, nonatomic) NSColor *sectionIndexBackgroundColor; // @synthesize sectionIndexBackgroundColor=_sectionIndexBackgroundColor;
@property(copy, nonatomic) NSColor *sectionIndexColor; // @synthesize sectionIndexColor=_sectionIndexColor;
@property(retain, nonatomic) IBUIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) IBUIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) IBUIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) BOOL ibInsetsContentViewsToSafeArea; // @synthesize ibInsetsContentViewsToSafeArea=_ibInsetsContentViewsToSafeArea;
@property(nonatomic) double estimatedSectionFooterHeight; // @synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight;
@property(nonatomic) double sectionFooterHeight; // @synthesize sectionFooterHeight=_sectionFooterHeight;
@property(nonatomic) double estimatedSectionHeaderHeight; // @synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight;
@property(nonatomic) double sectionHeaderHeight; // @synthesize sectionHeaderHeight=_sectionHeaderHeight;
@property(nonatomic) double estimatedRowHeight; // @synthesize estimatedRowHeight=_estimatedRowHeight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic, getter=isSpringLoaded) BOOL springLoaded; // @synthesize springLoaded=_springLoaded;
@property BOOL allowsMultipleSelectionDuringEditing; // @synthesize allowsMultipleSelectionDuringEditing=_allowsMultipleSelectionDuringEditing;
@property BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property BOOL allowsSelectionDuringEditing; // @synthesize allowsSelectionDuringEditing=_allowsSelectionDuringEditing;
@property BOOL allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(nonatomic) long long sectionIndexMinimumDisplayRowCount; // @synthesize sectionIndexMinimumDisplayRowCount=_sectionIndexMinimumDisplayRowCount;
@property(copy, nonatomic) NSColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) int style; // @synthesize style=_style;
@property(readonly) IBUITableViewSection *prototypeSection; // @synthesize prototypeSection=_prototypeSection;
- (void).cxx_destruct;
- (id)marshalledCellSummary;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)subtitleString;
- (id)titleString;
- (id)textShadow;
- (id)textColor;
- (id)shadowBoxShadow;
- (id)prototypeAtPoint:(struct CGPoint)arg1;
- (id)sectionAtPoint:(struct CGPoint)arg1 includePrototypeSection:(BOOL)arg2;
- (id)closestSectionToPoint:(struct CGPoint)arg1 includePrototypeSection:(BOOL)arg2;
- (void)sizeVerticallyToFit;
- (struct CGRect)usedBackgroundRect;
- (struct CGRect)unusedBackgroundRect;
- (BOOL)drawsUnusedBackgroundDropShadow;
- (BOOL)coversUnusedBackground;
@property(readonly) NSFont *footerTitleFont;
@property(readonly) NSFont *headerTitleFont;
@property(readonly) unsigned long long footerTextAlignment;
@property(readonly) unsigned long long headerTextAlignment;
- (struct CGRect)footerTitleRectForSection:(id)arg1;
- (struct CGRect)headerTitleRectForSection:(id)arg1;
- (struct CGRect)frameForCell:(id)arg1;
- (struct CGRect)footerFrameForSection:(id)arg1;
- (struct CGRect)headerFrameForSection:(id)arg1;
- (struct CGRect)frameForSection:(id)arg1;
- (void)provideHeightDeltaHint:(double)arg1 forCell:(id)arg2;
- (struct CGSize)contentSize;
- (id)sectionLayoutInfo;
- (BOOL)computesContentSize;
- (void)subviewFrameChanged:(id)arg1;
- (void)layoutSubviews;
- (void)verifyFramesInSyncForViewsForAutoresizingMasks;
- (id)defaultBackgroundColor;
- (BOOL)isOpaque;
- (void)registerPrototypeNIBData:(id)arg1 forReuseIdentifier:(id)arg2;
- (void)registerForHeaderAndFooterNotifications:(id)arg1;
- (void)sectionHeaderOrFooterViewSizeDidChange:(id)arg1;
- (void)sectionHeaderOrFooterViewDidChange:(id)arg1;
- (void)sectionHeaderOrFooterTitleDidChange:(id)arg1;
- (void)section:(id)arg1 cellDidChangeBackgroundColor:(id)arg2;
- (void)section:(id)arg1 cellDidChangeRowHeight:(id)arg2;
- (void)section:(id)arg1 didChangeCells:(id)arg2 to:(id)arg3;
@property(copy) NSArray *prototypes;
- (id)sectionsIncludingPrototypes;
- (BOOL)isGroupStyle;
- (void)populateGeometryMarshallingContext:(id)arg1;
- (void)populateCachedGeometryInfos:(id)arg1;
- (void)unarchiveBackgroundColor:(id)arg1;
- (void)archiveBackgroundColor:(id)arg1;
- (void)unarchiveSeparatorStyle:(id)arg1;
- (void)archiveSeparatorStyle:(id)arg1;
- (void)decodeBackgroundColor:(id)arg1;
- (void)encodeBackgroundColor:(id)arg1;
- (void)decodeSeparatorInset:(id)arg1;
- (void)encodeSeparatorInset:(id)arg1;
- (void)decodeSeparatorStyle:(id)arg1;
- (void)encodeSeparatorStyle:(id)arg1;
- (void)setUnarchivedSeparatorStyle:(int)arg1 forDocument:(id)arg2;
- (int)archivedSeparatorStyleForDocument:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) int effectiveSeparatorStyle;
@property(readonly, nonatomic) int defaultSeparatorStyle;
- (void)dealloc;
- (id)ibPreviewingRegistrantSourceViewInDocument:(id)arg1;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (void)ibCaptureStoryboardCompilationResult:(id)arg1 fromCompilationUnit:(id)arg2;
- (void)ibStoryboardPrepareForSeparatingChild:(id)arg1 intoCompilationUnit:(id)arg2;
- (int)ibStoryboardSeparationTypeForChild:(id)arg1 storyboardEquivalent:(id)arg2;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibInvalidateWarningsAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (BOOL)ibShouldAcceptSectionsAsSections;
- (BOOL)ibShouldAcceptCellsAsPrototypes;
- (BOOL)ibShouldAcceptCellsAsNewSection;
- (BOOL)ibShouldSendDraggedCellsToExistingSection;
- (BOOL)ibCanBeTableViewBracketingView;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibPasteboardTypes;
- (BOOL)ibCanIncrementallyMarshalKeyPath:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (struct CGSize)preferredBracketingViewSize;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibAllowsScrollingInEditor;
- (BOOL)ibSupportsNilBackgroundColor;
- (void)ibRemoveChildren:(id)arg1;
- (void)setIbInspectedEditingSelectionType:(long long)arg1;
- (long long)ibInspectedEditingSelectionType;
- (void)setIbInspectedSelectionType:(long long)arg1;
- (long long)ibInspectedSelectionType;
- (void)setIbInspectedStyle:(int)arg1;
- (int)ibInspectedStyle;
- (void)setIbInspectedDataMode:(long long)arg1;
- (void)convertStaticCellsToPrototypes;
- (void)convertPrototypesToStaticCells;
- (long long)ibInspectedDataMode;
- (void)setIbInspectedNumberOfSections:(long long)arg1;
- (long long)ibInspectedNumberOfSections;
- (void)setIbInspectedSeparatorInsetsMaxX:(double)arg1;
- (double)ibInspectedSeparatorInsetsMaxX;
- (void)setIbInspectedSeparatorInsetsMinX:(double)arg1;
- (double)ibInspectedSeparatorInsetsMinX;
@property(nonatomic) long long ibInspectedSeparatorInsetType;
@property(nonatomic) CDStruct_c519178c ibInspectedSeparatorInset;
- (void)setIbInspectedNumberOfPrototypes:(long long)arg1;
- (long long)ibInspectedNumberOfPrototypes;
- (double)ibInspectedDefaultEstimatedSectionHeaderFooterHeight;
- (double)ibInspectedDefaultSectionHeaderFooterHeight;
- (double)ibInspectedDefaultEstimatedRowHeight;
- (double)ibInspectedDefaultRowHeight;
- (void)setIbInspectedEstimatedSectionFooterHeight:(id)arg1;
- (id)ibInspectedEstimatedSectionFooterHeight;
- (void)setIbInspectedSectionFooterHeight:(id)arg1;
- (id)ibInspectedSectionFooterHeight;
- (void)setIbInspectedEstimatedSectionHeaderHeight:(id)arg1;
- (id)ibInspectedEstimatedSectionHeaderHeight;
- (void)setIbInspectedSectionHeaderHeight:(id)arg1;
- (id)ibInspectedSectionHeaderHeight;
- (void)setIbInspectedEstimatedRowHeight:(id)arg1;
- (id)ibInspectedEstimatedRowHeight;
- (void)setIbInspectedRowHeight:(id)arg1;
- (id)ibInspectedRowHeight;
- (void)copyAndPaste:(id)arg1;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (id)ibEditorClass;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

