//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEiPhoneSupport/IDEiOSImageSectionDelegate-Protocol.h>

@class DVTGradientImageButton, DVTStackView_ML, IDEiOSTargetEditor, NSArray, NSPopUpButton, NSString, NSView;

@interface IDEiOSIconsAndLaunchImagesViewController : IDEViewController <IDEiOSImageSectionDelegate>
{
    NSArray *_imageSections;
    IDEiOSTargetEditor *_targetEditor;
    DVTStackView_ML *_contentStackView;
    NSView *_convertAssetCatalogSlice;
    NSView *_assetCatalogSlice;
    NSPopUpButton *_assetCatalogPopUpButton;
    DVTGradientImageButton *_assetCatalogGoToButton;
    NSArray *_assetCatalogWrappers;
}

+ (id)keyPathsForValuesAffectingImageTypeString;
@property(readonly) NSArray *assetCatalogWrappers; // @synthesize assetCatalogWrappers=_assetCatalogWrappers;
@property(retain) DVTGradientImageButton *assetCatalogGoToButton; // @synthesize assetCatalogGoToButton=_assetCatalogGoToButton;
@property(retain) NSPopUpButton *assetCatalogPopUpButton; // @synthesize assetCatalogPopUpButton=_assetCatalogPopUpButton;
@property(retain) NSView *assetCatalogSlice; // @synthesize assetCatalogSlice=_assetCatalogSlice;
@property(retain) NSView *convertAssetCatalogSlice; // @synthesize convertAssetCatalogSlice=_convertAssetCatalogSlice;
@property(retain) DVTStackView_ML *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(readonly) IDEiOSTargetEditor *targetEditor; // @synthesize targetEditor=_targetEditor;
@property(retain, nonatomic) NSArray *imageSections; // @synthesize imageSections=_imageSections;
- (void).cxx_destruct;
- (id)_contentStackCenteringView;
- (id)deploymentOS;
- (id)imageSection:(id)arg1 expandedValueForString:(id)arg2;
- (BOOL)statusBarHiddenForImageSection:(id)arg1;
- (id)iconFilePathSetsByIconBaseNameForImageSection:(id)arg1;
- (id)infoPlistCoordinatorForImageSection:(id)arg1;
- (BOOL)iPadTargeted;
- (BOOL)iPhoneTargeted;
@property(readonly) NSString *imageTypeString;
@property(readonly) int targetEditorImageType;
- (void)rebuildUI;
- (void)rebuildAssetCatalogMenu;
- (void)removeExistingPlistKeys;
- (void)goToAssetCatalog:(id)arg1;
- (void)selectAssetCatalogSet:(id)arg1;
- (void)convertToAssetCatalog:(id)arg1;
- (void)completeAssetCatalogMigration;
- (void)loadView;
- (id)initWithTargetEditor:(id)arg1;
- (void)primitiveInvalidate;

@end

