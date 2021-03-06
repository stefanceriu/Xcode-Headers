//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDERefactoringResult-Protocol.h>

@class DVTFilePath, NSArray, NSMutableArray, NSString;

@interface IDERefactoringFileChangeSet : NSObject <IDERefactoringResult>
{
    NSMutableArray *_changes;
    DVTFilePath *_filePath;
    DVTFilePath *_tempFilePath;
    NSString *_newName;
}

+ (id)changeSetForFileAtPath:(id)arg1 transformation:(id)arg2 error:(id *)arg3;
@property(retain) NSString *newName; // @synthesize newName=_newName;
@property(readonly) NSArray *changes; // @synthesize changes=_changes;
@property(readonly) DVTFilePath *tempFilePath; // @synthesize tempFilePath=_tempFilePath;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (BOOL)commitChangesWithError:(id *)arg1;
- (id)resultTempFilePath;
- (id)resultNewFileName;
- (id)resultFilePath;
- (BOOL)resultIsEditable;
@property(readonly, copy) NSString *description;
- (BOOL)willRenameFile;
- (id)newFilePath;
- (void)addChange:(id)arg1;
- (long long)numberOfChanges;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

