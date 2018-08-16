//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEBatchFindQueryDelegate-Protocol.h>

@class DVTObservingToken, IDEBatchFindPrescanTextQuery, IDEWorkspace, NSString;

@interface IDEQueryBasedTextFragmentIndexPrescanner : NSObject <IDEBatchFindQueryDelegate>
{
    IDEWorkspace *_workspace;
    IDEBatchFindPrescanTextQuery *_query;
    CDUnknownBlockType _completionObserver;
    DVTObservingToken *_workspaceValidityToken;
}

+ (void)prescanWorkspace:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)disablePrescan;
- (void).cxx_destruct;
- (void)findNavigatorQuery:(id)arg1 isStalledOnFilePaths:(id)arg2;
- (void)findNavigatorQuery:(id)arg1 didFinishGeneratingLazyChildrenOfResult:(id)arg2;
- (void)findNavigatorQuery:(id)arg1 didGenerateResults:(id)arg2;
- (void)findNavigatorQueryDidComplete:(id)arg1;
- (void)findNavigatorQuery:(id)arg1 progressUpdate:(long long)arg2;
- (void)cancel;
- (void)startWithCompletionObserver:(CDUnknownBlockType)arg1;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

