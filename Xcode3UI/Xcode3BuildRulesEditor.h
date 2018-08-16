//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <Xcode3UI/IDECapsuleListViewDataSource-Protocol.h>
#import <Xcode3UI/Xcode3SourceListItemEditor-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTPerformanceMetric, DVTSourceExpression, IDECapsuleListView, NSArray, NSButton, NSMutableArray, NSPredicate, NSSearchField, NSString, Xcode3ProjectEditor;
@protocol IDEBlueprint;

@interface Xcode3BuildRulesEditor : IDEViewController <Xcode3SourceListItemEditor, IDECapsuleListViewDataSource>
{
    NSButton *_displayModeButton_Custom;
    NSButton *_displayModeButton_All;
    NSSearchField *_searchField;
    IDECapsuleListView *_stackView;
    DVTBorderedView *_topBorderView;
    DVTGradientImageButton *_addBuildRuleButton;
    Xcode3ProjectEditor *_projectEditor;
    NSMutableArray *_ruleViewControllers;
    NSPredicate *_searchPredicate;
    id <IDEBlueprint> _inspectedBlueprint;
    int _displayMode;
    DVTPerformanceMetric *_metric;
}

+ (BOOL)canInspectBlueprint:(id)arg1;
+ (id)localizedSourceListItemEditorName;
+ (int)_defaultBuildRulesEditorDisplayMode;
+ (void)_setDefaultBuildRulesEditorDisplayMode:(int)arg1;
+ (void)initialize;
@property(nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) id <IDEBlueprint> inspectedBlueprint; // @synthesize inspectedBlueprint=_inspectedBlueprint;
@property(retain) Xcode3ProjectEditor *projectEditor; // @synthesize projectEditor=_projectEditor;
- (void).cxx_destruct;
- (BOOL)capsuleListView:(id)arg1 allowDragOfRowAtIndex:(unsigned long long)arg2;
- (unsigned long long)capsuleListView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3;
- (BOOL)capsuleListView:(id)arg1 acceptDrop:(id)arg2 draggedRow:(unsigned long long)arg3 destinationRow:(unsigned long long)arg4;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)Xcode3Support_newBuildRule:(id)arg1;
- (void)Xcode3Support_unfoldAll:(id)arg1;
- (void)Xcode3Support_foldAll:(id)arg1;
- (BOOL)_tryToUnfoldAll:(BOOL)arg1;
- (BOOL)_tryToFoldAll:(BOOL)arg1;
- (void)addBuildRule:(id)arg1;
- (void)buildRuleWasAdded:(id)arg1;
- (void)buildRuleWillBeRemoved:(id)arg1;
- (void)changeSearchString:(id)arg1;
- (void)changeDisplayMode:(id)arg1;
- (void)viewDidInstall;
- (void)loadView;
- (void)_updateDisplayModeButtons;
- (BOOL)_moveObjectFromIndex:(unsigned long long)arg1 toIndex:(long long)arg2;
- (BOOL)_buildRuleIsMovableAtIndex:(unsigned long long)arg1;
- (id)_buildRuleViewControllerForBuildRule:(id)arg1;
- (void)_buildRuleViewControllers;
- (void)primitiveInvalidate;
- (void)_invalidateRuleViewControllers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly) struct CGRect currentSelectionFrame;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inspectedBlueprints;
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly, nonatomic) DVTSourceExpression *selectedExpression;
@property(readonly) Class superclass;

@end

