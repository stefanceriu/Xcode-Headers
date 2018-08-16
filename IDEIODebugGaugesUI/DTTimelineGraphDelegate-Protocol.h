//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIODebugGaugesUI/NSObject-Protocol.h>

@class DTTimelineGraph, DTTimelineGroupPlane, DTTimelinePlane, NSSet;

@protocol DTTimelineGraphDelegate <NSObject>
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsHeight:(double)arg2 forPlane:(DTTimelinePlane *)arg3;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsCollapsingGroupPlane:(DTTimelineGroupPlane *)arg2;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsExpandingGroupPlane:(DTTimelineGroupPlane *)arg2;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(DTTimelineGraph *)arg1;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearCurrentInspectionTimeForGraph:(DTTimelineGraph *)arg1;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsCurrentInspectionTime:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(DTTimelineGraph *)arg1;
- (void)inputHandlerDidFinishSelectionForGraph:(DTTimelineGraph *)arg1;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsNanosecondOffset:(long long)arg2;

@optional
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 didReorderPlane:(DTTimelinePlane *)arg2 afterPlane:(DTTimelinePlane *)arg3 withParent:(DTTimelinePlane *)arg4;
- (BOOL)inputHandlerForGraph:(DTTimelineGraph *)arg1 canReorderPlane:(DTTimelinePlane *)arg2 afterPlane:(DTTimelinePlane *)arg3 withParent:(DTTimelinePlane *)arg4;
- (BOOL)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsReorderingPlane:(DTTimelinePlane *)arg2;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsRangeIndicatorState:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearZoomIndicatorForGraph:(DTTimelineGraph *)arg1;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsZoomOutIndicatorForTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsZoomInIndicatorForTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsDisplayInspectionInfoForNanosecond:(unsigned long long)arg2 point:(struct CGPoint)arg3;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsEndLongPressDragAtTime:(unsigned long long)arg2;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsLongPressDragToTime:(unsigned long long)arg2;
- (BOOL)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsLongPressDragBeginAtTime:(unsigned long long)arg2 onPlanes:(NSSet *)arg3;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 unhandledClickAtTime:(unsigned long long)arg2 clickCount:(long long)arg3 onPlanes:(NSSet *)arg4;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 accessoryClickedOnPlane:(DTTimelinePlane *)arg2 relativeRect:(struct CGRect)arg3 completionBlock:(void (^)(void))arg4;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 iconClickedOnPlane:(DTTimelinePlane *)arg2 relativeRect:(struct CGRect)arg3 completionBlock:(void (^)(void))arg4;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 glyphClickedAt:(unsigned long long)arg2 onPlane:(DTTimelinePlane *)arg3 relativeRect:(struct CGRect)arg4 completionBlock:(void (^)(void))arg5;
@end

