//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL;

@protocol _TtP17XCSAdministration11FileService_
- (BOOL)setPermissions:(long long)arg1 owner:(NSString *)arg2 group:(NSString *)arg3 at:(NSURL *)arg4 error:(id *)arg5;
- (BOOL)symbolicLinkExistsAt:(NSURL *)arg1;
- (BOOL)directoryExistsAt:(NSURL *)arg1;
- (BOOL)fileExistsAt:(NSURL *)arg1;
@end

