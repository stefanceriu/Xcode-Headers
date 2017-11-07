//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/NSCoding-Protocol.h>
#import <DVTKit/NSCopying-Protocol.h>

@class DVTTileView, NSData, NSString, NSView;

@interface DVTTileViewItem : NSObject <NSCopying, NSCoding>
{
    NSData *_archive;
    DVTTileView *_layoutItemOwnerView;
    unsigned long long _containerReferenceCounter;
    BOOL _suppressSelectionChangeNotification;
    BOOL _selected;
    id _representedObject;
    NSView *_view;
    NSString *_title;
}

@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(copy) NSString *title; // @synthesize title=_title;
@property(retain) NSView *view; // @synthesize view=_view;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)description;
- (void)toggleSelected:(id)arg1;
- (void)_setSelectedWithoutNotification:(BOOL)arg1;
- (id)layoutView;
- (void)_setLayoutItemOwnerView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_copyConnectionsOfView:(id)arg1 referenceObject:(id)arg2 toView:(id)arg3 referenceObject:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
