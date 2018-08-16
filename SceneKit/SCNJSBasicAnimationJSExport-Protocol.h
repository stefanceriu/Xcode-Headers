//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAMediaTimingFunction, NSString;

@protocol SCNJSBasicAnimationJSExport <JSExport>
+ (id)animationWithKeyPath:(NSString *)arg1;
@property(copy) NSString *fillMode;
@property BOOL autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double beginTime;
@property(getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property(retain) CAMediaTimingFunction *timingFunction;
@property double duration;
@property(getter=isCumulative) BOOL cumulative;
@property(getter=isAdditive) BOOL additive;
@property(copy) NSString *keyPath;
@property(retain) id byValue;
@property(retain) id toValue;
@property(retain) id fromValue;
@end

