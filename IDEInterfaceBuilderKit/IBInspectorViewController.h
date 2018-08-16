//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

#import <IDEInterfaceBuilderKit/IBConfigurablePropertyKeyPathAdapterDelegate-Protocol.h>

@class DVTDelayedInvocation, IBDocument, IBMutableIdentityDictionary, NSArray, NSArrayController, NSDictionary, NSSet, NSString, NSUserDefaultsController, NSXMLElement;
@protocol IDEInspectorContentController;

@interface IBInspectorViewController : IDEInspectorViewController <IBConfigurablePropertyKeyPathAdapterDelegate>
{
    IBMutableIdentityDictionary *_documentToObservingTokenMap;
    DVTDelayedInvocation *_storyboardNameInvocation;
    DVTDelayedInvocation *_imageNameInvocation;
    DVTDelayedInvocation *_soundNameInvocation;
    DVTDelayedInvocation *_nibNameInvocation;
    NSSet *previousInspectedInterfaceBuilderDocuments;
    NSArrayController *_configurablePropertyAdapterController;
    NSXMLElement *_originalSlice;
    NSDictionary *_perConfigurationElementTemplatesByIdentifier;
    DVTDelayedInvocation *_viewRegenerationInvocation;
    NSArray *_previousConfigurablePropertyAdapters;
    BOOL _allInspectedDocumentsAreNotUsingAutolayout;
    BOOL _allInspectedDocumentsAreUsingAutolayout;
    NSArray *_availableStoryboardNames;
    NSArray *_availableNibNames;
    NSSet *_inspectedInterfaceBuilderDocuments;
    NSArray *_inspectedDocumentObjects;
    NSUserDefaultsController *_userDefaultsController;
    NSArray *_availableSoundNames;
    NSArray *_availableImageNames;
}

+ (id)keyPathsForValuesAffectingBundleIdentifierPlaceholder;
+ (id)keyPathsForValuesAffectingInspectedDocumentObject;
+ (id)keyPathsForValuesAffectingInspectedDocumentName;
+ (id)keyPathsForValuesAffectingInspectedDocument;
+ (id)inspectedArrayControllerKeys;
@property(copy, nonatomic) NSArray *availableImageNames; // @synthesize availableImageNames=_availableImageNames;
@property(copy, nonatomic) NSArray *availableSoundNames; // @synthesize availableSoundNames=_availableSoundNames;
@property(readonly) id <IDEInspectorContentController> configurablePropertyAdapterController; // @synthesize configurablePropertyAdapterController=_configurablePropertyAdapterController;
@property(readonly, nonatomic) NSUserDefaultsController *userDefaultsController; // @synthesize userDefaultsController=_userDefaultsController;
@property(copy, nonatomic) NSArray *inspectedDocumentObjects; // @synthesize inspectedDocumentObjects=_inspectedDocumentObjects;
@property(copy, nonatomic) NSSet *inspectedInterfaceBuilderDocuments; // @synthesize inspectedInterfaceBuilderDocuments=_inspectedInterfaceBuilderDocuments;
@property(nonatomic) BOOL allInspectedDocumentsAreUsingAutolayout; // @synthesize allInspectedDocumentsAreUsingAutolayout=_allInspectedDocumentsAreUsingAutolayout;
@property(nonatomic) BOOL allInspectedDocumentsAreNotUsingAutolayout; // @synthesize allInspectedDocumentsAreNotUsingAutolayout=_allInspectedDocumentsAreNotUsingAutolayout;
@property(copy, nonatomic) NSArray *availableNibNames; // @synthesize availableNibNames=_availableNibNames;
@property(copy, nonatomic) NSArray *availableStoryboardNames; // @synthesize availableStoryboardNames=_availableStoryboardNames;
- (void).cxx_destruct;
- (id)inspectorProperty:(id)arg1 toolTipContentFromKeyPath:(id)arg2 titleAttribute:(id)arg3 placeholderAttribute:(id)arg4;
- (id)lastObjectInKeyPath:(id)arg1;
- (id)filePathForExternalInspectorContentWithIdentifier:(id)arg1;
- (id)searchableAttributesForProperty:(id)arg1;
- (void)didSetInspectedObjects:(id)arg1;
- (id)willSetInspectedObjects:(id)arg1;
- (void)stopObservingDocument:(id)arg1;
- (void)startObservingDocument:(id)arg1;
- (void)updateVisibiltyFlags;
- (void)constrainBoundsOfSelectionToNearestLegalSize;
- (id)createNameInvocationForComputationKeyPath:(id)arg1 withStorageKeyPath:(id)arg2;
- (id)computeAvailableSoundNames;
- (id)computeAvailableImageNames;
- (id)computeResourceNamesForMediaType:(id)arg1;
- (void)updateContainerDocumentNames;
- (id)sliceElement;
- (void)expandIncludeElements:(id)arg1;
- (id)accessibilityTitleForSliverElement:(id)arg1;
- (id)attributedTitleForSliverElement:(id)arg1;
- (id)accessoryViewForInspectorProperty:(id)arg1;
- (id)perConfigurationPropertyTemplateForInspectorProperty:(id)arg1;
- (id)configurationForInspectorProperty:(id)arg1;
- (id)configurationForInspectorElement:(id)arg1;
- (id)perConfigurationPropertyTemplateForInspectorElement:(id)arg1;
- (void)setContent:(id)arg1;
- (void)regenerateViewIfNeeded:(id)arg1;
- (void)regenerateViewIfNeededWithObjects:(id)arg1;
- (BOOL)regenerateSliceXMLWithObjects:(id)arg1;
- (void)configurablePropertyKeyPathAdapterDidObserverMemberConfigurationChange:(id)arg1;
- (id)bundleIdentifierPlaceholder;
@property(readonly, nonatomic) id inspectedDocumentObject;
- (id)inspectedDocumentName;
@property(readonly, nonatomic) IBDocument *inspectedDocument;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

