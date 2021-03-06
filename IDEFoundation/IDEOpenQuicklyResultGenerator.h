//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLogAspect, IDEOpenQuicklyQueryContext, IDEOpenQuicklyQueryUserInput, NSArray;
@protocol IDEOpenQuicklyResultConsumer, OS_dispatch_queue;

@interface IDEOpenQuicklyResultGenerator : NSObject
{
    BOOL _hasStartedStarting;
    BOOL _finishedStarting;
    id <IDEOpenQuicklyResultConsumer> _weakConsumer;
    NSObject<OS_dispatch_queue> *_queue;
    long long _completedGeneration;
    NSArray *_completedResults;
    long long _requestedGeneration;
    IDEOpenQuicklyQueryUserInput *_requestedUserInput;
    DVTLogAspect *_logAspect;
    IDEOpenQuicklyQueryContext *_queryContext;
}

@property(readonly) IDEOpenQuicklyQueryContext *queryContext; // @synthesize queryContext=_queryContext;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly) IDEOpenQuicklyQueryUserInput *requestedUserInput; // @synthesize requestedUserInput=_requestedUserInput;
@property(readonly) long long requestedGeneration; // @synthesize requestedGeneration=_requestedGeneration;
@property(readonly) NSArray *completedResults; // @synthesize completedResults=_completedResults;
@property(readonly) long long completedGeneration; // @synthesize completedGeneration=_completedGeneration;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)pushResults:(id)arg1 generation:(long long)arg2;
- (void)updateUserInput:(id)arg1 generation:(long long)arg2;
- (void)asyncAccessConsumerOnConsumerQueueIfNotNil:(CDUnknownBlockType)arg1;
- (BOOL)hasFinishedStarting;
- (BOOL)hasStartedStarting;
- (void)finishedStarting;
- (void)start;
- (void)asyncInitiateStartup;
- (id)initWithQueryContext:(id)arg1 consumer:(id)arg2;

@end

