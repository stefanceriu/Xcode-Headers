//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDELibraryController.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface SKObjectLibraryController : IDELibraryController
{
    NSMutableDictionary *_targetObjectsCacheForSKLibrary;
    NSString *_currentCustomGroupIdentifier;
    NSString *_currentSKLibraryTitle;
    NSArray *_currentStaticObjectsForSKLibrary;
    NSArray *_currentDynamicObjectsForSKLibrary;
    NSMutableArray *_currentUserObjectsForSKLibrary;
    NSArray *_pasteboardTypes;
}

+ (id)activeController;
@property(readonly, nonatomic) NSArray *pasteboardTypes; // @synthesize pasteboardTypes=_pasteboardTypes;
- (void).cxx_destruct;
- (id)editorViewControllerForAsset:(id)arg1;
- (BOOL)canRemoveAsset:(id)arg1;
- (BOOL)canEditAsset:(id)arg1;
- (void)userDidEditAsset:(id)arg1;
- (BOOL)removeAssets:(id)arg1 error:(id *)arg2;
- (BOOL)createAsset:(id *)arg1 forLibrarySourceWithIdentifier:(id *)arg2 fromPasteboard:(id)arg3;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (BOOL)canCreateAssetsFromPasteboard:(id)arg1 targetingLibrarySourceIdentifier:(id *)arg2;
- (id)readableAssetPasteboardTypes;
@property(readonly, nonatomic) BOOL allowObjectLibrary;
- (void)libraryDidLoad;
- (void)refreshAssetsFromProvider:(id)arg1;
- (void)refreshAssetsFromDocument:(id)arg1;
- (void)activeEditorDocumentDidChange:(id)arg1;
- (void)clearCurrentCustomGroupIdentifier;
- (void)populateObjectLibrary;
- (void)updateObjectsLibraryArrayFromProvider:(id)arg1 forceUpdate:(BOOL)arg2;
@property(readonly, nonatomic) NSMutableArray *staticObjectLibraryAssets;
@property(readonly, nonatomic) NSString *objectsLibraryCustomGroupIdentifier;
@property(readonly, nonatomic) NSString *objectsLibraryTitle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

