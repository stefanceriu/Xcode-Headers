//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTDelayedMenuGradientImageButton, DVTStackBacktrace, NSArray, NSMutableArray, NSString;
@protocol IDEEditorContextProtocol;

@interface IDEEditorHistoryController : NSObject <DVTInvalidation>
{
    NSMutableArray *_previousHistoryItems;
    NSMutableArray *_nextHistoryItems;
    DVTDelayedMenuGradientImageButton *_forwardButton;
    DVTDelayedMenuGradientImageButton *_backButton;
    id <IDEEditorContextProtocol> _editorContext;
}

+ (id)keyPathsForValuesAffectingCanGoForwardByCommand;
+ (id)keyPathsForValuesAffectingCanGoBackByCommand;
+ (id)keyPathsForValuesAffectingCanSelectForwardButton;
+ (id)keyPathsForValuesAffectingCanSelectBackButton;
+ (BOOL)canEditorHistoryUseDocumentURL:(id)arg1 checkIsFileURLReachable:(BOOL)arg2;
+ (id)_historyButtonWithImageNamed:(id)arg1 width:(double)arg2 height:(double)arg3;
+ (long long)historySizeLimit;
+ (void)initialize;
@property(readonly, nonatomic) id <IDEEditorContextProtocol> editorContext; // @synthesize editorContext=_editorContext;
@property(readonly) DVTDelayedMenuGradientImageButton *backButton; // @synthesize backButton=_backButton;
@property(readonly) DVTDelayedMenuGradientImageButton *forwardButton; // @synthesize forwardButton=_forwardButton;
- (void).cxx_destruct;
- (void)goBackInHistoryByCommandWithShiftPlusAlternate:(id)arg1;
- (void)goBackInHistoryByCommandWithAlternate:(id)arg1;
- (void)goForwardInHistoryByCommandWithShiftPlusAlternate:(id)arg1;
- (void)goForwardInHistoryByCommandWithAlternate:(id)arg1;
- (void)goBackInHistoryByCommand:(id)arg1;
- (void)goForwardInHistoryByCommand:(id)arg1;
- (void)_goByMenuCommandGoingForward:(BOOL)arg1;
@property(readonly) BOOL canGoForwardByCommand;
@property(readonly) BOOL canGoBackByCommand;
- (id)goBackMenu;
- (id)goForwardMenu;
- (id)_historyButtonMenuWithDirectionForward:(BOOL)arg1;
- (void)_removeUnreachableHistoryItemsGoingForward:(BOOL)arg1;
- (void)goBackInHistoryToThisEntry:(id)arg1;
- (void)goForwardInHistoryToThisEntry:(id)arg1;
- (void)goBackInHistoryEntryByButtonClick:(id)arg1;
- (void)goForwardInHistoryByButtonClick:(id)arg1;
- (void)_goByButtonClickGoingForward:(BOOL)arg1;
@property(readonly) BOOL canSelectForwardButton;
@property(readonly) BOOL canSelectBackButton;
- (BOOL)canSelectButtonGoingForward:(BOOL)arg1;
- (void)primitiveInvalidate;
- (void)navigateAwayFromCurrentDocumentWithURL:(id)arg1;
- (id)_lastHistoryItemNotMatchingDocumentURL:(id)arg1 goingForward:(BOOL)arg2;
- (void)_removeHistoryItemsForDocumentURL:(id)arg1 goingForward:(BOOL)arg2;
- (BOOL)_goNowhere;
- (void)_goToEditorHistoryItem:(id)arg1;
- (BOOL)goToHistoryItemInThisEditorContext:(id)arg1 forward:(BOOL)arg2 captureHistory:(BOOL)arg3;
- (BOOL)openExternalEditorHistoryItem:(id)arg1;
- (void)addHistoryEditorHistoryItem:(id)arg1 filterAdjacentEntriesWithIdenticalNavigableItems:(BOOL)arg2;
- (id)initWithEditorContext:(id)arg1 navBarHeight:(double)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutableNextHistoryItems; // @dynamic mutableNextHistoryItems;
@property(readonly) NSMutableArray *mutablePreviousHistoryItems; // @dynamic mutablePreviousHistoryItems;
@property(copy) NSArray *nextHistoryItems; // @dynamic nextHistoryItems;
@property(copy) NSArray *previousHistoryItems; // @dynamic previousHistoryItems;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

