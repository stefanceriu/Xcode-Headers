//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXAllowedRPC.h"

@class NSArray, NSDictionary;

@protocol DTLeaksServiceAuthorizedRPC <DTXAllowedRPC>
- (NSArray *)requestMallocStackLog:(int)arg1 forAddress:(unsigned long long *)arg2 size:(unsigned long long)arg3 isLiteZone:(unsigned int)arg4;
- (NSDictionary *)requestGraph:(unsigned long long)arg1 options:(NSDictionary *)arg2;
@end

