//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface XCSUIInsetHorizontalDividerLine : NSView
{
    BOOL _drawPointer;
    double _optionalInset;
    NSView *_drawPointToView;
}

@property(retain, nonatomic) NSView *drawPointToView; // @synthesize drawPointToView=_drawPointToView;
@property double optionalInset; // @synthesize optionalInset=_optionalInset;
- (void).cxx_destruct;
- (void)showPointer;
- (void)hidePointer;
- (void)drawRect:(struct CGRect)arg1;

@end

