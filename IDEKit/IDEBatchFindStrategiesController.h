//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

#import "NSPopoverDelegate.h"

@class DVTReplacementView, IDEBatchFindScopeEditor, IDEWorkspace, NSArray, NSImageView, NSPopover, NSString;

@interface IDEBatchFindStrategiesController : DVTViewController <NSPopoverDelegate>
{
    NSImageView *_topShadow;
    DVTReplacementView *_locationEditorContentView;
    IDEWorkspace *_workspace;
    NSString *_findScopeUUID;
    NSString *_findWorkspacePath;
    CDUnknownBlockType _scopeEditorCompletionBlock;
    BOOL _ignoresCase;
    BOOL _isEditingScope;
    int _findType;
    int _matchStyle;
    NSPopover *_popover;
    NSString *_findWorkspacePathDescription;
    id <IDEBatchFindNameTreeResolver> _nameTreeResolver;
    IDEBatchFindScopeEditor *_scopeEditor;
    NSArray *_customScopePredicates;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCustomScopes;
+ (id)newScopeImage;
+ (id)scopeImage;
+ (void)initialize;
+ (id)sharedStrategiesController;
@property(retain) NSArray *customScopePredicates; // @synthesize customScopePredicates=_customScopePredicates;
@property(retain, nonatomic) IDEBatchFindScopeEditor *scopeEditor; // @synthesize scopeEditor=_scopeEditor;
@property __weak id <IDEBatchFindNameTreeResolver> nameTreeResolver; // @synthesize nameTreeResolver=_nameTreeResolver;
@property(retain) NSString *findWorkspacePathDescription; // @synthesize findWorkspacePathDescription=_findWorkspacePathDescription;
@property(copy, nonatomic) NSString *findWorkspacePath; // @synthesize findWorkspacePath=_findWorkspacePath;
@property(copy, nonatomic) NSString *findScopeUUID; // @synthesize findScopeUUID=_findScopeUUID;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) BOOL isEditingScope; // @synthesize isEditingScope=_isEditingScope;
@property(nonatomic) BOOL ignoresCase; // @synthesize ignoresCase=_ignoresCase;
@property(nonatomic) int matchStyle; // @synthesize matchStyle=_matchStyle;
@property(nonatomic) int findType; // @synthesize findType=_findType;
- (void).cxx_destruct;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)_validateCustomScopeSelection;
@property(readonly) NSArray *customScopes;
- (id)descriptionForCriteriaForAttributedString:(id)arg1;
@property(readonly) NSString *customScopeDescription;
- (void)setParametersFromCriteria:(id)arg1;
- (id)findCriteriaForAttributedString:(id)arg1 containerScopes:(id)arg2 error:(id *)arg3;
- (id)_predicateForScope;
- (BOOL)_findScopeUUIDValid:(id)arg1;
- (id)selectedScopeName;
- (id)scopeNameForScopeID:(id)arg1;
- (BOOL)doneLocationEditor;
- (void)showScopeEditor:(id)arg1 inRect:(struct CGRect)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)addScope;
- (void)deleteScopeWithUUID:(id)arg1;
- (void)persistScopes;
- (void)loadView;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_loadDefaultValues;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

