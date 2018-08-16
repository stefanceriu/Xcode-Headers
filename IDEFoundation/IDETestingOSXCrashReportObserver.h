//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;
@protocol OS_dispatch_source;

@interface IDETestingOSXCrashReportObserver : NSObject
{
    int _fileDescriptor;
    NSString *_directoryPath;
    NSSet *_filesInDirectory;
    NSObject<OS_dispatch_source> *_source;
    NSArray *_processNames;
}

@property(copy) NSArray *processNames; // @synthesize processNames=_processNames;
@property(retain) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(copy) NSSet *filesInDirectory; // @synthesize filesInDirectory=_filesInDirectory;
@property int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
@property(copy) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (void).cxx_destruct;
- (void)startMonitoringWithFileAddedHandler:(CDUnknownBlockType)arg1;
- (void)_updateFilesInDirectoryAndNotifyHandlerOfNewMatches:(CDUnknownBlockType)arg1;
- (id)_filesInDirectory:(id)arg1;
- (id)initWithDirectory:(id)arg1 matchingProcessNames:(id)arg2 error:(id *)arg3;
- (void)dealloc;

@end

