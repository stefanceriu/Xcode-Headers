//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSObject (DVTMainThreadLatencyCheckerAdditions)
+ (void)__DVTMainThreadLatencyChecker__cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)__DVTMainThreadLatencyChecker__performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
@end

