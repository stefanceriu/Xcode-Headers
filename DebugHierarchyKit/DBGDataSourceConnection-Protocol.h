//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebugHierarchyKit/NSObject-Protocol.h>

@class DebugHierarchyRequest;
@protocol DBGDataSourceConnectionDelegate;

@protocol DBGDataSourceConnection <NSObject>
+ (Class)matchingDataCoordinatorClass;
@property double debugHierarchyVersion;
@property __weak id <DBGDataSourceConnectionDelegate> delegate;
- (void)retrieveDebugHierarchyVersion:(void (^)(BOOL, double))arg1;
- (void)performRequest:(DebugHierarchyRequest *)arg1;
@end

