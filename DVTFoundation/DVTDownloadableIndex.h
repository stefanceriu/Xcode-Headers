//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSSet;

@interface DVTDownloadableIndex : NSObject
{
    double _refreshInterval;
    NSDate *_refreshDate;
    NSSet *_downloadables;
}

@property(readonly) NSSet *downloadables; // @synthesize downloadables=_downloadables;
@property(readonly) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(readonly) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
- (void).cxx_destruct;
- (id)description;
- (id)propertyList;
- (BOOL)upToDate;
- (id)initWithPropertyList:(id)arg1 error:(id *)arg2;
- (id)initWithRefreshInterval:(double)arg1 refreshDate:(id)arg2 downloadables:(id)arg3;

@end

