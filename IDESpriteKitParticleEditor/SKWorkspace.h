//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDESpriteKitParticleEditor/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTObservingToken, DVTStackBacktrace, IDEWorkspace, NSMutableSet, NSSet, NSString, NSURL, SKAssetManager, SKResourceManager, SKWorkspacePreferences;
@protocol DVTInvalidation;

@interface SKWorkspace : NSObject <DVTInvalidation>
{
    id <DVTInvalidation> _fileObserverToken;
    NSMutableSet *_workspaceFilePaths;
    NSMutableSet *_cachedEditorDocuments;
    DVTObservingToken *_allEditorDocumentsKVOToken;
    NSMutableSet *_retainedDocuments;
    DVTDelayedInvocation *_releaseInvocation;
    SKResourceManager *_resourceManager;
    SKWorkspacePreferences *_preferences;
    SKAssetManager *_assetManager;
    IDEWorkspace *_ideWorkspace;
    NSURL *_url;
}

+ (id)workspaceForIDEWorkspace:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) IDEWorkspace *ideWorkspace; // @synthesize ideWorkspace=_ideWorkspace;
@property(readonly, nonatomic) NSSet *workspaceFilePaths; // @synthesize workspaceFilePaths=_workspaceFilePaths;
- (void).cxx_destruct;
- (id)editorDocumentForURL:(id)arg1;
- (id)retainedDocumentWithFileNamed:(id)arg1;
- (id)retainedDocumentForURL:(id)arg1;
- (id)allFilesPathsInWorkspaceOfType:(id)arg1;
- (id)fileObserverWithUpdate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *editorDocuments;
@property(readonly, nonatomic) SKAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(readonly, nonatomic) SKWorkspacePreferences *preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) SKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
- (void)_releaseEditorDocuments;
- (void)primitiveInvalidate;
- (id)initWithIDEWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

