//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLock.h>

#import <DVTFoundation/DVTLocking-Protocol.h>

@interface NSLock (DVTFoundationExtensions) <DVTLocking>
- (void)dvt_asyncPerformLockedBlock:(CDUnknownBlockType)arg1;
- (void)dvt_performLockedBlock:(CDUnknownBlockType)arg1;
@end

