//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBError;

@protocol DBGSBData <NSObject>
- (unsigned long long)ReadRawData:(id <DBGSBError>)arg1 offset:(unsigned long long)arg2 buf:(void *)arg3 size:(unsigned long long)arg4;
- (unsigned long long)GetByteSize;
@end

