//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HexFiend/HFRepresenter.h>

@interface HFLineCountingRepresenter : HFRepresenter
{
    double lineHeight;
    unsigned long long digitsToRepresentContentsLength;
    unsigned long long minimumDigitCount;
    unsigned long long lineNumberFormat;
    double preferredWidth;
    double digitAdvance;
}

+ (struct CGPoint)defaultLayoutPosition;
- (void)setStartingLineNumber:(unsigned long long)arg1;
- (unsigned long long)digitCount;
- (unsigned long long)minimumDigitCount;
- (void)setMinimumDigitCount:(unsigned long long)arg1;
- (void)controllerDidChange:(unsigned long long)arg1;
- (void)initializeView;
- (void)cycleLineNumberFormat;
- (void)setLineNumberFormat:(unsigned long long)arg1;
- (unsigned long long)lineNumberFormat;
- (double)minimumViewWidthForBytesPerLine:(unsigned long long)arg1;
- (void)updateMinimumViewWidth;
- (double)preferredWidth;
- (void)updateLineRangeToDraw;
- (void)updateBytesPerLine;
- (void)updateLineNumberFormat;
- (void)updateFontAndLineHeight;
- (void)updateDigitAdvanceWithFont:(id)arg1;
- (void)postMinimumViewWidthChangedNotification;
- (id)createView;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

