//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDELogNavigatorGroupedSchemeItemsCache : NSObject
{
    NSMutableDictionary *_cachedItems;
}

- (void).cxx_destruct;
- (void)cacheLogItem:(id)arg1 using:(id)arg2;
- (id)cachedLogItemForURL:(id)arg1;
- (id)init;

@end

