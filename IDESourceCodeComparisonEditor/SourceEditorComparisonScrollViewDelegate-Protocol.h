//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceCodeComparisonEditor/NSObject-Protocol.h>

@class NSClipView, NSEvent, NSScrollView, NSScroller;

@protocol SourceEditorComparisonScrollViewDelegate <NSObject>
- (void)reflectScrolledClipView:(NSClipView *)arg1;
- (NSScroller *)scrollView:(NSScrollView *)arg1 pointInVisibleScroller:(struct CGPoint)arg2;
- (void)scrollViewDidSetFrameSize:(NSScrollView *)arg1;
- (void)scrollViewDidEndLiveResize:(NSScrollView *)arg1;
- (void)scrollViewWillStartLiveResize:(NSScrollView *)arg1;
- (BOOL)scrollView:(NSScrollView *)arg1 shouldHandleScrollWheelEvent:(NSEvent *)arg2;
@end

