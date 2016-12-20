//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCSLocalIntegrationLoadMoreItem.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"
#import "IDELogNavigatorItem.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString;

@interface XCSLocalIntegrationLoadMoreItem (IDE) <IDEKeyDrivenNavigableItemRepresentedObject, IDELogNavigatorItem>
+ (id)keyPathsAffectingProgress;
- (void)loadMore;
@property(readonly) DVTFileDataType *navigableItem_documentType;
- (void)update;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
- (unsigned long long)result;
- (long long)currentStep;
- (long long)progress;
@property(readonly, nonatomic) NSImage *image;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
@property(readonly, nonatomic) NSString *subtitle;
- (id)title;
- (BOOL)isValid;
- (void)setProgressValue:(long long)arg1;
- (long long)progressValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

