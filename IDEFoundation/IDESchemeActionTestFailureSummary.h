//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDESchemeActionTestFailureSummary : NSObject
{
    BOOL _isPerformanceFailure;
    NSString *_message;
    NSString *_fileName;
    long long _lineNumber;
}

@property(readonly) BOOL isPerformanceFailure; // @synthesize isPerformanceFailure=_isPerformanceFailure;
@property(readonly) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, copy) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, copy) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (BOOL)isEqualToTestFailureSummary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithMessage:(id)arg1 fileName:(id)arg2 lineNumber:(long long)arg3 isPerformanceFailure:(BOOL)arg4;

@end

