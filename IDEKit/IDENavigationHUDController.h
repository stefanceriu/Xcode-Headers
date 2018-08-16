//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class CALayer, IDENavigationHUDAbstractWorkspaceWindowLayer, IDENavigationHUDNewWorkspaceWindowLayer, IDENavigationHUDSelection, IDENavigationHUDSelectionView, IDEWorkspaceDocument, NSArray, NSDictionary, NSMapTable, NSSet, NSURL;
@protocol IDENavigationHUDSelectableLayer;

@interface IDENavigationHUDController : IDEViewController
{
    IDENavigationHUDSelectionView *_selectionView;
    CALayer<IDENavigationHUDSelectableLayer> *_currentClickedLayer;
    NSMapTable *_workspaceWindowControllerToWorkspaceWindowLayerMap;
    CDUnknownBlockType _completionBlock;
    IDENavigationHUDNewWorkspaceWindowLayer *_newWindowLayer;
    NSMapTable *_workspaceTabToLayoutTreeMap;
    IDEWorkspaceDocument *_workspaceDocument;
    IDENavigationHUDSelection *_selection;
    NSArray *_workspaceWindowControllers;
    NSSet *_workspaceObservingTokens;
    NSArray *_workspaceWindowLayers;
    id _hudLocalEventHandler;
    NSDictionary *_options;
    NSURL *_URL;
}

@property(readonly) IDENavigationHUDNewWorkspaceWindowLayer *newWindowLayer; // @synthesize newWindowLayer=_newWindowLayer;
@property(retain, nonatomic) IDENavigationHUDSelection *selection; // @synthesize selection=_selection;
@property(retain) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)defaultPrimaryEditorContextLayoutTreeNodeForWorkspaceTabController:(id)arg1;
- (id)layoutTreeForWorkspaceTabController:(id)arg1;
- (void)selectionViewDidStartDraggingFileProxy:(id)arg1;
- (id)filePathForSelectionViewFileProxy:(id)arg1;
- (id)textForSelectionView:(id)arg1;
- (void)selectionView:(id)arg1 didDoubleClickWithEvent:(id)arg2;
- (void)selectionView:(id)arg1 didReceiveMouseUp:(id)arg2;
- (void)selectionView:(id)arg1 didReceiveMouseDown:(id)arg2;
- (id)selectableLayerForMouseEvent:(id)arg1;
- (id)coverFlowLayersForSelectionView:(id)arg1;
- (id)fileProxyImageForSelectionView:(id)arg1;
- (id)fileProxyTitleForSelectionView:(id)arg1;
@property(readonly) IDENavigationHUDAbstractWorkspaceWindowLayer *selectedWorkspaceWindowLayer;
- (void)respondToSelection;
- (void)chooseSelection:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)stopListeningToWindowControllers;
- (void)startListeningToWindowControllers;
- (void)stopListeningToEvents;
- (void)startListeningToEvents;
- (void)navigateRight;
- (void)navigateLeft;
- (void)navigateDown;
- (void)navigateUp;
- (void)navigateRightOneTab;
- (void)navigateLeftOneTab;
- (void)navigateRightOneWindow;
- (void)navigateLeftOneWindow;
- (void)generateWorkspaceWindowLayers;
- (id)workspaceWindowLayerForWorkspaceWindowController:(id)arg1;
- (id)existingWorkspaceWindowLayerForWorkspaceWindowController:(id)arg1;
- (BOOL)shouldOnlySelectInitialWindow;
- (BOOL)canCreateNewWindow;
- (unsigned long long)role;
@property(readonly) NSArray *workspaceWindowControllers;
- (void)primitiveInvalidate;
- (id)initWithURL:(id)arg1 initialSelection:(id)arg2 options:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithInitialSelection:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

