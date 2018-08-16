//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, DVTViewController, DVTWeakInterposer, NSString, NSWindow;

@interface _DVTMainViewControllerMonitor : NSObject <DVTInvalidation>
{
    DVTWeakInterposer *_window_dvtWeakInterposer;
    DVTObservingToken *_firstResponderObservingToken;
    DVTObservingToken *_mainViewControllerIsValidObservingToken;
    DVTViewController *_mainViewController;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(retain) DVTViewController *mainViewController;
- (id)initWithWindow:(id)arg1;
@property __weak NSWindow *window;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

