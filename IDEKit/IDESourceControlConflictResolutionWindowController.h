//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlReviewFilesWindowController.h>

@class DVTBorderedView, DVTObservingToken, NSArray, NSButton;

@interface IDESourceControlConflictResolutionWindowController : IDESourceControlReviewFilesWindowController
{
    NSButton *_resolveButton;
    NSButton *_cancelButton;
    DVTBorderedView *_reviewFilesView;
    NSArray *_operationInfo;
    BOOL _resolveInProgress;
    DVTObservingToken *_mergeDirectionObservationToken;
    DVTObservingToken *_descriptorResolvedObservationToken;
    DVTObservingToken *_conflictCountObservationToken;
}

@property(copy) NSArray *operationInfo; // @synthesize operationInfo=_operationInfo;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)resolve:(id)arg1;
- (void)handleErrors:(id)arg1;
- (void)_selectMergeStrategy:(long long)arg1 forDiff:(id)arg2;
- (void)overwriteOriginalDocumentsWithMergeDocuments;
- (void)overwriteOriginalDocumentsWithMergeDocumentsForWorkingTree:(id)arg1;
- (void)setupConflictResolutionSupport;
- (unsigned long long)totalConflictCount;
- (void)comparisonContextMenu_chooseRightThenLeftDiffDescriptor:(id)arg1;
- (void)comparisonContextMenu_chooseLeftThenRightDiffDescriptor:(id)arg1;
- (void)comparisonContextMenu_chooseRightDiffDescriptor:(id)arg1;
- (void)comparisonContextMenu_chooseLeftDiffDescriptor:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)workingTreeItemFilterPredicate;
- (id)workspaceItemFilterPredicate;
- (id)itemsForWorkingTree:(id)arg1;
- (id)operationInfoForWorkingTree:(id)arg1;
- (void)updateButtonTitle;
- (void)beginSheetForWindow:(id)arg1;
- (BOOL)shouldEnableResovleButton;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)initWithWindow:(id)arg1;

@end

