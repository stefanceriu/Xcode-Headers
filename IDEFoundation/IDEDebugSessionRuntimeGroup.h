//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEIssueRuntimeGroupingObject.h"

@class DVTObservingToken, IDEDebugSession, NSString;

@interface IDEDebugSessionRuntimeGroup : NSObject <IDEIssueRuntimeGroupingObject>
{
    DVTObservingToken *_processPIDObservingToken;
    NSString *_name;
    IDEDebugSession *_debugSession;
}

@property(retain) IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDebugProcess:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

