//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSourceControlRevisionLocation, DVTSourceControlVisualLogItem, DVTSourceControlWorkingCopy, NSImage, NSString;

@interface _TtC18IDESourceControlUI26SourceControlLogItemHolder : NSObject
{
    // Error parsing type: , name: logItem
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: ideTypeIdentifier
    // Error parsing type: , name: name
    // Error parsing type: , name: documentLocation
    // Error parsing type: , name: location
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)ideModelObjectTypeIdentifier;
@property(nonatomic, readonly) NSString *navigableItem_archivingIdentifer;
@property(nonatomic, readonly) NSString *navigableItem_name;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
@property(nonatomic, retain) DVTSourceControlRevisionLocation *location; // @synthesize location;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic, retain) DVTSourceControlVisualLogItem *logItem; // @synthesize logItem;

@end

