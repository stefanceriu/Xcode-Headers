//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class SKEAssetCatalog;

@interface SKEAssetCatalogDocument : IDEEditorDocument
{
    SKEAssetCatalog *_assetCatalog;
}

- (void).cxx_destruct;
@property BOOL preferCompressedTextures;
@property BOOL interleaveGeometrySources;
@property BOOL forceYUp;
- (BOOL)writeSettings;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

