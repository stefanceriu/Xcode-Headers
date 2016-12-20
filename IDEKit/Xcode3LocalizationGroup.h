//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSMutableDictionary, NSString;

@interface Xcode3LocalizationGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableDictionary *_children;
    Xcode3LocalizationGroup *_parent;
    NSString *_name;
}

@property(retain) NSString *name; // @synthesize name=_name;
@property __weak Xcode3LocalizationGroup *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)childWithName:(id)arg1;
- (void)removeChildForName:(id)arg1;
- (void)addChild:(id)arg1 forName:(id)arg2;
- (id)children;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (id)initWithName:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

