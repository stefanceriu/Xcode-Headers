//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSBlueprintOperationResult.h>

@class NSArray, NSMutableDictionary;

@interface XCSListBranchesResult : XCSBlueprintOperationResult
{
    NSMutableDictionary *_branchesByRepository;
}

@property(retain, nonatomic) NSMutableDictionary *branchesByRepository; // @synthesize branchesByRepository=_branchesByRepository;
- (void).cxx_destruct;
- (void)addBranch:(id)arg1 forRepositoryID:(id)arg2;
- (id)mutableBranchesForRepositoryID:(id)arg1;
- (void)mergeWithResult:(id)arg1;
@property(readonly) NSArray *repositoryIDsWithBranches;
- (id)branchesForRepositoryID:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)_validateBranches:(id)arg1 validationErrors:(id *)arg2;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)init;

@end

