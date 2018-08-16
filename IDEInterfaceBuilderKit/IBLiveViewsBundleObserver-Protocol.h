//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBLiveViewsBundle, NSError, NSObject;
@protocol IBLiveViewsBundleObserverEnvironment;

@protocol IBLiveViewsBundleObserver <NSObject>
- (NSObject<IBLiveViewsBundleObserverEnvironment> *)environmentForObservingLiveViewsBundle:(IBLiveViewsBundle *)arg1;
- (void)liveViewsBundleWillInvalidate:(IBLiveViewsBundle *)arg1;
- (void)liveViewsBundleDidFinishBuilding:(IBLiveViewsBundle *)arg1 error:(NSError *)arg2;
- (void)liveViewsBundleNeedsToBeRebuilt:(IBLiveViewsBundle *)arg1;
@end

