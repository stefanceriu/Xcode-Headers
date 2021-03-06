//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSliderCell.h>

@class NSColor, NSImage;

@interface DYRangeSliderCell : NSSliderCell
{
    NSImage *_knobImage;
    struct CGRect _drawInFrame;
    struct DYRangeValue _origValue;
    double _trackOffset;
    float _cancelLimit;
    int _activeKnobPart;
    int _trackCount;
    BOOL _tracking;
    NSColor *_inactiveBarColor;
    NSColor *_activeBarColor;
    struct DYRangeValue _rangeValue;
}

+ (BOOL)prefersTrackingUntilMouseUp;
@property(nonatomic) struct DYRangeValue rangeValue; // @synthesize rangeValue=_rangeValue;
- (void).cxx_destruct;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawSelfWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawKnob;
- (struct CGRect)_knobRectForPart:(int)arg1 inFrame:(struct CGRect)arg2 flipped:(BOOL)arg3;
- (struct CGRect)knobRectFlipped:(BOOL)arg1;
- (BOOL)isVertical;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)getBarBounds:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (id)objectValue;
- (id)stringValue;
- (id)description;
@property(nonatomic) double maxExtent;
@property(nonatomic) double minExtent;
- (id)init;

@end

