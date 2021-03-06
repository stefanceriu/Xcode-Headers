//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEMemoryGraphDebugger/DVTRadarSupport_Issue-Protocol.h>

@class NSString;

@interface XRMemoryGraphDebuggerIssue : NSObject <DVTRadarSupport_Issue>
{
    NSString *_memGraphIssueString;
    NSString *_memGraphIssueBriefString;
    unsigned long long _associatedRadarID;
}

@property(readonly, nonatomic) unsigned long long associatedRadarID; // @synthesize associatedRadarID=_associatedRadarID;
@property(retain) NSString *memGraphIssueBriefString; // @synthesize memGraphIssueBriefString=_memGraphIssueBriefString;
@property(retain) NSString *memGraphIssueString; // @synthesize memGraphIssueString=_memGraphIssueString;
- (void).cxx_destruct;
@property(readonly, nonatomic) id underlyingIssue;
@property(readonly, copy) NSString *attachLabelTitle;
@property(readonly, copy) NSString *stringRepresentation;
@property(readonly, copy) NSString *briefStringRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

