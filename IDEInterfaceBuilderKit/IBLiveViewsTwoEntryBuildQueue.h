//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBLiveViewsTrackedBuildOperation;

@interface IBLiveViewsTwoEntryBuildQueue : NSObject
{
    IBLiveViewsTrackedBuildOperation *_activeTrackedBuildOperation;
    IBLiveViewsTrackedBuildOperation *_pendingTrackedBuildOperation;
}

@property(retain, nonatomic) IBLiveViewsTrackedBuildOperation *pendingTrackedBuildOperation; // @synthesize pendingTrackedBuildOperation=_pendingTrackedBuildOperation;
@property(retain, nonatomic) IBLiveViewsTrackedBuildOperation *activeTrackedBuildOperation; // @synthesize activeTrackedBuildOperation=_activeTrackedBuildOperation;
- (void).cxx_destruct;

@end
