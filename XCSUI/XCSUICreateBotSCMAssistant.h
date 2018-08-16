//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

#import <XCSUI/NSOutlineViewDataSource-Protocol.h>
#import <XCSUI/NSOutlineViewDelegate-Protocol.h>
#import <XCSUI/XCSUIBotDefinition_SCMEditor_AssistantCallback-Protocol.h>

@class NSString, XCSUIBotDefinitionContext, XCSUIBotDefinition_SCMEditor;

@interface XCSUICreateBotSCMAssistant : IDEAssistant <NSOutlineViewDataSource, NSOutlineViewDelegate, XCSUIBotDefinition_SCMEditor_AssistantCallback>
{
    XCSUIBotDefinitionContext *_botDefinitionContext;
    XCSUIBotDefinition_SCMEditor *_scmEditor;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
@property(retain) XCSUIBotDefinition_SCMEditor *scmEditor; // @synthesize scmEditor=_scmEditor;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (void).cxx_destruct;
- (void)cancelSession;
- (void)goNextOrFinish:(id)arg1;
- (void)goBack:(id)arg1;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)loadView;
- (BOOL)canGoForward;
- (BOOL)alwaysShowFinish;
- (id)finishButtonTitle;
- (id)previousAssistantIdentifier;
- (id)nextAssistantIdentifier;
- (id)createBotAssistantContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

