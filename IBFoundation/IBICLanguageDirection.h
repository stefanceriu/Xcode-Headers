//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

#import "IBICCoreUISlotComponent.h"

@class NSString;

@interface IBICLanguageDirection : IBICSlotComponent <IBICCoreUISlotComponent>
{
    long long _coreUIValue;
}

+ (id)itemWithIdentifier:(id)arg1 title:(id)arg2 coreUIValue:(long long)arg3 displayOrder:(double)arg4;
+ (id)displayName;
+ (id)contentsJSONKey;
+ (id)unspecifiedValuePlaceholder;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
@property(readonly, nonatomic) long long coreUIValue; // @synthesize coreUIValue=_coreUIValue;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 coreUIValue:(long long)arg3 displayOrder:(double)arg4;
- (long long)componentID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
