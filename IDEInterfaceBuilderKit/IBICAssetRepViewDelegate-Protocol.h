//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBICAssetRepView, NSImage;

@protocol IBICAssetRepViewDelegate <NSObject>

@optional
- (void)assetViewUserDidDoubleClickAssetRepView:(IBICAssetRepView *)arg1;
- (void)assetViewUserDidClickLinkButton:(IBICAssetRepView *)arg1;
- (NSImage *)assetView:(IBICAssetRepView *)arg1 imageForAnimationFrame:(long long)arg2;
- (double)assetView:(IBICAssetRepView *)arg1 durationForFrame:(long long)arg2;
- (long long)numberOfAnimationFramesInAssetView:(IBICAssetRepView *)arg1;
- (BOOL)assetViewIsAnimatable:(IBICAssetRepView *)arg1;
@end
