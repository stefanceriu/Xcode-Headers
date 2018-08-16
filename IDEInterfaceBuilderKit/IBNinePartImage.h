//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface IBNinePartImage : NSObject
{
    NSImage *_images[3][3];
}

+ (id)ninePartImageWithCenterPixelOfImage:(id)arg1;
- (void).cxx_destruct;
- (BOOL)canBeDrawnAtSize:(struct CGSize)arg1;
- (struct CGSize)minimumSize;
- (void)writeOutDebugImages;
- (void)drawInRect:(struct CGRect)arg1 unflip:(BOOL)arg2 drawCenterComponent:(BOOL)arg3;
- (id)imageAtPosition:(CDUnion_31865a80)arg1;
- (id)initWithImage:(id)arg1 center:(struct CGRect)arg2;

@end

