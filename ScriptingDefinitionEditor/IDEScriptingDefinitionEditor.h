//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <ScriptingDefinitionEditor/DVTBasicFindBarFindable-Protocol.h>
#import <ScriptingDefinitionEditor/NSUserInterfaceValidations-Protocol.h>

@class NSSearchField, NSSegmentedControl, NSString, NSView, OSADictionaryController, WebView;

@interface IDEScriptingDefinitionEditor : IDEEditor <DVTBasicFindBarFindable, NSUserInterfaceValidations>
{
    NSView *_dictionaryView;
    WebView *_dictionaryWebView;
    OSADictionaryController *_dictionaryController;
    NSSegmentedControl *_navigationControl;
    NSSegmentedControl *_textSizeControl;
    NSSegmentedControl *_viewModeControl;
    NSSearchField *_searchField;
    BOOL _delayedSelectionUpdate;
    NSString *_findString;
    BOOL _findCaseSensitive;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)basicFindBarLostFocus:(id)arg1;
- (BOOL)basicFindBar:(id)arg1 findPreviousByWrapping:(BOOL)arg2;
- (BOOL)basicFindBar:(id)arg1 findNextByWrapping:(BOOL)arg2;
- (long long)basicFindBar:(id)arg1 findString:(id)arg2 caseSensitive:(BOOL)arg3 withFindType:(unsigned long long)arg4 andMatchStyle:(unsigned long long)arg5;
- (BOOL)basicFindBar:(id)arg1 supportsMatchStyle:(unsigned long long)arg2;
- (BOOL)basicFindBar:(id)arg1 supportsFindType:(unsigned long long)arg2;
- (id)createFindBar;
- (BOOL)findBarSupported;
- (void)useSelectionForReplace:(id)arg1;
- (void)useSelectionForFind:(id)arg1;
- (void)changeSearch:(id)arg1;
- (void)goBackForward:(id)arg1;
- (void)changeViewMode:(id)arg1;
- (void)scriptingDefinition_browseInheritance:(id)arg1;
- (void)scriptingDefinition_browseContainment:(id)arg1;
- (void)scriptingDefinition_browseSuites:(id)arg1;
- (void)changeTextSize:(id)arg1;
- (void)scriptingDefinition_makeTextSmaller:(id)arg1;
- (void)scriptingDefinition_makeTextLarger:(id)arg1;
@property long long viewMode;
- (void)selectDocumentLocations:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateSelectedDefinitions;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)takeFocus;
- (void)loadView;
- (void)_setUpContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

