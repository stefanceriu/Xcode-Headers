//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindSDKFileSource.h>

@interface IDEBatchFindSDKFileSource (RuleEditorAdaptation)
+ (id)fileSourceForRuleEditorCriteria:(id)arg1 displayValues:(id)arg2;
+ (id)displayValueForRuleEditorCriterion:(id)arg1 representingFileSource:(id)arg2 inWorkspace:(id)arg3;
+ (id)ruleEditorCriteriaSucceedingCriterion:(id)arg1;
+ (id)sdkManualSDKIdentifierTextFieldCriterion;
+ (id)criteriaForChoosingSDKs;
+ (id)sdkManualSelectorCriterion;
+ (id)builtInSDKIdentifiers;
+ (id)builtInSDKIdentifierGroups;
+ (id)representativePlatformForPlatformFamily:(id)arg1;
+ (id)orderedPlatformsForPlatformFamily:(id)arg1;
+ (id)ruleEditorRootCriterion;
+ (id)sdkCanonicalNameSelectionCriterionForSDKIdentifier:(id)arg1;
+ (BOOL)isBuiltInSDKIdentifier:(id)arg1;
- (id)ruleEditorCriteria;
@end

