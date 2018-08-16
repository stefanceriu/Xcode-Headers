//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDENavigableItemCoordinatorDelegate-Protocol.h>

@class DVTBorderedView, DVTChoice, DVTChooserView, DVTDelayedInvocation, DVTDisclosureView, DVTExtension, DVTMutableOrderedSet, DVTNotificationToken, DVTObservingToken, DVTStackView_ML, IDEEditorDocument, IDENavigableItemCoordinator, IDESelection, IDEUtilityPlaceholderView, NSArray, NSMapTable, NSMutableArray, NSScrollView, NSSet, NSString;
@protocol DVTCancellable;

@interface IDEUtilityArea : IDEViewController <IDENavigableItemCoordinatorDelegate>
{
    DVTChooserView *_chooserView;
    DVTBorderedView *_borderedView;
    DVTStackView_ML *_stackView;
    NSScrollView *_scrollView;
    DVTDisclosureView *_lastDisclosureView;
    DVTChoice *_selectedCategoryChoice;
    NSMapTable *_categoriesToChoices;
    NSMapTable *_sliceExtensionsToContentViews;
    NSMapTable *_sliceExtensionsToWrappingViews;
    NSMapTable *_installedSliceExtensionsToContentViews;
    NSArray *_builtinCategories;
    DVTMutableOrderedSet *_userPreferredCategories;
    NSSet *_displayedSlices;
    NSArray *_observedParentNavigableItemTokens;
    NSArray *_observedParentNavigableItemNotificationTokens;
    DVTDelayedInvocation *_refreshInvocation;
    DVTExtension *_displayedCategory;
    IDESelection *_content;
    id <DVTCancellable> _installToken;
    id <DVTCancellable> _clipViewFillToken;
    DVTObservingToken *_themeObserver;
    NSSet *_selectedDocuments;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDEUtilityPlaceholderView *_placeholderView;
    IDEEditorDocument *_retainedDocument;
    DVTNotificationToken *_retainedDocumentWillCloseNotificationToken;
    DVTNotificationToken *_frameChangeToken;
    BOOL _forceInputSelectionToEmpty;
    NSSet *_inputURLs;
    NSMutableArray *_refreshCallbacks;
}

+ (id)utilityConfiguredDisclosureView;
+ (id)notApplicablePlaceholder;
+ (id)emptySelectionPlaceholder;
+ (id)defaultViewNibName;
@property(readonly) DVTExtension *displayedCategory; // @synthesize displayedCategory=_displayedCategory;
@property(readonly) NSSet *displayedSlices; // @synthesize displayedSlices=_displayedSlices;
@property(copy, nonatomic) NSArray *builtinCategories; // @synthesize builtinCategories=_builtinCategories;
@property(readonly) DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property(readonly) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(readonly) DVTChooserView *chooserView; // @synthesize chooserView=_chooserView;
- (void).cxx_destruct;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)invalidateContentView:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)workspaceWindowIsClosing;
- (void)clearInputsAndStopObserving;
- (void)themeDidChange:(id)arg1;
- (void)loadView;
- (void)userSelectedCategoryChoiceFromMenu:(id)arg1;
- (void)simulateUserSelectionOfChoice:(id)arg1;
- (void)chooserView:(id)arg1 userDidSelectChoices:(id)arg2;
- (void)noteUserDidExplicitlyChooseChoice:(id)arg1;
- (CDUnknownBlockType)willReplaceSliceViewControllers:(id)arg1;
- (void)_rebuildCategoriesAndStack;
- (id)deriveInputSelection;
- (id)navigableItemsForSelection:(id)arg1;
- (id)_preferredChoiceForChoices:(id)arg1;
- (void)_rebuildStackWithNavigableItems:(id)arg1;
- (void)_forceRefreshAndEmpty;
- (void)pushContentNavigables:(id)arg1 toInstalledSlices:(id)arg2;
- (void)prepareToRemoveSlices:(id)arg1 forCategory:(id)arg2;
- (void)prepareToAddSlices:(id)arg1 forCategory:(id)arg2;
- (id)selectedDocuments;
- (void)setSelectedDocuments:(id)arg1;
- (void)autoreleaseEditorDocument:(id)arg1;
- (id)computeSelectedDocumentsForNavigables:(id)arg1;
- (BOOL)documentsNeededForSlices:(id)arg1;
- (void)_inputEditorDocumentWillClose:(id)arg1;
- (void)_stackClippingViewFrameChanged:(id)arg1;
- (void)_updateLastDisclosureViewBorderColor;
- (id)_categoriesForNavigables:(id)arg1;
- (id)editorContributedCategoryExtensionsForNavigable:(id)arg1;
- (id)_categoriesForCategoryIdentifiers:(id)arg1;
- (id)_categoryForCategoryIdentifier:(id)arg1;
- (id)choiceMatchingExtensionIdentifier:(id)arg1;
- (id)defaultChoice;
- (id)_choicesForCategories:(id)arg1;
- (id)_choiceForCategory:(id)arg1;
- (id)_sliceViewsForSlices:(id)arg1 inCategory:(id)arg2;
- (id)_cachedSliceViewForSlice:(id)arg1 inCategory:(id)arg2;
- (id)_disclosureViewForWrappingContentView:(id)arg1 fromSlice:(id)arg2;
- (id)_cachedContentViewForSlice:(id)arg1 inCategory:(id)arg2;
- (id)_contentViewForSlice:(id)arg1 inCategory:(id)arg2;
- (void)discloseViewForExtensionIfNeeded:(id)arg1;
- (id)viewControllerForUtilitySlice:(id)arg1;
- (id)viewControllerForContentView:(id)arg1;
- (id)_currentlyInstalledContentViewForUtilitySlice:(id)arg1;
- (id)navigableItemCoordinator:(id)arg1 editorDocumentForNavigableItem:(id)arg2;
- (void)dropRetainedDocument;
- (void)performBlockAfterNextRefresh:(CDUnknownBlockType)arg1;
- (void)setSelectedCategoryChoices:(id)arg1;
- (id)selectedCategoryChoices;
@property(readonly) DVTChoice *selectedCategoryChoice;
- (void)validateIfNeeded;
- (id)selectedCategory;
- (void)prepareToRemoveContentView:(id)arg1 forSlice:(id)arg2 inCategory:(id)arg3;
- (void)prepareToAddContentView:(id)arg1 forSlice:(id)arg2 inCategory:(id)arg3;
- (id)placeholderStringForInputNavigableItems:(id)arg1 derivedItems:(id)arg2 inCategory:(id)arg3;
- (id)navigableItemsForInputNavigableItems:(id)arg1 inCategory:(id)arg2;
- (id)titleKeyPathForSlice:(id)arg1;
- (id)titleForSlice:(id)arg1;
- (id)toolTipForCategoryExtension:(id)arg1;
- (id)titleForCategoryExtension:(id)arg1;
- (id)alternateImageForCategoryExtension:(id)arg1;
- (id)imageForCategoryExtension:(id)arg1;
- (BOOL)categorySupportsMultipleSlices:(id)arg1;
- (id)slicesForNavigableItems:(id)arg1 inCategory:(id)arg2 withWorkspaceDocument:(id)arg3;
- (id)categoryIdentifiersForEditorExtension:(id)arg1;
- (id)preferredCategoriesPersistenceKey;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

