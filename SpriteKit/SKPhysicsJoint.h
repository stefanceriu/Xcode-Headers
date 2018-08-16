//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCoding-Protocol.h>

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSCoding>
{
    BOOL __implicit;
    SKPhysicsBody *bodyA;
    SKPhysicsBody *bodyB;
    double reactionTorque;
    struct CGVector reactionForce;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL _implicit; // @synthesize _implicit=__implicit;
@property(readonly, nonatomic) double reactionTorque; // @synthesize reactionTorque;
@property(readonly, nonatomic) struct CGVector reactionForce; // @synthesize reactionForce;
@property(retain, nonatomic) SKPhysicsBody *bodyB; // @synthesize bodyB;
@property(retain, nonatomic) SKPhysicsBody *bodyA; // @synthesize bodyA;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

