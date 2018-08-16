//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTDaemonRequest-Protocol.h>

@class NSArray, NSString;

@interface XCTDaemonCollectCrashReportsRequest : NSObject <XCTDaemonRequest>
{
    NSArray *_directories;
    NSArray *_processNames;
    CDUnknownBlockType _completion;
}

@property(readonly) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) NSArray *processNames; // @synthesize processNames=_processNames;
@property(readonly) NSArray *directories; // @synthesize directories=_directories;
- (void).cxx_destruct;
- (void)handleConnectionFailure:(id)arg1;
- (void)sendToDaemonProxy:(id)arg1;
- (id)initWithDirectories:(id)arg1 matchingProcessNames:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

