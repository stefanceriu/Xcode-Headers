//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDispatchLock, DVTNotificationToken, NSMutableDictionary;

@interface IDEIndexProductInfoManager : NSObject
{
    DVTDispatchLock *_lock;
    NSMutableDictionary *_productInfos;
    DVTNotificationToken *_productInfoRegisteredObserver;
    DVTNotificationToken *_productInfoUpdatedObserver;
    DVTNotificationToken *_productInfoUnregisteredObserver;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)informSourceKit:(struct _sourcekit_uid_s *)arg1 productInfo:(id)arg2 productBlock:(CDUnknownBlockType)arg3;
- (void)reregisterProductInfo:(id)arg1 settings:(id)arg2;
- (void)reregisterAllProductInfos;
- (void)unregisterProductInfo:(id)arg1;
- (void)updateProductInfo:(id)arg1;
- (void)registerProductInfo:(id)arg1;
- (void)requestBuildSettingsForProduct:(id)arg1;
- (void)dealloc;
- (id)init;

@end

