//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class NSArray;

@interface Xcode3AddFileReferencesAssistant : IDEAssistant
{
    BOOL _canFinish;
    NSArray *_targetWrappers;
}

@property(copy) NSArray *targetWrappers; // @synthesize targetWrappers=_targetWrappers;
@property BOOL canFinish; // @synthesize canFinish=_canFinish;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)viewDidInstall;
- (void)setAssistantContext:(id)arg1;
- (void)loadView;

@end

