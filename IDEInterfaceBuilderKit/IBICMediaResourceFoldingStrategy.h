//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEMediaResourceFoldingStrategy.h>

@class IBICPlatform;

@interface IBICMediaResourceFoldingStrategy : IDEMediaResourceFoldingStrategy
{
    IBICPlatform *_platform;
}

@property(readonly, nonatomic) IBICPlatform *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (void)mapDefaultVariantsForSlotClass:(Class)arg1;
- (void)addVariablesForSlotClass:(Class)arg1;
- (void)setupVariablesAndDefaultVariantsFromSchema;
- (id)description;
- (id)firstResourceMatchingVariant:(id)arg1 fromVariantSet:(id)arg2;
- (long long)valueForSlotComponentClass:(Class)arg1 inVariant:(id)arg2 fallback:(id)arg3 mediaType:(id)arg4;
- (id)variableForSlotComponentClass:(Class)arg1 andMediaType:(id)arg2;
- (id)initWithPlatform:(id)arg1;

@end

