//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOperationQueue;

@interface IDEArchivePreProcessor : NSObject
{
    NSOperationQueue *_archiveProcessingQueue;
    NSDictionary *_archivePathToPreProcessingResult;
}

+ (id)defaultStore;
@property(retain, nonatomic) NSDictionary *archivePathToPreProcessingResult; // @synthesize archivePathToPreProcessingResult=_archivePathToPreProcessingResult;
@property(retain, nonatomic) NSOperationQueue *archiveProcessingQueue; // @synthesize archiveProcessingQueue=_archiveProcessingQueue;
- (void).cxx_destruct;
- (void)processArchiveSnapshots:(id)arg1;
- (id)processArchiveSnapshot:(id)arg1;

@end

