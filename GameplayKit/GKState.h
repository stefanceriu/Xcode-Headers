//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKStateMachine;

@interface GKState : NSObject
{
    GKStateMachine *_stateMachine;
}

+ (id)state;
- (void).cxx_destruct;
- (void)_setStateMachine:(id)arg1;
@property(readonly, nonatomic) __weak GKStateMachine *stateMachine;
- (void)willExitWithNextState:(id)arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (void)didEnterWithPreviousState:(id)arg1;
- (BOOL)isValidNextState:(Class)arg1;
- (id)init;

@end

