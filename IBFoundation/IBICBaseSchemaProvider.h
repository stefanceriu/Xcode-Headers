//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBICSchemaProvider.h"

@class IBICColorSpace, IBICFileType, IBICHeightClass, IBICIdiom, IBICLanguageDirection, IBICPlatform, IBICScale, IBICScreenWidth, IBICSubtype, IBICWidthClass, NSArray, NSString;

@interface IBICBaseSchemaProvider : NSObject <IBICSchemaProvider>
{
    IBICPlatform *_universalPlatform;
    IBICIdiom *_universalIdiom;
    IBICScale *_anyScale;
    IBICScale *_oneXScale;
    IBICScale *_twoXScale;
    IBICScale *_threeXScale;
    IBICFileType *_pngFileType;
    IBICFileType *_jpegFileType;
    IBICFileType *_pdfFileType;
    IBICFileType *_gifFileType;
    IBICWidthClass *_anyWidthClass;
    IBICWidthClass *_compactWidthClass;
    IBICWidthClass *_regularWidthClass;
    IBICHeightClass *_anyHeightClass;
    IBICHeightClass *_compactHeightClass;
    IBICHeightClass *_regularHeightClass;
    IBICColorSpace *_anyColorSpace;
    IBICColorSpace *_sRGBColorSpace;
    IBICColorSpace *_P3ColorSpace;
    IBICSubtype *_anySubtype;
    IBICScreenWidth *_anyScreenWidth;
    IBICLanguageDirection *_anyLanguageDirection;
    IBICLanguageDirection *_leftToRightLanguageDirection;
    IBICLanguageDirection *_rightToLeftLanguageDirection;
    NSArray *_cubeFaces;
    NSArray *_mipmapLevels;
}

- (void).cxx_destruct;
- (void)registerBaseDataSetComponentImplications:(id)arg1;
- (void)registerMipmapLevelSetComponentImplications:(id)arg1;
- (void)registerCubeTextureSetComponentImplications:(id)arg1;
- (void)registerFlatTextureSetComponentImplications:(id)arg1;
- (void)registerImageSetComponentImplications:(id)arg1;
- (void)applyGraphicsFeatureSetComponentImplicationsForSlotClass:(Class)arg1 schema:(id)arg2;
- (void)applyMemoryClassComponentImplicationsForSlotClass:(Class)arg1 schema:(id)arg2;
- (void)applyColorSpaceComponentImplicationsForSlotClass:(Class)arg1 schema:(id)arg2;
- (void)applyScaleComponentImplicationsForSlotClass:(Class)arg1 schema:(id)arg2;
- (void)registerSchemaComponents:(id)arg1;
- (void)registerSuggestionSets:(id)arg1;
- (void)registerGPUCapabilitySuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (void)registerSizeClassSuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (void)registerLanguageDirectionSuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (void)registerColorSpaceSuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (void)registerScaleSuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (id)registerIdiomSuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (void)captureExistingSlotComponents:(id)arg1;
- (void)registerSlotComponents:(id)arg1;
- (void)registerFileTypes:(id)arg1;
- (void)registerClasses:(id)arg1;
- (double)precedence;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

