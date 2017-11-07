//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class DVTColorPickerChooserContentView, NSColor, NSMutableArray;

@interface DVTColorPickerChooserView : NSView
{
    NSMutableArray *colorsArray;
    DVTColorPickerChooserContentView *contentView;
    NSColor *clickedColor;
    id target;
    SEL action;
}

+ (id)defaultLabel;
- (void).cxx_destruct;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)userChooseSwatch:(id)arg1;
- (id)clickedColor;
- (BOOL)isFlipped;
- (id)initWithTitle:(id)arg1 andColors:(id)arg2 suggestedColors:(id)arg3;
- (id)attributedTitleForTitle:(id)arg1;
- (id)titleAttributes;
- (id)titleFont;

@end
