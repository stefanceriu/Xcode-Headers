//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTMemoryGraphItem, DVTDocumentLocation, IDEDebugSession, NSString;

@interface XRMemoryGraphIssue : NSObject
{
    unsigned long long _issueType;
    DVTDocumentLocation *_documentLocation;
    DTMemoryGraphItem *_item;
    NSString *_message;
    IDEDebugSession *_debugSession;
}

@property(nonatomic) __weak IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
@property(readonly, nonatomic) DTMemoryGraphItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) unsigned long long issueType; // @synthesize issueType=_issueType;
- (void).cxx_destruct;
@property(readonly) NSString *message;
@property(readonly, nonatomic) DVTDocumentLocation *documentLocation;
- (id)initWithDebugSession:(id)arg1 memoryGraphItem:(id)arg2 issueType:(unsigned long long)arg3;

@end

