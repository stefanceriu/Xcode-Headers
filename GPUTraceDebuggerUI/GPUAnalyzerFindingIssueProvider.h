//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEIssueProvider.h"

@class DVTObservingToken, GPUDebuggerController, GPUSharedWorkspaceUIState, NSDictionary, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface GPUAnalyzerFindingIssueProvider : IDEIssueProvider
{
    NSObject<OS_dispatch_queue> *_queue;
    GPUSharedWorkspaceUIState *_workspaceUIState;
    GPUDebuggerController *_controller;
    id _gpuDebuggingNotifyToken;
    DVTObservingToken *_debugStateObserverToken;
    DVTObservingToken *_validObserverToken;
    NSDictionary *_unsortedToSortedIndexMapDict;
}

+ (int)providerType;
@property(retain, nonatomic) NSDictionary *unsortedToSortedIndexMapDict; // @synthesize unsortedToSortedIndexMapDict=_unsortedToSortedIndexMapDict;
- (void).cxx_destruct;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)_clearIssues;
- (BOOL)_mapFunctionIndexUnsortedToSorted:(unsigned int *)arg1;
- (id)_createIssueAndSubissuesFromAnalyzerFinding:(id)arg1;
- (id)_createIssueFromAnalyzerFinding:(id)arg1;
- (void)_recordNumIssues:(unsigned int)arg1;
- (unsigned int)_createAnalyzerIssues;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;
- (void)setupController;
- (void)primitiveInvalidate;

@end

