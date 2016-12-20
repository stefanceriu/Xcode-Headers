//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditorDocument.h"

#import "GTFActionEditorClientDocument.h"
#import "GTFActionLibraryUndoDelegate.h"
#import "IDEDocumentStructureProviding.h"
#import "IDEMediaLibraryDelegate.h"
#import "SCNExternalTextureSource.h"
#import "SKEDocumentProtocol.h"

@class DVTNotificationToken, DVTUndoManager, GTFActionLibrary, IDEContainer, IDEMediaResourceFoldingStrategy, IDEMediaResourceVariantContext, IDENavigableItemCoordinator, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, NSURL, SCNAssetCatalog, SCNNode, SCNScene, SCNSceneSource, SKEActionEditor, SKEAdjustSceneWindowController, SKEDocumentGroup, SKEDocumentNavigableItem, SKEMediaHelper, SKESceneEditor;

@interface SKESceneDocument : IDEEditorDocument <SKEDocumentProtocol, IDEDocumentStructureProviding, IDEMediaLibraryDelegate, GTFActionEditorClientDocument, GTFActionLibraryUndoDelegate, SCNExternalTextureSource>
{
    SCNScene *_scene;
    SCNSceneSource *_sceneSource;
    SCNAssetCatalog *_assetCatalog;
    NSURL *_cachedDestinationURL;
    SKEMediaHelper *_mediaHelper;
    IDEContainer *_resourceProvidingContainer;
    GTFActionLibrary *_actionLibrary;
    NSArray *_animationCache;
    SKEDocumentGroup *_sceneGraphGroup;
    SKEDocumentGroup *_libraryGroup;
    NSMapTable *_librarySubGroups;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    SKEDocumentNavigableItem *_sceneGraphNavigableItem;
    SKEDocumentNavigableItem *_libraryNavigableItem;
    NSMutableArray *_operations;
    DVTNotificationToken *_availablePointsOfViewListNeedsUpdateObservingToken;
    SKEAdjustSceneWindowController *_adjustSceneWindowController;
    BOOL _isUpgradingToDifferentFileType;
    IDEMediaResourceVariantContext *_variantContext;
    id <DVTInvalidation> _variantContextKVOToken;
    IDEMediaResourceFoldingStrategy *_foldingStrategy;
    int _assetCatalogClients;
    NSMutableDictionary *_fileBasedImageCache;
    SKESceneEditor *_inspectedSceneEditor;
    SKEActionEditor *_inspectedActionEditor;
}

