//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class IBAccessorizedScrollViewButtonBar, NSArray, NSVisualEffectView;

@interface IBAccessorizedScrollView : NSScrollView
{
    NSVisualEffectView *_visualEffectView;
    NSArray *_windowDidChangeKeyTokens;
    BOOL _usesEmphasizedButtonBarBackgroundAppearance;
    IBAccessorizedScrollViewButtonBar *_buttonBar;
}

@property(readonly) IBAccessorizedScrollViewButtonBar *buttonBar; // @synthesize buttonBar=_buttonBar;
@property(nonatomic) BOOL usesEmphasizedButtonBarBackgroundAppearance; // @synthesize usesEmphasizedButtonBarBackgroundAppearance=_usesEmphasizedButtonBarBackgroundAppearance;
- (void).cxx_destruct;
- (void)_updateButtonBarVisualEffectView;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)tile;
- (void)awakeFromNib;

@end

