//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScreen.h>

@interface NSScreen (DVTNSScreenAdditions)
+ (double)dvt_maximumBackingScaleFactor;
+ (id)dvt_backingScaleFactors;
+ (id)dvt_commonScaleFactors;
+ (struct CGPoint)dvt_coreGraphicsScreenPointForAppKitScreenPoint:(struct CGPoint)arg1;
+ (id)dvt_screenContainingPoint:(struct CGPoint)arg1;
- (struct CGPoint)dvt_frameOriginToCenterWindowWithSize:(struct CGSize)arg1;
- (struct CGRect)dvt_visibleFrame;
@end

