//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNScene.h>

@class MDLSkyCubeTexture;

@interface SCNScene (SceneKit_SKEAdditions)
+ (id)keyPathsForValuesAffectingIde_editEnvironmentSky;
+ (id)keyPathsForValuesAffectingIde_dontSyncEnvironment;
@property(readonly, nonatomic) BOOL ide_zUp;
@property(readonly, nonatomic) BOOL ide_yUp;
- (void)setSke_upAxis:(struct SCNVector3)arg1;
- (struct SCNVector3)ske_upAxis;
- (id)ske_subnodeFromIndexPath:(id)arg1;
@property(readonly, nonatomic) BOOL ide_editEnvironmentSky;
@property(readonly, nonatomic) BOOL ide_dontSyncEnvironment;
@property(nonatomic) BOOL ide_syncEnvironment;
@property(readonly, nonatomic) BOOL ide_generateEnvironmentSky;
@property(readonly, nonatomic) MDLSkyCubeTexture *ide_environmentSky;
@property(readonly, nonatomic) BOOL ide_generateBackgroundSky;
@property(readonly, nonatomic) MDLSkyCubeTexture *ide_backgroundSky;
@property(readonly) BOOL ide_osNoPBRSupport;
@property(readonly) BOOL ide_osPBRSupport;
@end

