//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class NSTextStorage;

@interface NSTextView (IBNSTextViewIntegration)
+ (id)keyPathsForValuesAffectingIbIncrementalSearchingEnabled;
+ (id)keyPathsForValuesAffectingIbInspectedFindStyle;
+ (id)keyPathsForValuesAffectingIbShadowedUsesFindBar;
+ (id)keyPathsForValuesAffectingIbShadowedLayoutOrientation;
+ (id)keyPathsForValuesAffectingIbInspectedAllowsOnlyRomanCharacters;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (BOOL)ibShouldPropagateFramesDuringFrameDecision;
- (BOOL)ibShouldUseConstraintsInsteadOfAutoresizingWhenChildOfClipView;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)setIbInspectedAllowsOnlyRomanCharacters:(BOOL)arg1;
- (BOOL)ibInspectedAllowsOnlyRomanCharacters;
@property BOOL ibShadowedIncrementalSearchingEnabled;
- (void)unarchiveAutomaticTextCompletionEnabled:(id)arg1;
- (void)archiveAutomaticTextCompletionEnabled:(id)arg1;
- (void)unarchiveAllowsCharacterPickerTouchBarItem:(id)arg1;
- (void)archiveAllowsCharacterPickerTouchBarItem:(id)arg1;
@property long long ibArchivedFindStyle;
@property BOOL ibShadowedUsesFindBar;
@property long long ibShadowedLayoutOrientation;
@property BOOL ibShadowedUsesInspectorBar;
@property(copy) NSTextStorage *ibShadowedTextStorage;
- (struct CGSize)ibNearestLegalBoundsSize;
@property BOOL ibShadowedAllowsNonContiguousLayout;
- (BOOL)ibIsUserMovable;
- (BOOL)ibIsUserSizable;
- (id)ibPasteboardTypes;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibLocalAdditionalLocalizableAttributeKeyPaths;
- (id)_ibLocalAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (BOOL)ibTouchBarPropertiesAreAvailable;
@end

