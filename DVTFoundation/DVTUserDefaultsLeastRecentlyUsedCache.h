//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSMutableArray, NSMutableDictionary, NSString;

@interface DVTUserDefaultsLeastRecentlyUsedCache : NSObject
{
    NSMutableArray *_keysRecentlyUsed;
    NSMutableDictionary *_cache;
    unsigned long long _cacheSize;
    NSString *_userDefaultsKey;
    DVTDispatchLock *_cacheLock;
}

@property(retain, nonatomic) DVTDispatchLock *cacheLock; // @synthesize cacheLock=_cacheLock;
@property(retain, nonatomic) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
@property unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSMutableArray *keysRecentlyUsed; // @synthesize keysRecentlyUsed=_keysRecentlyUsed;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)addObject:(id)arg1 key:(id)arg2;
- (void)_writeCacheToDisk;
- (id)description;
- (id)initWithUserDefaultsKey:(id)arg1 cacheSize:(unsigned long long)arg2;

@end

