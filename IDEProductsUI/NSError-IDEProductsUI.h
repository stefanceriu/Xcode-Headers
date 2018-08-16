//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (IDEProductsUI)
+ (id)ide_productsErrorWrappingAnalyticsError:(id)arg1 product:(id)arg2 pointType:(long long)arg3 wasUpdate:(BOOL)arg4;
+ (id)ide_logInErrorForFailedSessionAccountNames:(id)arg1 accountsCount:(unsigned long long)arg2;
+ (void)showAccountsPreferences;
+ (id)ide_errorForNoAccounts;
+ (id)ide_genericInternetConnectionErrorForProducts;
+ (id)ide_genericInternetConnectionErrorForAnalyticsPointType:(long long)arg1 wasUpdating:(BOOL)arg2;
+ (CDUnknownBlockType)refreshProductsRecoveryBlock;
+ (id)refreshProductsRecoveryOptions;
- (id)ide_accountsError;
- (id)ide_productRequestErrorForUnspecifiedOrForProduct:(id)arg1;
- (BOOL)ide_isInternetConnectionError;
@end

