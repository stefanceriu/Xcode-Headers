//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSAdministration/_TtP17XCSAdministration16ServerAppService_-Protocol.h>

@class NSURL, _TtC17XCSAdministration15XCSBuildVersion;

@interface _TtC17XCSAdministration23DefaultServerAppService : NSObject <_TtP17XCSAdministration16ServerAppService_>
{
    // Error parsing type: , name: fileService
    // Error parsing type: , name: applicationUrl
    // Error parsing type: , name: minimumServerVersion
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) BOOL isInstalledVersionCompatible;
- (id)versionForServerUrl:(id)arg1 error:(id *)arg2;
@property(nonatomic, readonly) _TtC17XCSAdministration15XCSBuildVersion *currentServerVersion;
@property(nonatomic, readonly) _TtC17XCSAdministration15XCSBuildVersion *minimumServerVersion; // @synthesize minimumServerVersion;
@property(nonatomic, readonly) NSURL *applicationUrl; // @synthesize applicationUrl;
- (id)initWithFileService:(id)arg1;

@end

