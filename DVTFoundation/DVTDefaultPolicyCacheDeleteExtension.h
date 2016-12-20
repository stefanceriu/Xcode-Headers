//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTCacheDeleteExtension.h"

@class NSString;

@interface DVTDefaultPolicyCacheDeleteExtension : NSObject <DVTCacheDeleteExtension>
{
}

+ (id)expirationDateWithAnchorDate:(id)arg1 forUrgency:(int)arg2;
+ (id)expirationDateForOrphanedItemsWithAnchorDate:(id)arg1;
- (id)purgeVolume:(id)arg1 amount:(unsigned long long)arg2 urgency:(int)arg3 error:(id *)arg4;
- (id)purgeableSizeOnVolume:(id)arg1 urgency:(int)arg2 error:(id *)arg3;
- (struct NSSet *)itemsWithError:(id *)arg1;
- (id)anchorDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