+ (id)disjointNodeHierarchiesFromNodes:(id)arg1 strategy:(unsigned long long)arg2;
+ (BOOL)isMember:(id)arg1 aDescendantOfMember:(id)arg2 resultIfEqual:(BOOL)arg3;
+ (id)defaultSceneOptions;
+ (void)invertTransparencyOfMaterialsInSceneScource:(id)arg1 isEdit:(BOOL)arg2;
+ (id)imageMediaTypes;
+ (void)initialize;
@property(retain) SKEActionEditor *inspectedActionEditor; // @synthesize inspectedActionEditor=_inspectedActionEditor;
@property(retain) SKESceneEditor *inspectedSceneEditor; // @synthesize inspectedSceneEditor=_inspectedSceneEditor;
- (void).cxx_destruct;
- (BOOL)ske_isNode;
- (id)undoManagerForActionLibrary:(id)arg1;
@property(readonly) GTFActionLibrary *actionLibrary;
@property(readonly, nonatomic) long long actionEditorClientDocumentType;
- (id)resourceProviderSuggestedSceneNamesToURLs:(id *)arg1;
- (id)resourceProviderSuggestedParticleSystemNamesToFilePaths:(id *)arg1;
- (BOOL)isTextureName:(id)arg1;
- (BOOL)isTextureKnown:(id)arg1;
- (id)textureForName:(id)arg1;
- (id)resourceProviderSuggestedImagePaths;
- (BOOL)resourceProviderImageNameIsKnown:(id)arg1;
- (id)resourceProviderImageForImageNamed:(id)arg1;
- (void)setResourceProvidingContainer:(id)arg1;
- (id)relativeURLFromURLOfAssetWithinAssetCatalog:(id)arg1;
- (id)absoluteURLForReferenceNodeWithinAssetCatalog:(id)arg1;
- (id)referenceNodeWithinAssetCatalogWithRelativeURL:(id)arg1;
- (id)unarchivedObjectWithinAssetCatalogWithData:(id)arg1;
- (void)makeDocumentAssetCatalogCurrent;
- (void)refreshAssetCatalogWithURL:(id)arg1;
- (id)ideModelObjectTypeIdentifier;
- (void)upgradeToArchivedSceneKitDocumentFileTypeAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)bakeLightProbesForNodes:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)bakeGeometryForNodes:(id)arg1 settings:(CDStruct_862f26a3)arg2 resourceEnclosingFolderPath:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addDocumentOperation:(id)arg1;
- (void)removeOperation:(id)arg1;
- (void)cancelAllOperations;
@property(readonly) NSArray *operations;
- (void)removeMembersFromDocument:(id)arg1 actionNameForUndoManager:(id)arg2;
- (void)removeMaterialsAtIndexes:(id)arg1 fromGeometry:(id)arg2;
- (void)removeMaterials:(id)arg1 fromGeometry:(id)arg2;
- (void)moveMaterialAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 geometry:(id)arg3;
- (void)addMaterial:(id)arg1 atIndex:(unsigned long long)arg2 geometry:(id)arg3;
- (void)addMaterialToGeometry:(id)arg1;
- (void)removeNodeAttributeOfClass:(Class)arg1 fromNode:(id)arg2;
- (void)replaceNodeAttribute:(id)arg1 ofClass:(Class)arg2 node:(id)arg3;
- (void)replaceSharedNodeAttribute:(id)arg1 withAttribute:(id)arg2;
- (void)addNodeAttributeOfClass:(Class)arg1 toNode:(id)arg2;
- (void)makeNodes:(id)arg1 childNodesOf:(id)arg2;
- (void)reparentNodes:(id)arg1 underNode:(id)arg2 index:(unsigned long long)arg3;
- (void)flattenNode:(id)arg1;
- (void)duplicateNode:(id)arg1;
- (void)deleteManipulableItems:(id)arg1;
- (void)addManipulableItems:(id)arg1;
- (void)deleteNode:(id)arg1;
- (void)addNewChildToNode:(id)arg1;
- (void)didReplaceChildMember:(id)arg1 ofMember:(id)arg2 byChildMember:(id)arg3;
- (void)willReplaceChildMember:(id)arg1 ofMember:(id)arg2 byChildMember:(id)arg3;
- (void)didRemoveChildMember:(id)arg1 fromMember:(id)arg2;
- (void)willRemoveChildMember:(id)arg1 fromMember:(id)arg2;
- (void)didAddChildMember:(id)arg1 toMember:(id)arg2;
- (void)willAddChildMember:(id)arg1 toMember:(id)arg2;
- (void)makeDocumentAcceptContentsOfPasteboard:(id)arg1 withPotentialReceivers:(id)arg2 actionNameForUndoManager:(id)arg3;
- (void)makeMember:(id)arg1 acceptContentsOfPasteboard:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)canMember:(id)arg1 acceptContentsOfPasteboard:(id)arg2;
- (void)putMembers:(id)arg1 inPasteboard:(id)arg2;
- (BOOL)isMemberRootNode:(id)arg1;
- (id)_groupForMember:(id)arg1;
- (void)_buildGroupsAndRootNavigableItems;
@property(readonly) SKEDocumentNavigableItem *sceneGraphNavigableItem;
@property(readonly) NSArray *rootNavigableItems;
- (void)_sanitizeMembers;
- (id)membersOfClass:(Class)arg1;
- (void)_addChildMembersOfMember:(id)arg1 ofClass:(Class)arg2 toSet:(id)arg3;
@property(readonly) SCNNode *defaultPointOfView;
@property(readonly) NSArray *availablePointsOfView;
- (void)editorDocumentWillClose;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(unsigned long long)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)updateChangeCount:(unsigned long long)arg1;
- (BOOL)canSave;
@property(readonly) SKEMediaHelper *mediaHelper;
- (void)upgradeToFileType:(id)arg1 upgradeForEdition:(BOOL)arg2;
@property(readonly) BOOL supportsEditing;
@property(readonly) BOOL isColladaDocument;
- (BOOL)fileTypeIsColladaDocument:(id)arg1;
@property(readonly) BOOL isArchivedSceneKitDocument;
- (BOOL)fileTypeIsArchivedSceneKitDocument:(id)arg1;
- (id)errorForErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)adjustDAESceneAfterLoading;
- (id)authoringToolName;
- (void)restoreSceneGraphAfterExport:(id)arg1;
- (void)cleanSceneGraphForExport:(id *)arg1;
@property(readonly) NSArray *ideTopLevelStructureObjects;
@property(readonly) SCNSceneSource *sceneSource;
@property(readonly) SCNScene *scene;
- (void)_updateMediaCachesWithAdded:(id)arg1 andRemoved:(id)arg2;
- (id)resourceNamed:(id)arg1 ofMediaType:(id)arg2;
- (void)releaseAssetCatalogEditor;
- (void)initAssetCatalogEditor;
- (void)initAssetCatalogLink;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) DVTUndoManager *undoManager;

@end

