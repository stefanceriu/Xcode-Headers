//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>
#import <IBAutolayoutFoundation/NSCoding-Protocol.h>

@class NSString;

@interface IBLayoutConstant : NSObject <NSCoding, IBBinaryArchiving>
{
    double _value;
}

@property(readonly) double value; // @synthesize value=_value;
- (void)invalidateEngineEvaluatedUnderlyingValue;
- (void)takeEngineEvaluatedValue:(double)arg1;
- (BOOL)needsEngineToEvaluateValue;
- (id)constantBySettingValueToValue:(double)arg1;
- (id)constantInCoordinateSpaceOfView:(id)arg1 fromCoordinateSpaceOfView:(id)arg2 forLayoutAttribute:(unsigned long long)arg3;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToConstant:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *shortDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id symbolicValue;
- (double)valueForView:(id)arg1 inCoordinateSpaceOfView:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

