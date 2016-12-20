//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class SCNPhysicsShape;

@protocol SCNPhysicsBodyJSExport <JSExport>
+ (id)bodyWithType:(long long)arg1 shape:(SCNPhysicsShape *)arg2;
+ (id)kinematicBody;
+ (id)dynamicBody;
+ (id)staticBody;
@property(nonatomic, getter=isAffectedByGravity) BOOL affectedByGravity;
@property(nonatomic) unsigned long long contactTestBitMask;
@property(nonatomic) unsigned long long collisionBitMask;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) struct SCNVector3 angularVelocityFactor;
@property(nonatomic) struct SCNVector3 velocityFactor;
@property(nonatomic) double angularDamping;
@property(nonatomic) double damping;
@property(nonatomic) struct SCNVector4 angularVelocity;
@property(nonatomic) struct SCNVector3 velocity;
@property(nonatomic) BOOL allowsResting;
@property(readonly, nonatomic) BOOL isResting;
@property(retain, nonatomic) SCNPhysicsShape *physicsShape;
@property(nonatomic) double rollingFriction;
@property(nonatomic) double restitution;
@property(nonatomic) double friction;
@property(nonatomic) double charge;
@property(nonatomic) BOOL usesDefaultMomentOfInertia;
@property(nonatomic) struct SCNVector3 momentOfInertia;
@property(nonatomic) double mass;
@property(nonatomic) long long type;
- (id)copy;
- (void)resetTransform;
- (void)clearAllForces;
- (void)applyTorque:(struct SCNVector4)arg1 impulse:(BOOL)arg2;
- (void)applyForce:(struct SCNVector3)arg1 atPosition:(struct SCNVector3)arg2 impulse:(BOOL)arg3;
- (void)applyForce:(struct SCNVector3)arg1 impulse:(BOOL)arg2;
@end

