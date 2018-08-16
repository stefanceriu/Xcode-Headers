//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDERefactoringFileChangeSet.h>

@class IDEWorkspaceDocument, NSArray, NSString;

@interface IDEPlistRefactoringFileChangeSet : IDERefactoringFileChangeSet
{
    NSArray *_findResults;
    NSString *_newClassName;
    IDEWorkspaceDocument *_workspaceDocument;
}

+ (id)changeSetForFileAtPath:(id)arg1 transformation:(id)arg2 error:(id *)arg3;
@property __weak IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
@property(retain) NSString *newClassName; // @synthesize newClassName=_newClassName;
@property(retain) NSArray *findResults; // @synthesize findResults=_findResults;
- (void).cxx_destruct;
- (BOOL)commitChangesWithError:(id *)arg1;

@end

