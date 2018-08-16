//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class DVTTextLayer, NSAttributedString, NSImage, NSString;

@interface DVTImageAndTextLayer : CALayer
{
    double _imageToTextSpacing;
    DVTTextLayer *_textLayer;
    CALayer *_imageLayer;
    struct CGSize _imageSize;
}

+ (struct CGColor *)defaultTextShadowColor;
+ (id)defaultAttributes;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) double imageToTextSpacing; // @synthesize imageToTextSpacing=_imageToTextSpacing;
- (void).cxx_destruct;
- (void)layoutSublayers;
@property(readonly) struct CGRect stringRect;
@property(readonly) struct CGRect imageRect;
@property(copy) NSString *textAlignmentMode;
@property(retain) NSImage *image;
@property(copy) NSAttributedString *attributedStringValue;
@property(copy) NSString *stringValue;
- (id)init;

@end

