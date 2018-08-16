//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsCharacter : SCNPhysicsBehavior
{
    struct {
        SCNPhysicsBody *characterBody;
        struct SCNVector3 direction;
        double velocity;
        double jumpSpeed;
    } _definition;
    struct btCharacterControllerInterface *_characterController;
    struct btPairCachingGhostObject *_ghostObject;
    struct btOverlapFilterCallback *_filterCallback;
    struct btCapsuleShape *_capsuleShape;
    SCNPhysicsWorld *_world;
}

- (void)_handleCreateIfNeeded:(BOOL)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)_update;
@property(nonatomic) double jumpSpeed;
@property(nonatomic) double velocity;
- (void)jump;
- (BOOL)canJump;
- (void)setWalkingDirection:(struct SCNVector3)arg1;
- (void)dealloc;
- (id)initWithCharacter:(id)arg1;

@end

