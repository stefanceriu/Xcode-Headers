//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (IBMemberIntegration)
+ (id)ibClassDefaultImage;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (void)ibPopulateAdditionalInspectorSlices:(id)arg1 forCategory:(id)arg2;
+ (long long)ibMemberType;
- (void)ibPopulateRequiredDocumentCapabilities:(id)arg1 document:(id)arg2;
- (id)ibDefaultImage;
- (double)ibEffectiveFrameScaleFactor;
- (id)ibUserHostableDocumentClasses;
- (BOOL)ibIsInspectorSliceApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibApplicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;
- (void)ibRestoreDevelopmentStringArraysDuringCompilingInDocument:(id)arg1 usingContext:(id)arg2;
- (void)ibSwapInLocalizableStringArraysDuringCompilingInDocument:(id)arg1 usingContext:(id)arg2;
- (void)ibRestoreDevelopmentStringsDuringCompilingInDocument:(id)arg1 usingContext:(id)arg2;
- (void)ibSwapInLocalizableStringsDuringCompilingInDocument:(id)arg1 usingContext:(id)arg2;
- (void)ibSwapInLocalizableStringForDevelopmentString:(id)arg1 forKeyPath:(id)arg2 inDocument:(id)arg3 configuration:(id)arg4 context:(id)arg5;
- (void)ibRestoreLocalizableStringsIfNeededInDocument:(id)arg1 withContext:(id)arg2;
- (void)ibSwapInLocalizableStringsIfNeededInDocument:(id)arg1 withContext:(id)arg2;
- (id)ibCoerceValueToPlistTypeForIBToolDisplay:(id)arg1 forKeyPath:(id)arg2 strictness:(long long)arg3;
- (void)ibWillRemoveObject:(id)arg1 fromNonChildToManyRelation:(id)arg2;
- (void)ibWillRemoveObject:(id)arg1 fromNonChildToOneRelation:(id)arg2;
@end

