//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFilePath, NSNumber;

@protocol DVTCacheDeleteExtension <NSObject>
- (NSNumber *)purgeVolume:(DVTFilePath *)arg1 amount:(unsigned long long)arg2 urgency:(int)arg3 error:(id *)arg4;
- (NSNumber *)purgeableSizeOnVolume:(DVTFilePath *)arg1 urgency:(int)arg2 error:(id *)arg3;
@end

