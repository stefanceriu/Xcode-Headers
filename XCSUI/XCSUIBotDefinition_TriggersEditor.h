//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/DVTOutlineViewDelegate-Protocol.h>
#import <XCSUI/NSOutlineViewDataSource-Protocol.h>
#import <XCSUI/NSTextFieldDelegate-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTOutlineView, NSMenu, NSMutableArray, NSString, NSTextField, NSView, XCSUIBotDefinitionContext;

@interface XCSUIBotDefinition_TriggersEditor : IDEViewController <NSOutlineViewDataSource, DVTOutlineViewDelegate, NSTextFieldDelegate>
{
    BOOL _preventGoFowardOrFinish;
    BOOL _viewIsInstalled;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSMutableArray *_triggers;
    DVTOutlineView *_triggersOutlineView;
    NSView *_triggerDetailCustomView;
    DVTBorderedView *_triggersBorderedView;
    DVTGradientImageButton *_addTriggerButton;
    DVTGradientImageButton *_removeTriggerButton;
    NSMenu *_triggersMenu;
    NSTextField *_noTriggersLabel;
    NSMutableArray *_preIntegrationTriggerScripts;
    NSMutableArray *_postIntegrationTriggerScripts;
    NSMutableArray *_triggerEmails;
    NSMutableArray *_reportEmails;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
@property(retain, nonatomic) NSMutableArray *reportEmails; // @synthesize reportEmails=_reportEmails;
@property(retain, nonatomic) NSMutableArray *triggerEmails; // @synthesize triggerEmails=_triggerEmails;
@property(retain, nonatomic) NSMutableArray *postIntegrationTriggerScripts; // @synthesize postIntegrationTriggerScripts=_postIntegrationTriggerScripts;
@property(retain, nonatomic) NSMutableArray *preIntegrationTriggerScripts; // @synthesize preIntegrationTriggerScripts=_preIntegrationTriggerScripts;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property __weak NSTextField *noTriggersLabel; // @synthesize noTriggersLabel=_noTriggersLabel;
@property(retain) NSMenu *triggersMenu; // @synthesize triggersMenu=_triggersMenu;
@property __weak DVTGradientImageButton *removeTriggerButton; // @synthesize removeTriggerButton=_removeTriggerButton;
@property __weak DVTGradientImageButton *addTriggerButton; // @synthesize addTriggerButton=_addTriggerButton;
@property __weak DVTBorderedView *triggersBorderedView; // @synthesize triggersBorderedView=_triggersBorderedView;
@property __weak NSView *triggerDetailCustomView; // @synthesize triggerDetailCustomView=_triggerDetailCustomView;
@property __weak DVTOutlineView *triggersOutlineView; // @synthesize triggersOutlineView=_triggersOutlineView;
@property(nonatomic) BOOL preventGoFowardOrFinish; // @synthesize preventGoFowardOrFinish=_preventGoFowardOrFinish;
@property(retain, nonatomic) NSMutableArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)rightMouseDown:(id)arg1;
- (void)duplicateTrigger;
- (void)addNewPostScriptTrigger;
- (void)addNewPreScriptTrigger;
- (void)addNewEmailReportTrigger;
- (void)addNewIssueEmailTrigger;
- (void)removeTrigger:(id)arg1;
- (void)addTrigger:(id)arg1;
- (BOOL)alwaysShowFinish;
- (BOOL)canGoForward;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)commitChanges;
- (void)updateLayout;
- (void)reloadOutlineView;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

