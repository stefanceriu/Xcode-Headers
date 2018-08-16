//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTTracePointDomain, DVTTracePointFormatString, DVTTracePointStringArgument;

@interface DVTTracePoint : NSObject
{
    DVTTracePointFormatString *_format;
    DVTTracePointDomain *_domain;
    unsigned long long _argSignatures[12];
    DVTTracePointStringArgument *_stringArgs[12];
    long long _argumentsToTransmit;
}

@property(readonly) DVTTracePointDomain *domain; // @synthesize domain=_domain;
@property(readonly) DVTTracePointFormatString *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (void)stopCurrentInterval;
- (void)update;
- (void)startNewInterval;
- (void)setArgument:(long long)arg1 pointer:(unsigned long long)arg2;
- (void)setArgument:(long long)arg1 string:(id)arg2;
- (void)setArgument:(long long)arg1 double:(double)arg2;
- (void)setArgument:(long long)arg1 int64:(long long)arg2;
- (id)initWithFormat:(id)arg1;
- (id)init;

@end

