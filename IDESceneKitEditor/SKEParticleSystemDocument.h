//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditorDocument.h"

#import "IDEDocumentStructureProviding.h"
#import "SKEDocumentProtocol.h"

@class DVTUndoManager, NSArray, NSString, NSURL, SCNAssetCatalog, SCNParticleSystem;

@interface SKEParticleSystemDocument : IDEEditorDocument <SKEDocumentProtocol, IDEDocumentStructureProviding>
{
    NSURL *_documentURL;
    SCNAssetCatalog *_assetCatalog;
    SCNParticleSystem *_particleSystem;
    id _inspectedSceneEditor;
}

+ (void)initialize;
@property(retain) id inspectedSceneEditor; // @synthesize inspectedSceneEditor=_inspectedSceneEditor;
- (void).cxx_destruct;
- (void)makeDocumentAssetCatalogCurrent;
- (void)refreshAssetCatalogWithURL:(id)arg1;
- (void)didReplaceChildMember:(id)arg1 ofMember:(id)arg2 byChildMember:(id)arg3;
- (void)willReplaceChildMember:(id)arg1 ofMember:(id)arg2 byChildMember:(id)arg3;
- (void)didRemoveChildMember:(id)arg1 fromMember:(id)arg2;
- (void)willRemoveChildMember:(id)arg1 fromMember:(id)arg2;
- (void)didAddChildMember:(id)arg1 toMember:(id)arg2;
- (void)willAddChildMember:(id)arg1 toMember:(id)arg2;
- (id)membersOfClass:(Class)arg1;
@property(readonly) SCNParticleSystem *particleSystem;
@property(readonly) BOOL supportsEditing;
- (void)upgradeToFileType:(id)arg1 upgradeForEdition:(BOOL)arg2;
@property(readonly) BOOL isArchivedSceneKitDocument;
- (void)updateChangeCount:(unsigned long long)arg1;
- (void)editorDocumentWillClose;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)canSave;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (BOOL)isTextureName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) DVTUndoManager *undoManager;

@end

