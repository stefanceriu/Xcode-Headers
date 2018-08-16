//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DTAssertionManager : NSObject
{
    NSArray *_assertionFactories;
    NSArray *_disableKeys;
    NSObject<OS_dispatch_queue> *_guard;
    NSMutableDictionary *_pidInfosByPid;
}

+ (id)sharedInstance;
+ (void)defaultAssertionFactories:(id *)arg1 andDisableKeys:(id *)arg2;
- (void).cxx_destruct;
- (void)removeClaimsHeldByClient:(id)arg1;
- (void)removeAssertionsForPid:(int)arg1 onBehalfOfClient:(id)arg2;
- (void)takeAssertionsForPid:(int)arg1 onBehalfOfClient:(id)arg2 withOptions:(id)arg3;
- (id)initWithAssertionFactories:(id)arg1 andDisableKeys:(id)arg2;
- (id)init;

@end

