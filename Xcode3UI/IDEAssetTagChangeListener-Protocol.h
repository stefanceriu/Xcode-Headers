//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/NSObject-Protocol.h>

@class NSString;
@protocol IDEAssetTagInfoProvider, IDETaggedAssetItem;

@protocol IDEAssetTagChangeListener <NSObject>
- (void)taggedAssetItem:(id <IDETaggedAssetItem>)arg1 didUpdateProperty:(NSString *)arg2 inAssetInfoProvider:(id <IDEAssetTagInfoProvider>)arg3;
@end

