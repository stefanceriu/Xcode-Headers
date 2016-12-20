//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEFileBreakpoint.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTFileDataType, DVTTextDocumentLocation, IDEFileReference, NSImage, NSString;

@interface IDEFileBreakpoint (IDEBreakpointNavigatorSupport) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (id)keyPathsForValuesAffectingNavigableItem_image;
+ (id)keyPathsForValuesAffectingNavigableItem_subtitle;
- (id)popUpEditorDisplayName;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) DVTTextDocumentLocation *navigableItem_contentDocumentLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) NSString *navigableItem_name;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

