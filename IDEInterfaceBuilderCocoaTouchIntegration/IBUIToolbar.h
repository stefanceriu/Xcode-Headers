//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import "IBDocumentArchiving.h"
#import "IBUIEditorDecoratableView.h"
#import "IBUIViewCachedItemFramesDictionaryInfoDelegate.h"
#import "NSCoding.h"

@class IBMutableIdentityDictionary, NSArray, NSColor, NSMutableArray, NSString;

@interface IBUIToolbar : IBUIView <IBDocumentArchiving, NSCoding, IBUIEditorDecoratableView, IBUIViewCachedItemFramesDictionaryInfoDelegate>
{
    IBMutableIdentityDictionary *cachedItemFrames;
    IBMutableIdentityDictionary *cachedTitleRects;
    IBMutableIdentityDictionary *cachedItemImages;
    long long barStyle;
    NSMutableArray *items;
    NSArray *observedSubviews;
    BOOL isTopBar;
    BOOL translucent;
    NSColor *barTintColor;
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (id)ibObservedPropertiesForInheritableMetricsInvalidation;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy, nonatomic) NSColor *barTintColor; // @synthesize barTintColor;
@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setObservedSubviews:(id)arg1;
- (void)subviewFrameChanged:(id)arg1;
- (double)estimatedMaximumAvailableWidth;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (id)imageOfItem:(id)arg1;
- (void)_setCachedItemImagesFromBarItemImagesArray:(id)arg1;
- (id)itemImages;
- (struct CGRect)titleRectForItem:(id)arg1;
- (id)titleRects;
- (struct CGRect)frameForItem:(id)arg1;
- (id)itemFrames;
- (void)populateCachedGeometryInfos:(id)arg1;
- (void)configureFullSceneUpdateRequest:(id)arg1;
- (void)enumerateCachedImageKeyPaths:(CDUnknownBlockType)arg1;
- (id)localExtraMarshalledAttributesKeyPaths;
- (void)validateTopBarIfNeeded;
- (void)setTopBar:(BOOL)arg1;
- (BOOL)isTopBar;
- (BOOL)effectiveIsTopBar;
- (void)setBarStyle:(long long)arg1;
- (long long)barStyle;
- (void)setItems:(id)arg1;
- (BOOL)ignoreItemCountMismatchRadar23282644ForCachedItemFramesDictionaryInfo:(id)arg1;
- (id)orderedItemsForCachedItemFramesDictionaryInfo:(id)arg1;
- (id)items;
- (void)removeItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (Class)barMetricsClass;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibWantsPlaceholderContainingViewController;
- (void)editorView:(id)arg1 drawDecoratorInRect:(struct CGRect)arg2 overlayView:(id)arg3;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
- (id)ibComparableToolbarColor;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (BOOL)ibCanBeCollectionViewBackgroundView;
- (BOOL)ibCanBeTableViewBracketingView;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (long long)ibPreferredResizeDirection;
- (id)ibWidgetType;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (BOOL)ibArchivesToolbarItems;
- (id)ibEditorClass;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

