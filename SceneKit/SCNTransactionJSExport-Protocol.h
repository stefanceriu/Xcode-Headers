//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAMediaTimingFunction;

@protocol SCNTransactionJSExport <JSExport>
+ (void)setDisableActions:(BOOL)arg1;
+ (BOOL)disableActions;
+ (void)setAnimationTimingFunction:(CAMediaTimingFunction *)arg1;
+ (CAMediaTimingFunction *)animationTimingFunction;
+ (void)setAnimationDuration:(double)arg1;
+ (double)animationDuration;
+ (void)unlock;
+ (void)lock;
+ (void)flush;
+ (void)commit;
+ (void)begin;
@end

