//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SymbolicationDT/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface DVT_VMURangeToStringMap : NSObject <NSSecureCoding>
{
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_rangeAndStringVectorVoidPtr;
    BOOL _sorted;
}

+ (void)initialize;
+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)stringForIndex:(unsigned int)arg1;
- (struct _VMURange)rangeForString:(id)arg1 startingAtAddress:(unsigned long long)arg2;
- (struct _VMURange)rangeContainingAddress:(unsigned long long)arg1;
- (id)stringForAddress:(unsigned long long)arg1;
- (void)setString:(id)arg1 forRange:(struct _VMURange)arg2;
- (unsigned int)indexForString:(id)arg1 insertIfMissing:(BOOL)arg2;
- (void)sort;
- (unsigned int)uniquedStringCount;
- (unsigned int)count;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

