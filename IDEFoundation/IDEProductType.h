//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPlatform, NSString;

@interface IDEProductType : NSObject
{
}

+ (BOOL)buildableProductIsWatchAppExtension:(id)arg1;
+ (BOOL)buildableProductIsWatchApp:(id)arg1;
+ (BOOL)buildableProductIsAppExtension:(id)arg1;
+ (id)_expandedPlatformForBuildableProduct:(id)arg1;
+ (id)platformProductTypeOfBuildable:(id)arg1;
+ (id)productTypeForIdentifier:(id)arg1 platform:(id)arg2;
- (long long)provisioningProfileSupport;
- (BOOL)runsDirectlyOnProxy;
- (BOOL)runsOnProxy;
- (BOOL)installsOnProxy;
- (BOOL)shouldAutocreateSchemes;
- (BOOL)isWatch1AppExtension;
- (BOOL)isWatch2AppExtension;
- (BOOL)isWatchAppExtension;
- (BOOL)isWatch1Application;
- (BOOL)isWatch2Application;
- (BOOL)isWatchApplication;
- (BOOL)isAppExtension;
- (BOOL)isApplication;
- (BOOL)isKindOfProductType:(id)arg1;
@property(readonly) IDEProductType *superType;
@property(readonly) DVTPlatform *platform;
@property(readonly) NSString *localizedDescription;
@property(readonly) NSString *name;
@property(readonly) NSString *identifier;
- (id)debugDescription;

@end

