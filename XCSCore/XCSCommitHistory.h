//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, XCSCommit, XCSContributor;

@interface XCSCommitHistory : XCSObject
{
    NSArray *_committers;
    XCSContributor *_topCommitter;
    NSArray *_commits;
    XCSCommit *_commitHistory;
    NSArray *_sortedContributors;
}

@property(retain, nonatomic) NSArray *sortedContributors; // @synthesize sortedContributors=_sortedContributors;
@property(retain, nonatomic) XCSCommit *commitHistory; // @synthesize commitHistory=_commitHistory;
@property(retain, nonatomic) NSArray *commits; // @synthesize commits=_commits;
@property(nonatomic) __weak XCSContributor *topCommitter; // @synthesize topCommitter=_topCommitter;
@property(retain, nonatomic) NSArray *committers; // @synthesize committers=_committers;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *committersOrderedByFilesChanged;
- (BOOL)_validateWithCommits:(struct NSArray *)arg1 validationErrors:(id *)arg2;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithCommits:(struct NSArray *)arg1 validationErrors:(id *)arg2;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end

