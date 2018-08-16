//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol DTXBlockCompressor, OS_dispatch_queue;

@interface DTXMessageParser : NSObject
{
    const char *_parsingBuffer;
    unsigned long long _parsingBufferUsed;
    unsigned long long _parsingBufferSize;
    CDUnknownBlockType _exceptionHandler;
    CDUnknownBlockType _parsedMessageHandler;
    _Bool _eof;
    NSObject<OS_dispatch_queue> *_parsingQueue;
    NSMutableDictionary *_fragmentedBuffersByIdentifier;
    id <DTXBlockCompressor> _compressor;
}

- (void).cxx_destruct;
- (void)replaceCompressor:(id)arg1;
- (id)parsingComplete;
- (void)parseIncomingBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)_messageParsedWithHeader:(struct DTXMessageHeader)arg1 bytes:(const void *)arg2 length:(unsigned long long)arg3 destructor:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithMessageHandler:(CDUnknownBlockType)arg1 andParseExceptionHandler:(CDUnknownBlockType)arg2;

@end

