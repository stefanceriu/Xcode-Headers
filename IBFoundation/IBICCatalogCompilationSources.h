//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBICCatalogCollection, IBICCatalogCompilerResult, IBICStickerPack, NSMutableDictionary, NSMutableSet, NSSet;

@interface IBICCatalogCompilationSources : NSObject
{
    NSMutableDictionary *_itemsByPhase;
    NSMutableSet *_pathsToDeleteAtEndOfCompilation;
    IBICCatalogCollection *_catalogCollection;
    NSSet *_ignoredItems;
    NSSet *_itemsForWriting;
    NSSet *_itemsForCARCompiler;
    NSSet *_itemsForSpriteAtlasCompiler;
    NSSet *_itemsForIconCompiler;
    NSSet *_itemsForBrandAssetCollectionsInfoPlistGeneration;
    IBICStickerPack *_itemForStickerPack;
    IBICCatalogCompilerResult *_selectionResult;
}

@property(readonly) IBICCatalogCompilerResult *selectionResult; // @synthesize selectionResult=_selectionResult;
@property(retain) IBICStickerPack *itemForStickerPack; // @synthesize itemForStickerPack=_itemForStickerPack;
@property(retain) NSSet *itemsForBrandAssetCollectionsInfoPlistGeneration; // @synthesize itemsForBrandAssetCollectionsInfoPlistGeneration=_itemsForBrandAssetCollectionsInfoPlistGeneration;
@property(retain) NSSet *itemsForIconCompiler; // @synthesize itemsForIconCompiler=_itemsForIconCompiler;
@property(retain) NSSet *itemsForSpriteAtlasCompiler; // @synthesize itemsForSpriteAtlasCompiler=_itemsForSpriteAtlasCompiler;
@property(retain) NSSet *itemsForCARCompiler; // @synthesize itemsForCARCompiler=_itemsForCARCompiler;
@property(retain) NSSet *itemsForWriting; // @synthesize itemsForWriting=_itemsForWriting;
@property(retain) NSSet *ignoredItems; // @synthesize ignoredItems=_ignoredItems;
@property(readonly) NSSet *pathsToDeleteAtEndOfCompilation; // @synthesize pathsToDeleteAtEndOfCompilation=_pathsToDeleteAtEndOfCompilation;
@property(retain) IBICCatalogCollection *catalogCollection; // @synthesize catalogCollection=_catalogCollection;
- (void).cxx_destruct;
- (id)description;
- (void)addPathToDeleteAtEndOfCompilation:(id)arg1;
- (id)allItems;
- (id)itemsForPhase:(id)arg1;
- (void)setItems:(id)arg1 forPhase:(id)arg2;
- (id)init;

@end

