//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESceneKitEditor/NSObject-Protocol.h>

@class NSArray, SCNAuthoringEnvironment;

@protocol SCNAuthoringEnvironmentDelegate <NSObject>

@optional
- (void)authoringEnvironment:(SCNAuthoringEnvironment *)arg1 didMoveItems:(NSArray *)arg2 fromTransform:(struct CATransform3D *)arg3;
- (void)authoringEnvironment:(SCNAuthoringEnvironment *)arg1 selectionDidUpdateWithProposedSelection:(NSArray *)arg2;
- (void)authoringEnvironment:(SCNAuthoringEnvironment *)arg1 didCloneSelection:(NSArray *)arg2;
@end

