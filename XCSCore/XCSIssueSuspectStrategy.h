//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSNumber;

@interface XCSIssueSuspectStrategy : XCSObject
{
    unsigned long long _strategy;
    unsigned long long _confidence;
    NSNumber *_reliability;
}

+ (id)issueSuspectStrategy:(unsigned long long)arg1 confidence:(unsigned long long)arg2 reliability:(id)arg3 validationErrors:(id *)arg4;
@property(readonly, nonatomic) NSNumber *reliability; // @synthesize reliability=_reliability;
@property(readonly, nonatomic) unsigned long long confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned long long strategy; // @synthesize strategy=_strategy;
- (void).cxx_destruct;
- (BOOL)_validateStrategy:(unsigned long long)arg1 confidence:(unsigned long long)arg2 reliability:(id)arg3 validationErrors:(id *)arg4;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithStrategy:(unsigned long long)arg1 confidence:(unsigned long long)arg2 reliability:(id)arg3 validationErrors:(id *)arg4;

@end

