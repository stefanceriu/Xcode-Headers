//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileManager, NSURL;
@protocol OS_dispatch_queue;

@interface DVTResourceArchiver : NSObject
{
    int _archive_fd;
    NSObject<OS_dispatch_queue> *_tarQueue;
    NSFileManager *_fm;
    long long _archiveStatus;
    struct archive *_archive;
    long long _uncompressed_size;
    NSURL *_archiveLocation;
}

+ (void)archiveWithFileURLs:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSURL *archiveLocation; // @synthesize archiveLocation=_archiveLocation;
@property(nonatomic) long long uncompressed_size; // @synthesize uncompressed_size=_uncompressed_size;
@property(nonatomic) int archive_fd; // @synthesize archive_fd=_archive_fd;
@property(nonatomic) struct archive *archive; // @synthesize archive=_archive;
@property(nonatomic) long long archiveStatus; // @synthesize archiveStatus=_archiveStatus;
@property(retain, nonatomic) NSFileManager *fm; // @synthesize fm=_fm;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *tarQueue; // @synthesize tarQueue=_tarQueue;
- (void).cxx_destruct;
- (id)_errorWithMessage:(id)arg1 reason:(id)arg2;
- (void)_closeArchive;
- (BOOL)_addDirectoryToArchive:(id)arg1 error:(id *)arg2;
- (BOOL)_addFileToArchive:(id)arg1 error:(id *)arg2;
- (id)_allExpandedFilesToBeArchived:(id)arg1;
- (void)_archiveWithFileURLs:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end
