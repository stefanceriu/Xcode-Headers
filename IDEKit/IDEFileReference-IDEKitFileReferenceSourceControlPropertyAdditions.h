//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEFileReference.h>

@class NSString;

@interface IDEFileReference (IDEKitFileReferenceSourceControlPropertyAdditions)
+ (id)keyPathsForValuesAffectingSourceControlInspectorRepositoryURLString;
+ (id)keyPathsForValuesAffectingNavigableItem_versionAndServerStatus;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlCurrentRevision;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlServerStatusFlag;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlServerStatus;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlLocalStatusFlag;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlLocalStatusString;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlLocalStatus;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlCurrentBranch;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlExtensionString;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlRepository;
@property(readonly) unsigned long long navigableItem_conflictStateForUpdateOrMerge;
- (id)sourceControlInspectorRepositoryURLString;
@property(readonly) NSString *navigableItem_versionAndServerStatus;
@property(readonly) NSString *navigableItem_sourceControlCurrentRevision;
- (int)navigableItem_sourceControlServerStatusFlag;
@property(readonly) NSString *navigableItem_sourceControlServerStatus;
- (int)navigableItem_sourceControlLocalStatusFlag;
@property(readonly) NSString *navigableItem_sourceControlLocalStatusString;
@property(readonly) NSString *navigableItem_sourceControlLocalStatus;
@property(readonly) NSString *navigableItem_sourceControlCurrentBranch;
@property(readonly) NSString *navigableItem_sourceControlExtensionString;
@property(readonly) NSString *navigableItem_sourceControlRepository;
@end

