//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSCustomObject.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/IBPrimarySceneObject-Protocol.h>

@class NSMenu, NSString;

@interface IBNSApplication : IBNSCustomObject <IBPrimarySceneObject, IBDocumentArchiving>
{
    NSMenu *_mainMenu;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(retain) NSMenu *mainMenu; // @synthesize mainMenu=_mainMenu;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibMustCompileWithCustomObjectSemanticsInDocument:(id)arg1;
- (Class)classForCoderWhenNotCompiling;
- (id)init;
- (id)ibPasteboardTypes;
- (id)ibSegueTemplateSceneControllerOutletDestination;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (BOOL)ibCanBecomeEntryPointForIndicator:(id)arg1 inStoryboard:(id)arg2;
- (id)ibShortDisplayName;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewDetailWithSegue:(id)arg2;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewMasterWithSegue:(id)arg2;
- (BOOL)ibIsValidPushReceiver;
- (BOOL)ibCanBeValidRelationshipDestination;
- (BOOL)ibCanBeValidTriggerSegueDestination;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibDidBecomeControllerForCompilationGroup;
- (void)ibAddStoryboardSegueTemplate:(id)arg1;
- (BOOL)ibSegueTemplatesAreTopLevel;
- (void)ibUpstreamController:(id)arg1 didBecomeDestinationOfSegue:(id)arg2;
- (void)ibWillResignSourceControllerForSegue:(id)arg1;
- (void)ibDidBecomeSourceControllerForSegue:(id)arg1;
@property(copy, nonatomic) NSString *ibExplicitStoryboardIdentifier;
- (void)setExplicitStoryboardIdentifier:(id)arg1;
- (void)ibResizeToEffectiveSimulatedSizeForSceneTreeDragImageNode;
- (id)ibInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (BOOL)ibRequiresOutletToFilesOwner;
- (id)ibDefaultImage;
- (id)ibImageForOwnedScene;
- (id)ibRuntimeClassName;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL ibInspectedIsDesignatedEntryPoint;
@property(readonly) Class superclass;

@end

