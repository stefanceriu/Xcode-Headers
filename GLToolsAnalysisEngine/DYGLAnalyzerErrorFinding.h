//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsServices/DYAnalyzerErrorFinding.h>

@interface DYGLAnalyzerErrorFinding : DYAnalyzerErrorFinding
{
}

- (BOOL)isTextureImageCompletelyUpdated;
- (BOOL)isBufferDataCompletelyUpdated;
- (BOOL)isInefficientStateUpdate;
- (BOOL)isRedundantCallOrQuery;
- (BOOL)isRedundantCall;
- (BOOL)isFrameStatistics;
- (BOOL)isDataRestoreUnnecessaryForFunc:(const struct Function *)arg1 targetArgIndex:(int)arg2 objectType:(unsigned int)arg3 analyzerEngine:(id)arg4;
- (id)localizedKind;
- (id)synopsis;

@end

