//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyResultAggregator.h>

@class IDEWorkspace;

@interface IDEOpenQuicklyAbstractWorkspaceResultAggregator : IDEOpenQuicklyResultAggregator
{
    IDEWorkspace *_workspace;
}

+ (BOOL)sendsIncompleteResults;
+ (long long)aggregationCutoff;
- (void).cxx_destruct;
- (void)generateGeneratorsWithCompletionGroup:(id)arg1;
- (void)generateGeneratorsWithCompletionGroup:(id)arg1 forWorkspace:(id)arg2;
- (id)initWithWorkspace:(id)arg1 queryContext:(id)arg2 consumer:(id)arg3;

@end

