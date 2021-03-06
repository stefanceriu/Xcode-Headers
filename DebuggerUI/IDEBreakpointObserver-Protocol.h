//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DebuggerUI/NSObject-Protocol.h>

@class IDEBreakpoint, IDEBreakpointLocation, IDEWatchpoint, NSArray;

@protocol IDEBreakpointObserver <NSObject>

@optional
- (void)watchpointEnablementChanged:(IDEWatchpoint *)arg1;
- (void)breakpointLocationsAdded:(NSArray *)arg1 removed:(NSArray *)arg2;
- (void)breakpointLocationEnablementChanged:(IDEBreakpointLocation *)arg1;
- (void)breakpointEnablementChanged:(IDEBreakpoint *)arg1;
- (void)breakpointsActivationStateChanged;
@end

