//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGLLDBProcess;

@interface DBGLLDBSanitizerHelper : NSObject
{
    DBGLLDBProcess *_process;
}

- (void).cxx_destruct;
- (id)helpURLFromDiagnosticID:(id)arg1 sanitizerPrefix:(id)arg2;
- (BOOL)memoryDataFrom:(id)arg1 forThread:(id)arg2;
- (id)documentLocationForFrameWithDebugSymbolInRecordedThread:(id)arg1;
- (id)recordedIssueThreadsFromThread:(id)arg1 type:(int)arg2;
- (void)handleExtendedInfo:(id)arg1 forThread:(id)arg2;
- (id)initWithProcess:(id)arg1;
- (id)init;

@end

