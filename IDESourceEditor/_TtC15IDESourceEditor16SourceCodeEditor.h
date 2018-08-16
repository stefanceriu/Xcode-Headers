//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDESourceEditor/DVTAnnotationManagerDelegate-Protocol.h>
#import <IDESourceEditor/DVTColorLiteralQuickEditViewControllerDelegate-Protocol.h>
#import <IDESourceEditor/DVTFileLiteralQuickEditViewControllerDelegate-Protocol.h>
#import <IDESourceEditor/DVTImageLiteralQuickEditViewControllerDelegate-Protocol.h>
#import <IDESourceEditor/IDEAnalyzerResultsHostingEditor-Protocol.h>
#import <IDESourceEditor/IDEBreakpointObserver-Protocol.h>
#import <IDESourceEditor/IDEJumpToLineDestination-Protocol.h>
#import <IDESourceEditor/IDEPathCellDelegate-Protocol.h>
#import <IDESourceEditor/IDEQuickHelpDataContextService-Protocol.h>
#import <IDESourceEditor/IDESingleFileCommandSupportingEditor-Protocol.h>
#import <IDESourceEditor/IDESourceControlWorkingCopyObserver-Protocol.h>
#import <IDESourceEditor/IDESourceExpressionSource-Protocol.h>
#import <IDESourceEditor/IDETestingSelection-Protocol.h>
#import <IDESourceEditor/IDETestsInFileObserver-Protocol.h>
#import <IDESourceEditor/NSMenuDelegate-Protocol.h>
#import <IDESourceEditor/NSTouchBarDelegate-Protocol.h>
#import <IDESourceEditor/_TtP9DVTMarkup28PlaygroundMarkupViewDelegate_-Protocol.h>

@class DVTSDK, DVTSourceExpression, IDEAnalyzerResultsExplorer, IDENoteAnnotationExplorer, NSColor, NSString, NSView, _TtC15IDESourceEditor19IDESourceEditorView;

@interface _TtC15IDESourceEditor16SourceCodeEditor : IDEEditor <IDESourceControlWorkingCopyObserver, NSTouchBarDelegate, _TtP9DVTMarkup28PlaygroundMarkupViewDelegate_, NSMenuDelegate, DVTAnnotationManagerDelegate, IDETestsInFileObserver, IDESourceExpressionSource, IDEQuickHelpDataContextService, IDEBreakpointObserver, IDEJumpToLineDestination, IDETestingSelection, IDEAnalyzerResultsHostingEditor, IDESingleFileCommandSupportingEditor, DVTColorLiteralQuickEditViewControllerDelegate, DVTImageLiteralQuickEditViewControllerDelegate, DVTFileLiteralQuickEditViewControllerDelegate, IDEPathCellDelegate>
{
    // Error parsing type: , name: sourceEditorView
    // Error parsing type: , name: containerView
    // Error parsing type: , name: controllerContentView
    // Error parsing type: , name: contentGenerationBackgroundView
    // Error parsing type: , name: messageView
    // Error parsing type: , name: progressIndicator
    // Error parsing type: , name: progressIndicatorDisplayTime
    // Error parsing type: , name: refactoringController
    // Error parsing type: , name: coverageGenerationObserver
    // Error parsing type: , name: boundsChangeObserver
    // Error parsing type: , name: mouseOverExpressionNotification
    // Error parsing type: , name: pendingNavigationItemLocations
    // Error parsing type: , name: docSavedNotificationToken
    // Error parsing type: , name: popover
    // Error parsing type: , name: sourceEditorScrollViewClass
    // Error parsing type: , name: alreadyPrepared
    // Error parsing type: , name: viewState
    // Error parsing type: , name: didSetupEditorCalled
    // Error parsing type: , name: currentToolbarViewController
    // Error parsing type: , name: coverageFile
    // Error parsing type: , name: touchBarController.storage
    // Error parsing type: , name: allowBecomeMainViewController
    // Error parsing type: , name: selectedRangeObserver
    // Error parsing type: , name: lastPosition
    // Error parsing type: , name: currentLandmark
    // Error parsing type: , name: selectionObservers
    // Error parsing type: , name: themeChangeNotificationToken
    // Error parsing type: , name: currentRenderedMarkupView
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: currentStructuredSelectionMenuController
    // Error parsing type: , name: quickHelpForceTouchController
    // Error parsing type: , name: issueObserverToken
    // Error parsing type: , name: issueManager
    // Error parsing type: , name: annotationManager
    // Error parsing type: , name: changeGutter
    // Error parsing type: , name: exportOperation
    // Error parsing type: , name: analyzerVisualizations
    // Error parsing type: , name: analyzerResultsExplorer
    // Error parsing type: , name: analyzerResultsScopeBar
    // Error parsing type: , name: hidingAnalyzerExplorer
    // Error parsing type: , name: noteAnnotationExplorer
    // Error parsing type: , name: noteAnnotationExplorerObserver
    // Error parsing type: , name: singleFileProcessingToolbarController
    // Error parsing type: , name: workspaceObservingToken
    // Error parsing type: , name: workspaceFinishedLoadingToken
    // Error parsing type: , name: logRecordsToken
    // Error parsing type: , name: currentBuildOperationObservingToken
    // Error parsing type: , name: lastKnownBuildOperation
    // Error parsing type: , name: quickHelpExpression
    // Error parsing type: , name: capturedContinueToHereDocumentLocation
    // Error parsing type: , name: capturedContinueToLineDocumentLocation
    // Error parsing type: , name: sourceEditorExtensionCancellationScopeBarController
    // Error parsing type: , name: sourceEditorExtensionErrorScopeBarController
    // Error parsing type: , name: sourceKitServiceStatusObserver
    // Error parsing type: , name: sourceKitSemaDisabledObserver
    // Error parsing type: , name: sourceKitErrorTimeout
    // Error parsing type: , name: sourceKitErrorTimeoutDuration
    // Error parsing type: , name: sourceKitErrorScopeBarController
}

