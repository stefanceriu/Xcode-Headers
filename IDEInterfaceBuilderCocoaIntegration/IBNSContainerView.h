//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IBNSContainerView : NSView <IBDocumentArchiving>
{
    BOOL _encodeAsRuntimeInstance;
}

+ (int)ibLibraryInclusionStatusForTargetRuntime:(id)arg1 andDocumentClass:(Class)arg2 assetIdentifier:(id)arg3;
@property BOOL encodeAsRuntimeInstance; // @synthesize encodeAsRuntimeInstance=_encodeAsRuntimeInstance;
- (void)drawRect:(struct CGRect)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoder;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (id)ibSupportedOutgoingSegueClasses;
- (BOOL)ibCanBeValidTriggerSegueSource;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (BOOL)ibSupportsMultipleSeguesFromTrigger;
- (id)ibQualifyingInfoForDefaultLabel;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibTypeNameForDefaultLabel;
- (id)ibRuntimeClassName;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

