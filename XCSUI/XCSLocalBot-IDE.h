//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCSLocalBot.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"
#import "IDELogNavigatorItem.h"
#import "XCSLocalBot.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString;

@interface XCSLocalBot (IDE) <IDEKeyDrivenNavigableItemRepresentedObject, IDELogNavigatorItem, XCSLocalBot>
- (void)menuCmd_viewBotInBrowser:(id)arg1;
- (void)menuCmd_cleanAndIntegrate:(id)arg1;
- (void)menuCmd_integrate:(id)arg1;
- (void)integrateBotAndClean:(BOOL)arg1 navigator:(id)arg2;
- (void)menuCmd_deleteBot:(id)arg1;
- (void)menuCmd_deleteBotWithHostWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_menuCmd_deleteBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)menuCmd_redefineBot:(id)arg1;
- (void)menuCmd_editBot:(id)arg1;
- (void)menuCmd_duplicateBot:(id)arg1;
- (void)menuCmd_duplicateBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)allowsAction:(SEL)arg1;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) long long progressValue;
- (id)representedObject;
@property(readonly, nonatomic) NSImage *image;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (BOOL)isValid;
- (id)statusImage;

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
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

