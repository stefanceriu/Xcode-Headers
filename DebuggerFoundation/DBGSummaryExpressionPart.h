//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/DBGSummaryPart.h>

@class NSString;

@interface DBGSummaryExpressionPart : DBGSummaryPart
{
    int _field;
}

@property(readonly) NSString *valueWasChangedKeyPath;
@property(readonly) NSString *valueKeyPath;
- (id)expressionParts;
- (id)valuePathParts;
- (id)stringForValuePaths:(id)arg1 expressionValues:(id)arg2 andDataValue:(id)arg3;
- (id)expressionStringWithDataValue:(id)arg1;
- (id)_initWithString:(id)arg1 withStartAt:(unsigned long long)arg2 length:(unsigned long long)arg3;

@end

