//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/NSObject-Protocol.h>

@class NSArray, NSString, SCNAction;

@protocol SCNActionable <NSObject>
@property(readonly, nonatomic) NSArray *actionKeys;
@property(readonly, nonatomic) BOOL hasActions;
- (void)removeAllActions;
- (void)removeActionForKey:(NSString *)arg1;
- (SCNAction *)actionForKey:(NSString *)arg1;
- (void)runAction:(SCNAction *)arg1 forKey:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (void)runAction:(SCNAction *)arg1 forKey:(NSString *)arg2;
- (void)runAction:(SCNAction *)arg1 completionHandler:(void (^)(void))arg2;
- (void)runAction:(SCNAction *)arg1;
@end

