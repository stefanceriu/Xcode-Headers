//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBStringList <NSObject>
- (void)AppendString:(const char *)arg1;
- (const char *)GetStringAtIndex:(unsigned long long)arg1;
- (unsigned int)GetSize;
- (id)initWithConnection:(id)arg1;
@end

