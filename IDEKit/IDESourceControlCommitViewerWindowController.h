//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "IDEReviewFilesViewControllerDelegate.h"
#import "NSLayoutManagerDelegate.h"
#import "NSSplitViewDelegate.h"

@class DVTBorderedView, DVTFilePath, DVTObservingToken, DVTSourceControlLogItem, IDENavigableItemAsyncFilteringCoordinator, IDEReviewFilesViewController, IDESourceControlCommitViewerComparisonEditorDataSource, IDESourceControlCommitViewerNavigatorDataSource, IDESourceControlReviewFilesDataSource, IDEWorkspace, NSArray, NSDictionary, NSMutableArray, NSOperationQueue, NSSplitView, NSString, NSTextView;

@interface IDESourceControlCommitViewerWindowController : NSWindowController <NSSplitViewDelegate, IDEReviewFilesViewControllerDelegate, NSLayoutManagerDelegate>
{
    DVTBorderedView *_reviewFilesBorderedView;
    DVTBorderedView *_borderedView;
    NSSplitView *_splitView;
    NSTextView *_commitTextView;
    IDEReviewFilesViewController *_reviewFilesViewController;
    IDESourceControlCommitViewerNavigatorDataSource *_navigatorDataSource;
    IDENavigableItemAsyncFilteringCoordinator *_coordinator;
    IDESourceControlCommitViewerNavigatorDataSource *_fileSystemDataSource;
    IDESourceControlCommitViewerComparisonEditorDataSource *_comparisonEditorDataSource;
    DVTSourceControlLogItem *_logItem;
    DVTObservingToken *_comparisonEditorObservingToken;
    id <DVTSourceControlCancellable> _exportFileOperation;
    IDESourceControlReviewFilesDataSource *_workspaceDataSource;
    IDEWorkspace *_workspace;
    NSMutableArray *_documents;
    NSMutableArray *_treeNodes;
    struct CGSize _sizeToSet;
    NSDictionary *_pathsWithStatus;
    NSMutableArray *_exportOperations;
    NSOperationQueue *_exportOperationQueue;
    id <DVTSourceControlCancellable> _loadRevisionsOperation;
    BOOL _alreadyPresentedExportError;
    DVTFilePath *_initialSelection;
}

+ (void)runPreviewSheetForWindow:(id)arg1 viewingCommit:(id)arg2 withInitialSelection:(id)arg3;
+ (void)initialize;
@property BOOL alreadyPresentedExportError; // @synthesize alreadyPresentedExportError=_alreadyPresentedExportError;
@property(retain) DVTFilePath *initialSelection; // @synthesize initialSelection=_initialSelection;
@property(retain) DVTSourceControlLogItem *logItem; // @synthesize logItem=_logItem;
- (void).cxx_destruct;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)ok:(id)arg1;
- (void)loadDocuments:(id)arg1 parentDocumentLocation:(id)arg2 filePath:(id)arg3 fileDocumentLocation:(id)arg4 status:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)setEditorMessages:(id)arg1 withPermissibleEditorCategory:(id)arg2;
- (void)willOpenDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_registerReadOnlyDocument:(id)arg1;
- (void)_unregisterReadOnlyDocuments;
- (void)cancelOperations;
- (id)workspaceDataSource;
- (void)_configureDataSources;
- (id)treeItemFilterPredicate;
- (void)reviewFilesViewController:(id)arg1 didInstallComparisonEditor:(id)arg2;
- (void)awakeFromNib;
- (void)_runSheetForWindow:(id)arg1;
- (id)_workspaceFromWindow:(id)arg1;
- (id)windowNibName;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableArray *mutableTreeNodes; // @dynamic mutableTreeNodes;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *treeNodes; // @dynamic treeNodes;

@end

