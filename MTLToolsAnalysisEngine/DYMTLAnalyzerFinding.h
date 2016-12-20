//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYAnalyzerFinding.h"

@class NSBundle;

@interface DYMTLAnalyzerFinding : DYAnalyzerFinding
{
    NSBundle *_pluginBundle;
}

- (void).cxx_destruct;
- (id)_simplifiedDetailsStringSubstituted:(id)arg1 plural:(BOOL)arg2;
- (BOOL)isTextureImageCompletelyUpdated;
- (BOOL)isBufferDataCompletelyUpdated;
- (BOOL)isInefficientStateUpdate;
- (BOOL)isRedundantCallOrQuery;
- (BOOL)isRedundantCall;
- (BOOL)isEncoderStatistics;
- (BOOL)isFrameStatistics;
- (id)initWithPlatform:(int)arg1;
- (id)initWithPlatform:(int)arg1 unsorted:(BOOL)arg2;
- (BOOL)isDataRestoreUnnecessaryForFunc:(const struct Function *)arg1 targetArgIndex:(int)arg2 objectType:(unsigned int)arg3 analyzerEngine:(id)arg4;
- (id)localizedKind;
- (id)synopsis;
- (id)_getLocalizedStringFromBundle:(id)arg1 withKey:(id)arg2 table:(id)arg3;

@end

