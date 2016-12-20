//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSMutableSet, SCNGeometry, SCNNode, SCNRenderer;

@interface SCNAuthoringEnvironment2 : NSObject
{
    NSMutableSet *_selection;
    struct __C3DScene *_scene;
    SCNNode *_layerRoot;
    SCNNode *_lightRoot;
    SCNNode *_cameraRoot;
    SCNNode *_particlesRoot;
    SCNNode *_jointsRoot;
    struct __CFDictionary *_lightsDictionary;
    struct __CFDictionary *_camerasDictionary;
    struct __CFDictionary *_particlesDictionary;
    struct __CFDictionary *_jointsDictionary;
    SCNRenderer *_renderer;
    SCNGeometry *_lightGeometry;
    SCNGeometry *_cameraFrustumGeometry;
    SCNGeometry *_cameraGeometry;
    SCNGeometry *_cameraNearPlaneGeometry;
    SCNGeometry *_particlesGeometry;
    SCNGeometry *_jointGeometry;
    long long _displayMask;
    NSColor *_paleGreen;
    NSColor *_paleBlue;
    NSColor *_red;
    NSColor *_green;
    NSColor *_blue;
    NSColor *_cyan;
    NSColor *_yellow;
    NSColor *_orange;
    NSColor *_pink;
    NSColor *_grayLight;
    NSColor *_grayMedium;
    NSColor *_grayDark;
    NSColor *_white;
}

+ (id)authoringEnvironmentForScene:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
@property long long displayMask;
- (void)updateWithRenderer:(id)arg1;
- (void)updateCameraNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateJointNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateParticlesNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightTypeForNode:(id)arg1 source:(id)arg2 light:(id)arg3 andRatio:(float)arg4;
- (void)cancelSelection;
- (void)selectNodes:(id)arg1;
- (void)addNodeToSelection:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)removedNode:(id)arg1;
- (void)addedNode:(id)arg1;
- (void)removeJointNode:(id)arg1;
- (void)removeParticlesNode:(id)arg1;
- (void)removeLightNode:(id)arg1;
- (void)removeCameraNode:(id)arg1;
- (void)addCameraNode:(id)arg1;
- (id)cameraNearPlaneGeometry;
- (id)cameraFrustumGeometry;
- (id)cameraGeometry;
- (void)addJointNode:(id)arg1;
- (id)jointGeometry;
- (void)addParticlesNode:(id)arg1;
- (id)particlesGeometry;
- (void)addLightNode:(id)arg1;
- (id)lightGeometry;
- (void)prepareScene:(id)arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1;

@end

