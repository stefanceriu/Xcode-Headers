//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SCNMaterialProperty, SCNOrderedDictionary, SCNTechnique;

@interface SCNCamera : NSObject <SCNAnimatable, SCNTechniqueSupport, NSCopying, NSSecureCoding>
{
    // Error parsing type: ^{__C3DCamera={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]})dd}ffffiib1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})fffffffffffffffffffff{?=fffffii}^{__C3DEffectSlot}Q^{__C3DFXTechnique}}, name: _camera
    unsigned int _isPresentationInstance:1;
    unsigned int _custom:1;
    unsigned int _legacyFov:1;
    unsigned int _usesOrthographicProjection:1;
    unsigned int _automaticallyAdjustsZRange:1;
    unsigned int _fillMode:1;
    unsigned int _projectionDirection:1;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    float _xFov;
    float _yFov;
    double _orthographicScale;
    double _zNear;
    double _zFar;
    float _fieldOfView;
    float _focalLength;
    float _sensorSize;
    float _fStop;
    float _focusDistance;
    float _dofIntensity;
    long long _bladeCount;
    long long _focalBlurSampleCount;
    float _aspectRatio;
    unsigned long long _categoryBitMask;
    struct CATransform3D _projectionTransform;
    SCNTechnique *_technique;
    SCNMaterialProperty *_colorGrading;
    BOOL _wantsHDR;
    float _whitePoint;
    float _averageGray;
    float _exposureOffset;
    float _minimumExposure;
    float _maximumExposure;
    BOOL _wantsExposureAdaptation;
    float _exposureAdaptationDuration;
    float _exposureAdaptationBrighteningSpeedFactor;
    float _exposureAdaptationDarkeningSpeedFactor;
    double _exposureAdaptationHistogramRangeHighProbability;
    double _exposureAdaptationHistogramRangeLowProbability;
    long long _exposureAdaptationMode;
    float _bloomIntensity;
    float _bloomThreshold;
    float _bloomBlurRadius;
    float _motionBlurIntensity;
    float _vignettingPower;
    float _vignettingIntensity;
    float _colorFringeStrength;
    float _colorFringeIntensity;
    float _saturation;
    float _contrast;
    struct {
        float intensity;
        float radius;
        float bias;
        float depthThreshold;
        float normalThreshold;
        long long sampleCount;
        long long downSample;
    } _screenSpaceAmbientOcclusion;
}

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingFocalLength;
+ (id)keyPathsForValuesAffectingFieldOfView;
+ (id)camera;
+     // Error parsing type: @24@0:8^{__C3DCamera={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]})dd}ffffiib1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})fffffffffffffffffffff{?=fffffii}^{__C3DEffectSlot}Q^{__C3DFXTechnique}}16, name: cameraWithCameraRef:
+ (id)cameraWithMDLCamera:(id)arg1;
+ (id)SCNUID_instanciateWithOption:(id)arg1;
+ (id)SCNUID_propertyOrdering;
+ (id)SCNUID_enumForProperty:(id)arg1;
+ (id)SCNUID_creationOptions;
+ (id)SCNUID_propertiesToFilterOut;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNCamera:(id)arg1;
@property(nonatomic) double focalSize;
@property(nonatomic) double focalDistance;
- (void)_customEncodingOfSCNCamera:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
@property(readonly, nonatomic) SCNMaterialProperty *colorGrading;
- (struct CATransform3D)projectionTransformWithViewportSize:(struct CGSize)arg1;
@property(nonatomic) struct CATransform3D projectionTransform;
-     // Error parsing type: ^{__C3DCamera={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]})dd}ffffiib1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})fffffffffffffffffffff{?=fffffii}^{__C3DEffectSlot}Q^{__C3DFXTechnique}}16@0:8, name: cameraRef
- (BOOL)useLegacyFov;
- (void)setYMag:(double)arg1;
- (double)yMag;
- (void)setXMag:(double)arg1;
- (double)xMag;
- (void)setAspectRatio:(double)arg1;
- (double)aspectRatio;
@property(nonatomic) long long projectionDirection;
- (void)setFieldOfViewOrientation:(long long)arg1;
- (long long)fieldOfViewOrientation;
- (void)setFillMode:(long long)arg1;
- (long long)fillMode;
@property(nonatomic) double focusDistance;
@property(nonatomic) long long focalBlurSampleCount;
@property(nonatomic) long long apertureBladeCount;
@property(nonatomic) double fStop;
@property(nonatomic) double aperture;
@property(nonatomic) double focalLength;
@property(nonatomic) double sensorHeight;
@property(nonatomic) double fieldOfView;
- (void)_updateFocalLength;
- (void)_updateFov;
@property(nonatomic) double zNear;
@property(nonatomic) double zFar;
@property(nonatomic) double yFov;
@property(nonatomic) double xFov;
@property(nonatomic) double whitePoint;
@property(nonatomic) BOOL wantsHDR;
@property(nonatomic) BOOL wantsExposureAdaptation;
@property(nonatomic) double vignettingPower;
@property(nonatomic) double vignettingIntensity;
@property(nonatomic) BOOL usesOrthographicProjection;
@property(nonatomic) double saturation;
@property(nonatomic) double orthographicScale;
@property(nonatomic) double motionBlurIntensity;
@property(nonatomic) double minimumExposure;
@property(nonatomic) double maximumExposure;
@property(nonatomic) double focalBlurRadius;
- (void)setDofIntensity:(float)arg1;
- (float)dofIntensity;
@property(nonatomic) BOOL wantsDepthOfField;
@property(nonatomic) double exposureOffset;
- (void)setExposureAdaptationMode:(long long)arg1;
- (long long)exposureAdaptationMode;
- (void)setExposureAdaptationHistogramRangeLowProbability:(double)arg1;
- (double)exposureAdaptationHistogramRangeLowProbability;
- (void)setExposureAdaptationHistogramRangeHighProbability:(double)arg1;
- (double)exposureAdaptationHistogramRangeHighProbability;
- (void)setExposureAdaptationDuration:(double)arg1;
- (double)exposureAdaptationDuration;
@property(nonatomic) double exposureAdaptationDarkeningSpeedFactor;
@property(nonatomic) double exposureAdaptationBrighteningSpeedFactor;
@property(nonatomic) double contrast;
@property(nonatomic) double colorFringeIntensity;
@property(nonatomic) double colorFringeStrength;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) double bloomThreshold;
@property(nonatomic) double bloomIntensity;
@property(nonatomic) double bloomBlurRadius;
@property(nonatomic) double averageGray;
@property(nonatomic) BOOL automaticallyAdjustsZRange;
- (void)setScreenSpaceAmbientOcclusionDownSample:(long long)arg1;
- (long long)screenSpaceAmbientOcclusionDownSample;
- (void)setScreenSpaceAmbientOcclusionSampleCount:(long long)arg1;
- (long long)screenSpaceAmbientOcclusionSampleCount;
@property(nonatomic) double screenSpaceAmbientOcclusionNormalThreshold;
@property(nonatomic) double screenSpaceAmbientOcclusionDepthThreshold;
@property(nonatomic) double screenSpaceAmbientOcclusionBias;
@property(nonatomic) double screenSpaceAmbientOcclusionRadius;
@property(nonatomic) double screenSpaceAmbientOcclusionIntensity;
- (BOOL)hasCustomProjectionTransform;
- (void)_registerAsObserver;
- (BOOL)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationCamera;
@property(copy, nonatomic) SCNTechnique *technique;
- (void)_syncObjCModel;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
-     // Error parsing type: @24@0:8^{__C3DCamera={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]})dd}ffffiib1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})fffffffffffffffffffff{?=fffffii}^{__C3DEffectSlot}Q^{__C3DFXTechnique}}16, name: initPresentationCameraWithCameraRef:
-     // Error parsing type: @24@0:8^{__C3DCamera={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]})dd}ffffiib1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})fffffffffffffffffffff{?=fffffii}^{__C3DEffectSlot}Q^{__C3DFXTechnique}}16, name: initWithCameraRef:
- (id)init;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

