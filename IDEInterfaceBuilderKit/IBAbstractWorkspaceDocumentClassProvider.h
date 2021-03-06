//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractClassProvider.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEWorkspace, IDEWorkspaceDocument, NSString, NSTimer;

@interface IBAbstractWorkspaceDocumentClassProvider : IBAbstractClassProvider <DVTInvalidation>
{
    int _referenceCount;
    NSTimer *_timeoutTimer;
    DVTObservingToken *_workspaceObservingToken;
    BOOL _ignoreTimeoutAndImmediatelyUnregister;
    IDEWorkspaceDocument *_workspaceDocument;
}

+ (double)timeout;
+ (void)initialize;
+ (void)unregisterWorkspaceDocumentClassProvider:(id)arg1;
+ (id)retainedClassProviderForWorkspaceDocument:(id)arg1;
+ (id)retainedClassProviderForReferenceKey:(id)arg1 initNewProviderBlock:(CDUnknownBlockType)arg2;
@property(readonly) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (void).cxx_destruct;
- (void)releaseClassProvider;
- (id)retainClassProvider;
- (void)workspaceDidInvalidate;
- (void)markForInvalidation;
- (void)timeoutTimerDidFire:(id)arg1;
- (id)referenceKey;
@property(readonly) IDEWorkspace *workspace;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (id)initWithWorkspaceDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

