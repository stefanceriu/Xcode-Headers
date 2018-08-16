//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEComparisonEditorSubmode.h>

#import <IDEQuickLookEditor/IDEComparisonEditorDelegate-Protocol.h>

@class DVTBorderedView, IDEEditor, NSDictionary, NSString, QLPreviewView;

@interface IDEQuickLookVersionsLogSubmode : IDEComparisonEditorSubmode <IDEComparisonEditorDelegate>
{
    NSDictionary *_previouslyRestoredStateDictionary;
    DVTBorderedView *_primaryLayoutView;
    IDEEditor *_primaryEditor;
}

+ (id)keyPathsForValuesAffectingCurrentSelectedDocumentLocations;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
+ (id)keyPathsForValuesAffectingKeyEditor;
@property(retain) DVTBorderedView *primaryLayoutView; // @synthesize primaryLayoutView=_primaryLayoutView;
- (void).cxx_destruct;
- (void)revertComparisonEditorStateWithDictionary:(id)arg1;
- (void)commitComparisonEditorStateToDictionary:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)showEmptyPrimaryEditor:(id)arg1;
- (void)hidePrimaryPlaceholder;
- (void)showPrimaryPlaceholder;
- (void)comparisonEditor:(id)arg1 didReplacePrimaryDocument:(id)arg2;
- (void)_syncStructureDocument;
- (id)_fileTextSettings;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (void)loadView;
@property(retain) IDEEditor *primaryEditor; // @synthesize primaryEditor=_primaryEditor;
@property(readonly) QLPreviewView *primaryQuickLookView;
- (id)keyEditor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

