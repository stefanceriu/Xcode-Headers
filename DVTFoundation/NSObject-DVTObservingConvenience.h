//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSObject (DVTObservingConvenience)
+ (id)dvt_creationBacktracesOfObservingTokensForObservedObject:(id)arg1;
+ (void)dvt_cancelAllObservingTokensForOwner:(id)arg1;
- (void)_dvt_treeDescription:(id)arg1 ofKeyPathsAffectingValueForKey:(id)arg2 depth:(int)arg3;
- (id)dvt_treeDescriptionOfKeyPathsAffectingValueForKey:(id)arg1;
- (id)dvt_observationInfoSummary;
- (void)dvt_changeValueForKeys:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dvt_changeValueForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 withHandlerBlock:(CDUnknownBlockType)arg3;
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(CDUnknownBlockType)arg4;
- (id)_dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 creationBacktrace:(id)arg4 withHandlerBlock:(CDUnknownBlockType)arg5;
- (void)dvt_addObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(CDUnknownBlockType)arg4;
- (void)dvt_unregisterValueChangedCallbackForKeyPath:(id)arg1;
- (void)dvt_unregisterValueChangedCallbackForKeyPath:(id)arg1 ofObject:(id)arg2;
- (void)dvt_registerValueChangedCallback:(SEL)arg1 forKeyPath:(id)arg2;
- (void)dvt_registerValueChangedCallback:(SEL)arg1 forKeyPath:(id)arg2 ofObject:(id)arg3;
- (void)_dvt_setObserverTokensForKeyPath:(id)arg1;
- (id)_dvt_observerTokensForKeyPath;
@end

