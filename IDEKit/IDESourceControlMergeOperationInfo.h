//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlOperationInfo.h>

#import <IDEKit/IDESourceControlBranchingOperationInfoProtocol-Protocol.h>
#import <IDEKit/IDESourceControlConflictInfoProtocol-Protocol.h>

@class IDESourceControlBranch, NSMutableDictionary, NSString;

@interface IDESourceControlMergeOperationInfo : IDESourceControlOperationInfo <IDESourceControlBranchingOperationInfoProtocol, IDESourceControlConflictInfoProtocol>
{
    IDESourceControlBranch *_mergeBranch;
    IDESourceControlBranch *_targetBranch;
    NSString *_currentRevisionIdentifier;
    NSString *_branchRevisionIdentifier;
    NSString *_ancestorRevisionIdentifier;
    NSString *_remoteURLToMerge;
    NSMutableDictionary *_itemsWithConflicts;
    BOOL _disableFastForward;
    BOOL _successfulFastForward;
    BOOL _landingMerge;
}

@property BOOL landingMerge; // @synthesize landingMerge=_landingMerge;
@property(readonly) BOOL successfulFastForward; // @synthesize successfulFastForward=_successfulFastForward;
@property BOOL disableFastForward; // @synthesize disableFastForward=_disableFastForward;
@property(readonly) NSMutableDictionary *itemsWithConflicts; // @synthesize itemsWithConflicts=_itemsWithConflicts;
@property(readonly) NSString *remoteURLToMerge; // @synthesize remoteURLToMerge=_remoteURLToMerge;
@property(copy) NSString *ancestorRevisionIdentifier; // @synthesize ancestorRevisionIdentifier=_ancestorRevisionIdentifier;
@property(copy) NSString *branchRevisionIdentifier; // @synthesize branchRevisionIdentifier=_branchRevisionIdentifier;
@property(copy) NSString *currentRevisionIdentifier; // @synthesize currentRevisionIdentifier=_currentRevisionIdentifier;
@property(retain) IDESourceControlBranch *mainBranch; // @synthesize mainBranch=_targetBranch;
@property(retain) IDESourceControlBranch *otherBranch; // @synthesize otherBranch=_mergeBranch;
- (void).cxx_destruct;
- (id)processInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)processMergeInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)processDistributedMergeInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) unsigned long long conflictCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

