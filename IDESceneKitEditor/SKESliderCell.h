//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSliderCell.h>

@class NSImage;

@interface SKESliderCell : NSSliderCell
{
    NSImage *knobImageHighlighted;
    NSImage *knobImage;
    NSImage *leftBar;
    NSImage *centerBar;
    NSImage *rightBar;
}

- (void).cxx_destruct;
- (BOOL)_usesCustomTrackImage;
- (void)drawBarInside:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (void)drawKnob:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

