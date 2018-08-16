//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@interface DVTTextDocumentLocation : DVTDocumentLocation
{
    long long _startingColumnNumber;
    long long _endingColumnNumber;
    long long _startingLineNumber;
    long long _endingLineNumber;
    struct _NSRange _characterRange;
    long long _locationEncoding;
    id _representedObject;
}

+ (BOOL)supportsSecureCoding;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly) long long locationEncoding; // @synthesize locationEncoding=_locationEncoding;
@property(readonly) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
@property(readonly) long long endingLineNumber; // @synthesize endingLineNumber=_endingLineNumber;
@property(readonly) long long startingLineNumber; // @synthesize startingLineNumber=_startingLineNumber;
@property(readonly) long long endingColumnNumber; // @synthesize endingColumnNumber=_endingColumnNumber;
@property(readonly) long long startingColumnNumber; // @synthesize startingColumnNumber=_startingColumnNumber;
- (void).cxx_destruct;
- (id)dvt_persistableStringRepresentation;
- (id)dvt_initFromPersistableStringRepresentation:(id)arg1 error:(id *)arg2;
- (id)copyWithURL:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) struct _NSRange lineRange;
- (id)description;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 characterRange:(struct _NSRange)arg3;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 characterRange:(struct _NSRange)arg3 locationEncoding:(long long)arg4;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 lineRange:(struct _NSRange)arg3;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 startingColumnNumber:(long long)arg3 endingColumnNumber:(long long)arg4 startingLineNumber:(long long)arg5 endingLineNumber:(long long)arg6 characterRange:(struct _NSRange)arg7;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 startingColumnNumber:(long long)arg3 endingColumnNumber:(long long)arg4 startingLineNumber:(long long)arg5 endingLineNumber:(long long)arg6 characterRange:(struct _NSRange)arg7 locationEncoding:(long long)arg8;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2;

@end

