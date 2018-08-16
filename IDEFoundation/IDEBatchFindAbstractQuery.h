//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEBatchFindAbstractResult, IDEBatchFindLineWrappingParameters, IDEBatchFindQuerySpecification, IDEWorkspace, NSString;
@protocol IDEBatchFindQueryDelegate;

@interface IDEBatchFindAbstractQuery : NSObject
{
    BOOL _canceled;
    IDEBatchFindQuerySpecification *_specification;
    IDEWorkspace *_workspace;
    id <IDEBatchFindQueryDelegate> _delegate;
    IDEBatchFindLineWrappingParameters *_initialLineWrappingParameters;
    CDUnknownBlockType _initialNumberOfLinesCalculator;
    IDEBatchFindAbstractResult *_rootResult;
}

+ (id)queryTermPlaceholderText;
+ (BOOL)supportsPatterns;
+ (BOOL)isCumbersomeToInitiateManually;
+ (BOOL)supportsCaseMatching;
+ (BOOL)supportsAnchorning;
+ (BOOL)supportsQueryAction:(long long)arg1;
+ (id)displayName;
@property(readonly, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property(readonly) IDEBatchFindAbstractResult *rootResult; // @synthesize rootResult=_rootResult;
@property(readonly) CDUnknownBlockType initialNumberOfLinesCalculator; // @synthesize initialNumberOfLinesCalculator=_initialNumberOfLinesCalculator;
@property(readonly) IDEBatchFindLineWrappingParameters *initialLineWrappingParameters; // @synthesize initialLineWrappingParameters=_initialLineWrappingParameters;
@property(readonly) __weak id <IDEBatchFindQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly) IDEBatchFindQuerySpecification *specification; // @synthesize specification=_specification;
- (void).cxx_destruct;
- (void)userIsAttemptingToViewFaultedChildrenOfItem:(id)arg1;
@property(readonly) NSString *customContextMenuID;
- (BOOL)lazilyFaultsChildren;
- (void)execute;
- (void)initiateIgnoringUnsavedChanges;
- (id)activityReportTitle;
- (BOOL)requiresEditorDocumentsToSaveBeforeSearching;
- (id)makeRootResult;
- (void)cancel;
- (id)initWithSpecification:(id)arg1 initialNumberOfLinesCalculator:(CDUnknownBlockType)arg2 initialLineWrappingParameters:(id)arg3 workspace:(id)arg4 andDelegate:(id)arg5 error:(id *)arg6;

@end

