//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEiOSSupportCore/NSObject-Protocol.h>

@class DVTPlatform, NSSet, NSString;

@protocol DVTCodesignableDevice <NSObject>
@property(readonly, copy) NSSet *proxiedDevices;
@property(readonly) BOOL supportsProvisioning;
@property(readonly) DVTPlatform *platform;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly, copy, nonatomic) NSString *name;
@end

