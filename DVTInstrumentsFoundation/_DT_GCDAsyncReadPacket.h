//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface _DT_GCDAsyncReadPacket : NSObject
{
    NSMutableData *buffer;
    unsigned long long startOffset;
    unsigned long long bytesDone;
    unsigned long long maxLength;
    double timeout;
    unsigned long long readLength;
    NSData *term;
    BOOL bufferOwner;
    unsigned long long originalBufferLength;
    long long tag;
}

- (void).cxx_destruct;
- (long long)searchForTermAfterPreBuffering:(long long)arg1;
- (unsigned long long)readLengthForTermWithPreBuffer:(id)arg1 found:(char *)arg2;
- (unsigned long long)readLengthForTermWithHint:(unsigned long long)arg1 shouldPreBuffer:(char *)arg2;
- (unsigned long long)readLengthForNonTermWithHint:(unsigned long long)arg1;
- (unsigned long long)optimalReadLengthWithDefault:(unsigned long long)arg1 shouldPreBuffer:(char *)arg2;
- (void)ensureCapacityForAdditionalDataOfLength:(unsigned long long)arg1;
- (id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 readLength:(unsigned long long)arg5 terminator:(id)arg6 tag:(long long)arg7;

@end

