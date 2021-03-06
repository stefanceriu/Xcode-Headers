//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsShaderProfiler/NSCoding-Protocol.h>
#import <GPUToolsShaderProfiler/NSCopying-Protocol.h>

@class DYShaderProfilerShaderInfo, NSMutableArray;

@interface DYShaderProfilerProgramInfo : NSObject <NSCoding, NSCopying>
{
    struct DYShaderProfilerTiming _timing;
    BOOL _valid;
    BOOL _separable;
    unsigned int _programIndex;
    unsigned int _vertexCount;
    unsigned int _fragmentCount;
    unsigned int _instanceCount;
    unsigned long long _programId;
    NSMutableArray *_drawCallInfoIndices;
    double _vertexCountPercentage;
    double _fragmentCountPercentage;
    double _instanceCountPercentage;
    DYShaderProfilerShaderInfo *_vertexShaderInfo;
    DYShaderProfilerShaderInfo *_fragmentShaderInfo;
    DYShaderProfilerShaderInfo *_computeProgramInfo;
    unsigned long long _vertexProgramId;
    unsigned long long _fragmentProgramId;
    unsigned long long _computeProgramId;
}

@property(nonatomic) unsigned long long computeProgramId; // @synthesize computeProgramId=_computeProgramId;
@property(nonatomic) unsigned long long fragmentProgramId; // @synthesize fragmentProgramId=_fragmentProgramId;
@property(nonatomic) unsigned long long vertexProgramId; // @synthesize vertexProgramId=_vertexProgramId;
@property(nonatomic) BOOL separable; // @synthesize separable=_separable;
@property(retain, nonatomic) DYShaderProfilerShaderInfo *computeProgramInfo; // @synthesize computeProgramInfo=_computeProgramInfo;
@property(retain, nonatomic) DYShaderProfilerShaderInfo *fragmentShaderInfo; // @synthesize fragmentShaderInfo=_fragmentShaderInfo;
@property(retain, nonatomic) DYShaderProfilerShaderInfo *vertexShaderInfo; // @synthesize vertexShaderInfo=_vertexShaderInfo;
@property(nonatomic) BOOL valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) struct DYShaderProfilerTiming timing; // @synthesize timing=_timing;
@property(nonatomic) double instanceCountPercentage; // @synthesize instanceCountPercentage=_instanceCountPercentage;
@property(nonatomic) unsigned int instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) double fragmentCountPercentage; // @synthesize fragmentCountPercentage=_fragmentCountPercentage;
@property(nonatomic) unsigned int fragmentCount; // @synthesize fragmentCount=_fragmentCount;
@property(nonatomic) double vertexCountPercentage; // @synthesize vertexCountPercentage=_vertexCountPercentage;
@property(nonatomic) unsigned int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(retain, nonatomic) NSMutableArray *drawCallInfoIndices; // @synthesize drawCallInfoIndices=_drawCallInfoIndices;
@property(nonatomic) unsigned long long programId; // @synthesize programId=_programId;
@property(nonatomic) unsigned int programIndex; // @synthesize programIndex=_programIndex;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isFragmentShaderMostExpensive;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

