//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@interface SCNPhysicsBehavior : NSObject <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNUID_instanciateWithOption:(id)arg1;
+ (id)SCNUID_creationOptions;
- (BOOL)hasReferenceToPhysicsBody:(id)arg1;
- (id)bodyB;
- (id)bodyA;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

