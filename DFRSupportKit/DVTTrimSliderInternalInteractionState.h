//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DVTTrimSliderInternalInteractionState : NSObject
{
    double _dragCurrentLocation;
    double _dragStartLocation;
    long long _handleStartPosition;
}

@property long long handleStartPosition; // @synthesize handleStartPosition=_handleStartPosition;
@property double dragStartLocation; // @synthesize dragStartLocation=_dragStartLocation;
@property double dragCurrentLocation; // @synthesize dragCurrentLocation=_dragCurrentLocation;
- (double)currentDragOffset;

@end

