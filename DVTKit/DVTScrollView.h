//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class _DVTScrollViewSeparatorView;

@interface DVTScrollView : NSScrollView
{
    BOOL _handleBoundsOrFrameChangePending;
    _DVTScrollViewSeparatorView *_bottomBorderView;
    id _contentViewBoundsChangeNotificationToken;
    id _documentViewFrameChangeNotificationToken;
    BOOL _showsBorderOnBottom;
    BOOL _borderComesAndGoesBasedOnScrollPosition;
}

@property(nonatomic) BOOL borderComesAndGoesBasedOnScrollPosition; // @synthesize borderComesAndGoesBasedOnScrollPosition=_borderComesAndGoesBasedOnScrollPosition;
@property(nonatomic) BOOL showsBorderOnBottom; // @synthesize showsBorderOnBottom=_showsBorderOnBottom;
- (void).cxx_destruct;
- (void)tile;
- (void)_defferedHandleBoundsOrFrameChanged;
- (void)_handleBoundsOrFrameChanged;
- (void)_conditionallyInstallOrRemoveNotificationObservers;
- (void)viewDidMoveToWindow;
- (void)_dvtScrollViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

