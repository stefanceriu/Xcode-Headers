//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBICMipmapSet.h"

@interface IBICMipmapSet (DisplayAdditions)
- (id)mediaResource;
- (BOOL)shouldIncludeInMediaLibrary;
- (void)populateChildrenForInclusionInMediaLibrary:(id)arg1;
- (BOOL)isDisplayNameEditable;
- (id)synthesizeAncestorsIfNeededToAllowHostingInContainer:(id)arg1;
- (void)prepareToReatatchForDragWithContext:(id)arg1;
- (void)prepareToDetatchForDragWithContext:(id)arg1;
- (BOOL)isDraggable;
- (id)overviewCapsuleSpecification;
- (id)detachedSlottedAssetRepByAcceptingPasteboardObject:(id)arg1 forRepIdentifier:(id)arg2;
- (void)performDeleteInDocument:(id)arg1;
- (BOOL)ibInspectedIsContainedInCubeTextureSet;
- (BOOL)ibInspectedIsContainedInFlatTextureSet;
- (void)setIbInspectedNumberOfLevels:(id)arg1;
- (long long)ibInspectedNumberOfLevels;
- (long long)maxConflictFreeLevel;
- (void)fixNumberOfLevels:(long long)arg1;
- (void)setIbInspectedLevelMode:(long long)arg1;
- (long long)ibInspectedLevelMode;
- (void)setLevelModeViaMutator:(long long)arg1;
- (id)dragImage;
- (id)image;
- (id)includedAttributeUtilitySlicesForChild:(id)arg1;
@end

