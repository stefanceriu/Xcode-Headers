//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCoding-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IBDirectionalEdgeInsetsWrapper : NSObject <NSCopying, NSCoding, IBBinaryArchiving>
{
    struct NSDirectionalEdgeInsets _edgeInsetsValue;
}

+ (id)edgeInsetsWrapperWithEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;
+ (id)zeroEdgeInsets;
@property struct NSDirectionalEdgeInsets edgeInsetsValue; // @synthesize edgeInsetsValue=_edgeInsetsValue;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTop:(double)arg1 leading:(double)arg2 bottom:(double)arg3 trailing:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

