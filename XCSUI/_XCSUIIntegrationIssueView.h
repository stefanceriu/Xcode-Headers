//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSImageView, NSTextField, XCSIntegration, XCSUIIntegrationIssue, _XCSUIIssueSelectionManager;

@interface _XCSUIIntegrationIssueView : NSView
{
    BOOL _isSelected;
    _XCSUIIssueSelectionManager *_selectionManager;
    XCSUIIntegrationIssue *_integrationIssue;
    XCSIntegration *_integration;
    NSImageView *_issueTypeIcon;
    NSTextField *_issueTypeAndCauseField;
    NSTextField *_issueFileField;
    NSTextField *_introducedInField;
    NSTextField *_radarField;
    NSButton *_fixItButton;
    CDUnknownBlockType _issueSelectionCallback;
    CDUnknownBlockType _issueDoubleClickCallback;
}

@property(copy) CDUnknownBlockType issueDoubleClickCallback; // @synthesize issueDoubleClickCallback=_issueDoubleClickCallback;
@property(copy) CDUnknownBlockType issueSelectionCallback; // @synthesize issueSelectionCallback=_issueSelectionCallback;
@property(retain) NSButton *fixItButton; // @synthesize fixItButton=_fixItButton;
@property(retain) NSTextField *radarField; // @synthesize radarField=_radarField;
@property(retain) NSTextField *introducedInField; // @synthesize introducedInField=_introducedInField;
@property(retain) NSTextField *issueFileField; // @synthesize issueFileField=_issueFileField;
@property(retain) NSTextField *issueTypeAndCauseField; // @synthesize issueTypeAndCauseField=_issueTypeAndCauseField;
@property __weak NSImageView *issueTypeIcon; // @synthesize issueTypeIcon=_issueTypeIcon;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain) XCSIntegration *integration; // @synthesize integration=_integration;
@property(retain) XCSUIIntegrationIssue *integrationIssue; // @synthesize integrationIssue=_integrationIssue;
@property __weak _XCSUIIssueSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)wantsLayer;
- (id)issue;

@end

