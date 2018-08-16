//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUISimulatedMetricChain.h>

@interface IBUISimulatedDeviceContextMetricChain : IBUISimulatedMetricChain
{
    long long _idiom;
    long long _orientation;
    long long _interfaceStyle;
    long long _horizontalSizeClass;
    long long _verticalSizeClass;
    struct CGSize _screenSize;
}

+ (BOOL)canBeRootOfMetricChain;
@property(readonly, nonatomic) long long verticalSizeClass; // @synthesize verticalSizeClass=_verticalSizeClass;
@property(readonly, nonatomic) long long horizontalSizeClass; // @synthesize horizontalSizeClass=_horizontalSizeClass;
@property(readonly, nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(readonly, nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
- (id)singleLinkPrettyDescription;
- (id)explicitWindowSize;
- (id)copyWithPrecedingMetric:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithScreenSize:(struct CGSize)arg1 idiom:(long long)arg2 orientation:(long long)arg3 interfaceStyle:(long long)arg4 horizontalSizeClass:(long long)arg5 verticalSizeClass:(long long)arg6;
- (id)initWithScreenSize:(struct CGSize)arg1 idiom:(long long)arg2 orientation:(long long)arg3 traitCollection:(id)arg4;

@end

