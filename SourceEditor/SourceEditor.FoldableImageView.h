//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

@interface SourceEditor.FoldableImageView : NSView
{
    // Error parsing type: , name: image
    // Error parsing type: , name: foldedLineRange
    // Error parsing type: , name: containerLayer
    // Error parsing type: , name: topFoldLayer
    // Error parsing type: , name: topDarkeningLayer
    // Error parsing type: , name: bottomFoldLayer
    // Error parsing type: , name: bottomDarkeningLayer
    // Error parsing type: , name: desiredHeight
    // Error parsing type: , name: isDark
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)preferredSizeWithConstrainedBy:(struct CGSize)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)makeBackingLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithScreenshotting:(id)arg1 in:(struct CGRect)arg2;
- (id)initWithImage:(id)arg1;
@property(nonatomic) BOOL isDark; // @synthesize isDark;
@property(nonatomic) double desiredHeight; // @synthesize desiredHeight;
@property(nonatomic, readonly) NSImage *image; // @synthesize image;

@end

