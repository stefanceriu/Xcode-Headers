//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLMorphDeformerComponent-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class MDLAnimatedScalarArray, NSArray, NSData, NSString;

@interface MDLMorphDeformer : NSObject <NSCopying, MDLMorphDeformerComponent>
{
    NSArray *_targetShapes;
    MDLAnimatedScalarArray *_weights;
    NSData *_targetWeights;
    NSData *_targetCounts;
}

@property(retain, nonatomic) NSData *targetCounts; // @synthesize targetCounts=_targetCounts;
@property(retain, nonatomic) NSData *targetWeights; // @synthesize targetWeights=_targetWeights;
@property(retain, nonatomic) MDLAnimatedScalarArray *weights; // @synthesize weights=_weights;
@property(readonly, nonatomic) NSArray *targetShapes; // @synthesize targetShapes=_targetShapes;
- (void).cxx_destruct;
- (unsigned long long)copyShapeSetTargetCountsInto:(unsigned int *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)copyShapeSetTargetWeightsInto:(float *)arg1 maxCount:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *shapeSetTargetCounts;
@property(readonly, nonatomic) NSArray *shapeSetTargetWeights;
- (id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(const float *)arg2 count:(unsigned long long)arg3 shapeSetTargetCounts:(const unsigned int *)arg4 count:(unsigned long long)arg5;
- (id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(id)arg2 shapeSetTargetCounts:(id)arg3;
- (id)initWithOther:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

