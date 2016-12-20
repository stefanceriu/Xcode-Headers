//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class NSString;

@interface IBGLKView : IBUIView <IBDocumentArchiving, NSCoding>
{
    int drawableColorFormat;
    int drawableDepthFormat;
    int drawableStencilFormat;
    int drawableMultisample;
    BOOL enableSetNeedsDisplay;
}

+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property BOOL enableSetNeedsDisplay; // @synthesize enableSetNeedsDisplay;
@property int drawableMultisample; // @synthesize drawableMultisample;
@property int drawableStencilFormat; // @synthesize drawableStencilFormat;
@property int drawableDepthFormat; // @synthesize drawableDepthFormat;
@property int drawableColorFormat; // @synthesize drawableColorFormat;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldDrawAsPlaceholder;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibDesignableContentView;
- (BOOL)ibSizesToFillViewControllers;
- (id)ibPasteboardTypes;
- (id)ibTypeNameForDefaultLabel;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibLocalAttributeKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

