//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEContainerFileReferenceNavigableItem.h>

#import <IDEKit/IDENavigableItemDebugAreaDelegate-Protocol.h>
#import <IDEKit/IDENavigableItemDebugBarDelegate-Protocol.h>

@class NSString;

@interface IDEPlaygroundNavigableItem : IDEContainerFileReferenceNavigableItem <IDENavigableItemDebugBarDelegate, IDENavigableItemDebugAreaDelegate>
{
}

- (id)representedURL;
- (id)contentDocumentLocation;
@property(readonly, nonatomic) NSString *debugAreaExtensionID;
- (id)debugAreaDelegate;
@property(readonly, nonatomic) NSString *debugBarContentProviderCategory;
- (id)debugBarDelegate;
- (BOOL)_useLegacyDebugArea;

@end

