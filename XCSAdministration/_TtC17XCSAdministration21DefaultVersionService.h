//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSAdministration/_TtP17XCSAdministration14VersionService_-Protocol.h>

@class NSString;

@interface _TtC17XCSAdministration21DefaultVersionService : NSObject <_TtP17XCSAdministration14VersionService_>
{
    // Error parsing type: , name: xcodeUrl
    // Error parsing type: , name: fileService
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *xcodeServerVersion;
@property(nonatomic, readonly) NSString *xcodeVersion;
@property(nonatomic, readonly) NSString *macosVersion;
@property(nonatomic, readonly) NSString *macosServerVersion;
- (id)initWithXcodePath:(id)arg1 fileService:(id)arg2;

@end

