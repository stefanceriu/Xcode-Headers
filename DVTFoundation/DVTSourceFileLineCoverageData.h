//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface DVTSourceFileLineCoverageData : NSObject
{
    BOOL _executable;
    unsigned int _lineNumber;
    unsigned long long _executionCount;
    NSArray *_subRanges;
}

@property(readonly, nonatomic) unsigned int lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain, nonatomic) NSArray *subRanges; // @synthesize subRanges=_subRanges;
@property(readonly, nonatomic, getter=isExecutable) BOOL executable; // @synthesize executable=_executable;
@property(readonly, nonatomic) unsigned long long executionCount; // @synthesize executionCount=_executionCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithLineNumber:(unsigned int)arg1 executionCount:(unsigned long long)arg2 executable:(BOOL)arg3 subRanges:(id)arg4;

@end

