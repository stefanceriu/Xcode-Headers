//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class IDENavigableItem, Xcode3BuildFile;

@interface Xcode3BuildFileNavigableItem : IDEKeyDrivenNavigableItem
{
    IDENavigableItem *_realNavigableItem;
    BOOL _hasInitializedNavItem;
}

+ (id)keyPathsForValuesAffectingContentDocumentLocation;
+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingName;
@property(retain) IDENavigableItem *realNavigableItem; // @synthesize realNavigableItem=_realNavigableItem;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)textColor;
- (id)contentDocumentLocation;
- (id)image;
- (id)name;
- (BOOL)checkNavigableItem;
@property(readonly) Xcode3BuildFile *_buildFile;

@end