+ (id)keyPathsForValuesAffectingSelectedExpression;
+ (id)keyPathsForValuesAffectingIsWorkspaceBuilding;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)addDocumentation:(id)arg1;
- (void)toggleComments:(id)arg1;
- (void)invokeSourceEditorExtensionCommand:(id)arg1;
- (void)toggleTokenizedEditing:(id)arg1;
- (BOOL)isExpressionModuleImport:(id)arg1;
- (BOOL)isExpressionPoundImport:(id)arg1;
- (BOOL)expressionContainsExecutableCode:(id)arg1;
- (BOOL)isExpressionInFunctionOrMethodBody:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodDefinition:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodCall:(id)arg1;
- (BOOL)isExpressionInPlainCode:(id)arg1;
- (void)symbolsForExpression:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)revealInSymbolNavigator:(id)arg1;
- (void)contextMenu_revealInSymbolNavigator:(id)arg1;
- (void)copyQualifiedSymbolName:(id)arg1;
- (void)copySymbolName:(id)arg1;
- (void)continueToCurrentLine:(id)arg1;
- (void)continueToHere:(id)arg1;
@property(nonatomic, readonly) DVTSDK *sdk;
- (struct CGRect)expressionFrameForExpression:(id)arg1;
@property(nonatomic, readonly) DVTSourceExpression *mouseOverExpression;
@property(nonatomic, readonly) struct CGRect currentSelectionFrame;
@property(nonatomic, retain) DVTSourceExpression *quickHelpExpression; // @synthesize quickHelpExpression;
@property(nonatomic, readonly) DVTSourceExpression *contextMenuExpression;
@property(nonatomic, readonly) NSString *selectedText;
@property(nonatomic, readonly) DVTSourceExpression *selectedExpression;
- (void)quickHelpDataContextForExpression:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)selectedTestsAndTestables;
- (id)selectedTest;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)testsInFileUpdated:(id)arg1;
- (void)toggleBreakpointAtCurrentLine:(id)arg1;
- (void)breakpointEnablementChanged:(id)arg1;
- (void)breakpointsActivationStateChanged;
@property(nonatomic, readonly) BOOL isWorkspaceBuilding;
- (void)compileCurrentFile;
- (BOOL)canCompileFile;
- (void)analyzeCurrentFile;
- (BOOL)canAnalyzeFile;
- (void)preprocessCurrentFile;
- (BOOL)canPreprocessFile;
- (void)assembleCurrentFile;
- (BOOL)canAssembleFile;
@property(nonatomic, retain) IDENoteAnnotationExplorer *noteAnnotationExplorer; // @synthesize noteAnnotationExplorer;
- (void)hideAnalyzerExplorerAnimate:(BOOL)arg1;
- (void)showAnalyzerExplorerForMessage:(id)arg1 animate:(BOOL)arg2;
@property(nonatomic, retain) IDEAnalyzerResultsExplorer *analyzerResultsExplorer; // @synthesize analyzerResultsExplorer;
- (void)hideAllMessageBubbleAnnotations;
- (void)showAllMessageBubbleAnnotationsIfNotExplicitlyHidden;
- (void)removeLocalAnnotation:(id)arg1;
- (void)addLocalAnnotation:(id)arg1;
- (void)refreshAnalyzerVisualization:(id)arg1;
- (void)removeAnalyzerVisualization:(id)arg1 fadeOut:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addAnalyzerVisualization:(id)arg1 fadeIn:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct _NSRange)characterRangeFromDocumentLocation:(id)arg1;
@property(nonatomic, readonly) long long textIndentWidth;
@property(nonatomic, readonly) NSColor *backgroundColor;
- (id)rectArrayForCharacterRange:(struct _NSRange)arg1;
@property(nonatomic, readonly) NSView *textView;
- (void)didRemoveAnnotations:(id)arg1;
- (void)didInsertAnnotations:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
@property(nonatomic, readonly) BOOL providesOwnFindBar;
- (void)showQuickHelp:(id)arg1;
- (void)fixAllIssues:(id)arg1;
- (void)jumpToDefinitionForCurrentEventAndRange;
- (void)jumpToDefinitionWithShiftPlusAlternate:(id)arg1;
- (void)jumpToDefinitionWithAlternate:(id)arg1;
- (void)jumpToDefinition:(id)arg1;
- (void)fileQuickEdit:(id)arg1 didClickMoreButtonForFilePath:(id)arg2;
- (void)fileQuickEdit:(id)arg1 didSelectFilePath:(id)arg2;
- (void)imageQuickEdit:(id)arg1 didClickMoreButtonForFilePath:(id)arg2;
- (void)imageQuickEdit:(id)arg1 didSelectFilePath:(id)arg2;
- (void)changeColor:(id)arg1;
- (void)colorQuickEdit:(id)arg1 didSelectMoreColorOptions:(id)arg2;
- (void)colorQuickEdit:(id)arg1 didHighlightColor:(id)arg2;
- (void)colorQuickEdit:(id)arg1 didSelectColor:(id)arg2;
- (void)sendMouseExpressionDidChange;
- (void)playgroundMarkupView:(id)arg1 openLink:(id)arg2;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (id)pathCell:(id)arg1 menuItemForNavigableItem:(id)arg2 defaultMenuItem:(id)arg3;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (void)selectAndHighlight:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
@property(nonatomic, readonly) BOOL canBecomeMainViewController;
@property(nonatomic) BOOL allowBecomeMainViewController; // @synthesize allowBecomeMainViewController;
- (void)takeFocus;
- (id)initialQueryForJumpToLine;
- (id)documentLocationForJumpToLineQuery:(id)arg1;
- (void)toggleInvisibleCharactersShown:(id)arg1;
- (void)changeSourceCodeLanguageAction:(id)arg1;
- (void)useSourceCodeLanguageFromFileDataTypeAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)jumpBetweenSourceFileAndGeneratedFile:(id)arg1;
- (void)jumpToLine:(id)arg1;
- (void)resetFontSize:(id)arg1;
- (void)decreaseFontSize:(id)arg1;
- (void)increaseFontSize:(id)arg1;
- (void)editThemes:(id)arg1;
- (void)changeTheme:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)setupEditorMenu:(id)arg1;
- (void)primitiveInvalidate;
- (void)indexChanged:(id)arg1;
- (void)didSetupEditor;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3 sourceEditorScrollViewClass:(Class)arg4;
@property(nonatomic, retain) _TtC15IDESourceEditor19IDESourceEditorView *sourceEditorView; // @synthesize sourceEditorView;
- (void)toggleCodeCoverageShown:(id)arg1;
- (void)selectPreviousChange:(id)arg1;
- (void)selectNextChange:(id)arg1;
- (void)foundWorkingCopy:(id)arg1;
- (void)indentSourceCodeSelection:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)renameRefactor:(id)arg1;
- (void)localRefactor:(id)arg1;
- (void)wrapInNSLocalizedString:(id)arg1;
- (void)generateMissingFunctionDefinitions:(id)arg1;
- (void)expandDefault:(id)arg1;
- (void)convertToSwitch:(id)arg1;
- (void)addMissingSwitchCases:(id)arg1;
- (void)addMissingProtocolRequirements:(id)arg1;
- (void)addMissingAbstractClassOverrides:(id)arg1;
- (void)extractRepeatedExpression:(id)arg1;
- (void)extractExpression:(id)arg1;
- (void)extractMethod:(id)arg1;
- (void)extractFunction:(id)arg1;

@end

