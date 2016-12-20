//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBDocumentPlatformAdapter.h"

@class IBPreXcode8ColorCorrector, NSColor;

@interface IBCocoaTouchDocumentPlatformAdapter : IBDocumentPlatformAdapter
{
    IBPreXcode8ColorCorrector *_colorCorrector;
    NSColor *_storyboardGlobalTintColor;
}

@property(copy, nonatomic) NSColor *storyboardGlobalTintColor; // @synthesize storyboardGlobalTintColor=_storyboardGlobalTintColor;
- (void).cxx_destruct;
- (void)asynchronouslyPreflightShowingDocumentUIForScaleFactor:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)preflightUnarchivingDocumentReturningError:(id *)arg1;
- (id)customFontFilenamesPlistKey;
- (void)repopulateCustomFontFilenames:(id)arg1;
- (id)allCustomFontFilenames;
- (struct CGSize)storyboardCanvasPositioningScaleForSimulatedMetricsContainer:(id)arg1;
- (void)documentDidDisableMemberConfigurations;
- (void)updateDocumentSimulatedMetricsWithDeviceConfiguration:(id)arg1;
- (id)implicitIntegratorBundleDependencyIdentifier;
- (void)populateEmptyXIBDocumentWithInitialPlaceholders;
- (void)installTopLevelPlaceholderWithLabel:(id)arg1 className:(id)arg2 placeholderID:(id)arg3 andObjectID:(id)arg4;
- (id)compiledStoryboardInfoPlistFileName;
- (id)hybridNIBPackageRuntimeFileName;
- (id)defaultCompiledStoryboardInfoPlistFileName;
- (id)defaultHybridNIBPackageRuntimeFileName;
- (id)compiledStoryBoardIntermediateXibFileType;
- (void)addToManyOutletFromObject:(id)arg1 referencingInstnace:(id)arg2 byName:(id)arg3;
- (void)addOutletFromObject:(id)arg1 referencingInstnace:(id)arg2 byName:(id)arg3;
- (void)addActionFromSender:(id)arg1 toReceiver:(id)arg2 withSelector:(id)arg3;
- (id)intrinsicPackageContentForNewlyGeneratedPackageWithFileType:(id)arg1;
- (id)archiveTypeForFileType:(id)arg1;
- (void)documentWillBeginRegisteringUndoableChanges;
- (void)decodePlatformSpecificDocumentProperties:(id)arg1;
- (void)encodePlatformSpecificDocumentProperties:(id)arg1;
- (void)archivePlatformSpecificDocumentProperties:(id)arg1;
- (void)unarchivePlatformSpecificDocumentProperties:(id)arg1;
- (Class)externalReferencePlaceholderClass;
- (id)storyboardExitPlaceholder;
- (id)storyboardFirstResponderPlaceholder;
- (id)connectToSourceTeardownMethodCounterpartsForContext:(id)arg1;
- (BOOL)connectToSourceIsTargettingOSVersionWithRequiredViewUnloading;
- (id)targetRuntime;
- (id)initWithDocument:(id)arg1;

@end

