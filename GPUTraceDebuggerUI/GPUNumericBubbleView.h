//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class DVTMeterThreshold, NSColor;

__attribute__((visibility("hidden")))
@interface GPUNumericBubbleView : NSView
{
    double _value;
    NSColor *_defaultColor;
    DVTMeterThreshold *_midRangeThreshold;
    DVTMeterThreshold *_highRangeThreshold;
}

+ (id)textAttributes;
@property(retain, nonatomic) DVTMeterThreshold *highRangeThreshold; // @synthesize highRangeThreshold=_highRangeThreshold;
@property(retain, nonatomic) DVTMeterThreshold *midRangeThreshold; // @synthesize midRangeThreshold=_midRangeThreshold;
@property(retain, nonatomic) NSColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)drawGraphInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

