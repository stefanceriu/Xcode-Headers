//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKSpriteNode.h"

#import "SKNodeWithShader.h"

@class NSNumber, NSString, NSURL, SKShader;

@interface SKSpriteNode (InspectorAdditions) <SKNodeWithShader>
+ (id)keyPathsForValuesAffectingSk_hasPhysicsBody;
+ (id)keyPathsForValuesAffectingSk_yScale;
+ (id)keyPathsForValuesAffectingSk_xScale;
+ (id)keyPathsForValuesAffectingSk_size;
+ (id)keyPathsForValuesAffectingSk_normalMapImageName;
+ (id)keyPathsForValuesAffectingSk_textureImageName;
@property(nonatomic) double sk_ikConstraintMaxAngle;
@property(nonatomic) double sk_ikConstraintMinAngle;
@property(retain, nonatomic) NSURL *sk_customSpriteShader;
@property(retain, nonatomic) NSNumber *sk_shadowedMask;
@property(retain, nonatomic) NSNumber *sk_shadowCastMask;
@property(retain, nonatomic) NSNumber *sk_lightingMask;
- (void)setSk_physicsBodyType:(int)arg1;
- (int)sk_physicsBodyType;
- (void)_refreshPhysicsBody;
- (BOOL)sk_hasPhysicsBody;
@property(nonatomic) double sk_yScale;
@property(nonatomic) double sk_xScale;
@property(nonatomic) struct CGSize sk_size;
@property(nonatomic) double sk_normalMapContrast;
@property(nonatomic) double sk_normalMapSmoothness;
@property(retain, nonatomic) NSString *sk_normalMapImageName;
- (void)sk_refreshNormalMap;
@property(retain, nonatomic) NSString *sk_textureImageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SKShader *shader;
@property(readonly) Class superclass;
@end

