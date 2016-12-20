//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBNSTouchBarItem.h"

#import "IBDocumentArchiving.h"

@class NSString, NSTouchBarItem;

@interface IBNSSpaceTouchBarItem : IBNSTouchBarItem <IBDocumentArchiving>
{
    NSTouchBarItem *_runtimeSpacerTouchBarItem;
}

+ (id)allSpacingLabels;
+ (id)allSpacingIdentifiers;
+ (id)spacingIdentifierToLabelMapping;
+ (id)keyPathsForValuesAffectingIdentifier;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void).cxx_destruct;
- (id)runtimeTouchBarItem;
- (void)drawTouchBarPlaceholderInRect:(struct CGRect)arg1;
- (BOOL)touchBarItemDrawsPlaceholder;
- (void)drawFlexibleSpaceInRect:(struct CGRect)arg1;
- (void)drawFixedSpaceInRect:(struct CGRect)arg1;
- (id)solidStrutPathWithStrokeWidth:(double)arg1 centeredInRect:(struct CGRect)arg2;
- (id)ibMutuallyExclusiveItemsFromItems:(id)arg1;
- (BOOL)ibInspectedCustomizationLabelIsVisible;
- (BOOL)ibInspectedIdentifierIsVisible;
- (id)ibTypeNameForDefaultLabel;
- (void)setIbInspectedWidth:(long long)arg1;
- (long long)ibInspectedWidth;
- (id)ibTouchBarItemDefaultDragImageName;
- (id)ibDefaultImage;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
