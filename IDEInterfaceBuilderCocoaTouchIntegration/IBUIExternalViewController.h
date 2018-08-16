//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewController.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBExternalPrimarySceneObject-Protocol.h>

@class NSString;

@interface IBUIExternalViewController : IBUIViewController <IBExternalPrimarySceneObject, IBDocumentArchiving>
{
    NSString *_storyboardName;
    NSString *_bundleIdentifier;
    NSString *_referencedControllerIdentifier;
}

+ (void)registerMarshallingRecordHandlers;
+ (int)ibLibraryInclusionStatusForTargetRuntime:(id)arg1 andDocumentClass:(Class)arg2 assetIdentifier:(id)arg3;
+ (BOOL)ibExistsAtRuntime;
@property(copy, nonatomic) NSString *referencedControllerIdentifier; // @synthesize referencedControllerIdentifier=_referencedControllerIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *storyboardName; // @synthesize storyboardName=_storyboardName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (BOOL)ibWantsSceneMaskOrBezel;
- (BOOL)ibIsInspectorSliceApplicable:(id)arg1 forCategory:(id)arg2;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibEditorViewWithSuggestedSize:(struct CGSize)arg1 forDocument:(id)arg2;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (Class)ibEditorClass;
- (id)ibTitleForEditor;
- (id)ibRuntimeClassName;
- (id)ibTypeNameForDefaultLabel;
- (id)ibShortDisplayName;
- (BOOL)ibCanBeEmbeddedInSplitViewControllerController;
- (BOOL)ibCanBeEmbeddedInNavigationController;
- (BOOL)ibCanBeEmbeddedInTabBarController;
- (void)ibDidBecomeControllerForCompilationGroup;
@property(copy, nonatomic) NSString *ibReferencedBundleIdentifier;
@property(copy, nonatomic) NSString *ibReferencedStoryboardName;
@property(copy, nonatomic) NSString *ibReferencedControllerIdentifier;
- (void)ibWillResignSourceControllerForSegue:(id)arg1;
- (void)ibDidBecomeSourceControllerForSegue:(id)arg1;
- (void)ibAddStoryboardSegueTemplate:(id)arg1;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (BOOL)ibWantsStoryboardOutlet;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (BOOL)ibCanBecomeEntryPointForIndicator:(id)arg1 inStoryboard:(id)arg2;
- (BOOL)ibCanBeReplacedWithExternalStoryboardReference;
- (id)ibQualifyingInfoForDefaultLabel;
- (BOOL)ibWantsSceneUpdates;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *ibExplicitStoryboardIdentifier;
@property(nonatomic) BOOL ibInspectedIsDesignatedEntryPoint;
@property(readonly) Class superclass;

@end

