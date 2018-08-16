//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTSourceControlWorkingCopy, DVTStackBacktrace, IDESourceControlWorkingTree, IDEWorkspace, NSArray, NSOperationQueue, NSString, NSWindow;
@protocol DVTSourceControlCancellable;

@interface IDESourceControlOperationInfo : NSObject <DVTInvalidation>
{
    NSOperationQueue *_queue;
    IDESourceControlWorkingTree *_workingTree;
    IDEWorkspace *_workspace;
    NSArray *_itemsToOperateOn;
    NSWindow *_window;
    DVTSourceControlWorkingCopy *_workingCopy;
    id <DVTSourceControlCancellable> _currentCancellable;
}

+ (id)containerFileTypesBlacklistedFromOutlineViewCompression;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(retain) id <DVTSourceControlCancellable> currentCancellable; // @synthesize currentCancellable=_currentCancellable;
@property(retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
@property __weak NSWindow *window; // @synthesize window=_window;
@property(retain) NSArray *itemsToOperateOn; // @synthesize itemsToOperateOn=_itemsToOperateOn;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) IDESourceControlWorkingTree *workingTree; // @synthesize workingTree=_workingTree;
- (void).cxx_destruct;
- (void)updateWorkingCopiesOfWorkspace;
- (id)calculateContainersForItem:(id)arg1;
- (id)processInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

