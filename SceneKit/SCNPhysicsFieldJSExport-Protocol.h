//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNPhysicsField;

@protocol SCNPhysicsFieldJSExport <JSExport>
+ (SCNPhysicsField *)customFieldWithEvaluationBlock:(struct SCNVector3 (^)(struct SCNVector3, struct SCNVector3, float, float, double))arg1;
+ (SCNPhysicsField *)magneticField;
+ (SCNPhysicsField *)electricField;
+ (SCNPhysicsField *)springField;
+ (SCNPhysicsField *)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (SCNPhysicsField *)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (SCNPhysicsField *)linearGravityField;
+ (SCNPhysicsField *)radialGravityField;
+ (SCNPhysicsField *)vortexField;
+ (SCNPhysicsField *)dragField;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) struct SCNVector3 direction;
@property(nonatomic) struct SCNVector3 offset;
@property(nonatomic) long long scope;
@property(nonatomic) BOOL usesEllipsoidalExtent;
@property(nonatomic) struct SCNVector3 halfExtent;
@property(nonatomic, getter=isExclusive) BOOL exclusive;
@property(nonatomic, getter=isActive) BOOL active;
@property(nonatomic) double minimumDistance;
@property(nonatomic) double falloffExponent;
@property(nonatomic) double strength;
- (id)copy;
@end

