//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

@class NSImage;

@interface DVTImagePopUpButton : NSPopUpButton
{
    BOOL _trackingRectUpdatePending;
    long long _trackingRectTag;
    BOOL _showsMenuIndcatorOnlyWhileMouseInside;
    BOOL _redrawOnMouseEnteredAndExited;
    BOOL _mouseIsOver;
}

+ (id)keyPathsForValuesAffectingArrowImage;
+ (id)keyPathsForValuesAffectingIconSize;
+ (id)keyPathsForValuesAffectingIconImage;
+ (id)keyPathsForValuesAffectingUsedInToolbar;
+ (id)keyPathsForValuesAffectingImmediatelyShowsMenu;
+ (id)keyPathsForValuesAffectingShowsMenuOnlyForMultipleItems;
+ (Class)cellClass;
@property BOOL mouseIsOver; // @synthesize mouseIsOver=_mouseIsOver;
@property BOOL redrawOnMouseEnteredAndExited; // @synthesize redrawOnMouseEnteredAndExited=_redrawOnMouseEnteredAndExited;
@property(nonatomic) BOOL showsMenuIndcatorOnlyWhileMouseInside; // @synthesize showsMenuIndcatorOnlyWhileMouseInside=_showsMenuIndcatorOnlyWhileMouseInside;
- (void)rightMouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseEnteredOrExited:(BOOL)arg1;
- (void)updateMouseIsOver:(int)arg1;
- (void)updateTrackingRect;
- (void)_removeTrackingRect;
- (void)_updateTrackingRectSoon;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
@property(copy) NSImage *arrowImage;
@property struct CGSize iconSize;
@property(copy) NSImage *iconImage;
@property BOOL usedInToolbar;
@property BOOL immediatelyShowsMenu;
@property BOOL showsMenuOnlyForMultipleItems;
- (id)initWithFrame:(struct CGRect)arg1 pullsDown:(BOOL)arg2;

@end

