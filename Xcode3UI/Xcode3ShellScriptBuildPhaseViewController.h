//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildPhaseViewController.h>

#import <Xcode3UI/DVTSourceTextViewDelegate-Protocol.h>
#import <Xcode3UI/DVTTextStorageDelegate-Protocol.h>

@class DVTBorderedView, DVTDelayedInvocation, DVTGradientImageButton, DVTNotificationToken, DVTScriptSourceTextView, DVTTableView, NSArray, NSButton, NSDictionary, NSScrollView, NSString;
@protocol DVTCancellable;

@interface Xcode3ShellScriptBuildPhaseViewController : Xcode3BuildPhaseViewController <DVTSourceTextViewDelegate, DVTTextStorageDelegate>
{
    DVTScriptSourceTextView *_sourceView;
    NSScrollView *_scriptScrollView;
    NSScrollView *_inputTableScrollView;
    NSScrollView *_outputTableScrollView;
    DVTTableView *_inputFileTable;
    DVTTableView *_outputFileTable;
    DVTGradientImageButton *_addInputFileButton;
    DVTGradientImageButton *_addOutputFileButton;
    DVTGradientImageButton *_removeInputFileButton;
    DVTGradientImageButton *_removeOutputFileButton;
    NSButton *_envVariablesCheckBox;
    NSButton *_runOnlyOnInstallCheckBox;
    DVTBorderedView *_scriptBorder;
    DVTBorderedView *_inputTableBorder;
    DVTBorderedView *_outputTableBorder;
    BOOL _willRebuild;
    BOOL _canRemoveInputFiles;
    BOOL _canRemoveOutputFiles;
    unsigned long long _storedNumberOfLines;
    DVTDelayedInvocation *_scriptChangeDelayedInvocation;
    DVTNotificationToken *_frameChangeToken;
    id <DVTCancellable> _rebuildToken;
    DVTDelayedInvocation *_delayedLayoutInvocation;
}

@property unsigned long long _storedNumberOfLines; // @synthesize _storedNumberOfLines;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
@property BOOL canRemoveOutputFiles;
@property BOOL canRemoveInputFiles;
- (void)removeFiles:(id)arg1;
- (void)addFile:(id)arg1;
- (void)replaceObjectInOutputPathsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeOutputPathsAtIndexes:(id)arg1;
- (void)removeObjectFromOutputPathsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inOutputPathsAtIndex:(unsigned long long)arg2;
@property(readonly) NSArray *outputPaths;
- (void)replaceObjectInInputPathsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeInputPathsAtIndexes:(id)arg1;
- (void)removeObjectFromInputPathsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inInputPathsAtIndex:(unsigned long long)arg2;
@property(readonly) NSArray *inputPaths;
- (void)_rebuildLayoutForTable:(id)arg1;
- (void)_reallyRebuildLayout;
- (void)_rebuildLayout;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewFrameChanged:(id)arg1;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)loadView;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *sourceLanguageServiceContext;
@property(readonly) Class superclass;

@end

