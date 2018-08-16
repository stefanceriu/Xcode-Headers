//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/DVTSourceControlIdentifiable-Protocol.h>

@class DVTSourceControlWorkingCopy, NSArray, NSMapTable, NSMutableSet, NSOperationQueue, NSString, NSURL;

@interface DVTSourceControlWorkspace : NSObject <DVTSourceControlIdentifiable>
{
    NSMutableSet *_workingCopies;
    NSMutableSet *_managedWorkingCopies;
    NSOperationQueue *_workspaceOperationQueue;
    NSString *__id;
    DVTSourceControlWorkingCopy *_primaryWorkingCopy;
    NSString *_relativePathToProject;
}

@property(copy) NSString *relativePathToProject; // @synthesize relativePathToProject=_relativePathToProject;
@property(retain) DVTSourceControlWorkingCopy *primaryWorkingCopy; // @synthesize primaryWorkingCopy=_primaryWorkingCopy;
@property(copy) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
- (id)blueprintWithRemoteRepositories:(id)arg1 includingManagedWorkingCopies:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)blueprintWithRemoteRepositories:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSURL *workspaceRootFolder;
- (id)workingCopiesMissingFromBlueprint:(id)arg1;
- (unsigned long long)compareToBlueprint:(id)arg1;
- (BOOL)representsBlueprint:(id)arg1;
- (id)blueprintIncludingManagedWorkingCopies:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)blueprintWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)filesAndStatusWithRemoteStatus:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)historySinceRevisionedBlueprint:(id)arg1 maximumLogItems:(long long)arg2 includeFilePaths:(BOOL)arg3 showMergeCommits:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)workingCopyForRemoteRepository:(id)arg1 inBlueprint:(id)arg2;
- (id)historyFromRevisions:(id)arg1 toRevisions:(id)arg2 inclusionType:(unsigned long long)arg3 maximumLogItems:(long long)arg4 searchString:(id)arg5 searchType:(unsigned long long)arg6 includeFilePaths:(BOOL)arg7 showMergeCommits:(BOOL)arg8 incrementalLogBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
@property(readonly) NSMapTable *initialRevisionsMapTable;
@property(readonly) NSMapTable *baseRevisionsMapTable;
@property(readonly) NSMapTable *headRevisionsMapTable;
- (id)_revisionTableWithRevison:(id)arg1;
- (id)forceUpdateWorkingCopiesFromBlueprint:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)forceUpdateWorkingCopiesLocations:(id)arg1 fromRepositories:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)workingCopyForRepositoryID:(id)arg1;
- (id)workingCopyForURL:(id)arg1;
- (id)_allWorkingCopies;
- (id)initWithPrimaryWorkingCopy:(id)arg1 relativePathToProject:(id)arg2 workingCopies:(id)arg3 managedWorkingCopyDirectories:(id)arg4;
- (void)addWorkingCopies:(id)arg1 managedWorkingCopyDirectories:(id)arg2;
- (id)initWithWorkingCopies:(id)arg1 managedWorkingCopyDirectories:(id)arg2;
- (id)init;
@property(readonly, copy) NSArray *allWorkingCopies;
@property(readonly, copy) NSArray *managedWorkingCopies;
@property(readonly, copy) NSArray *workingCopies;
- (id)_workingCopySortDescriptor;
- (BOOL)_isValid;
- (id)__id;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

