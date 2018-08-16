//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DVTFoundation/DVTDownloadableProvider-Protocol.h>

@class DVTDispatchLock, DVTDownloadableIndex, NSSet, NSString, NSURL;

@interface DVTIndexBackedDownloadableProvider : NSObject <DVTDownloadableProvider>
{
    DVTDispatchLock *_lock;
    DVTDownloadableIndex *_index;
}

- (void).cxx_destruct;
- (id)downloadablesWithError:(id *)arg1 skipCache:(BOOL)arg2;
- (id)_cacheURLForIndexURL:(id)arg1;
- (id)_suffix;
- (id)_indexAtURL:(id)arg1 error:(id *)arg2;
@property(readonly) BOOL useDecoratedSource;
- (id)downloadablesWithError:(id *)arg1;
@property(readonly) NSSet *downloadables;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *baseURL;
@property(readonly) NSString *userDefaultsKey;
@property(readonly) NSString *identifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

