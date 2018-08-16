//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSNumber, NSString, _TtC17XCSAdministration11UserAccount, _TtC17XCSAdministration14NewUserAccount;

@protocol _TtP17XCSAdministration16DirectoryService_
- (BOOL)deleteGroupWithName:(NSString *)arg1 error:(id *)arg2;
- (BOOL)createGroupWithName:(NSString *)arg1 error:(id *)arg2;
- (BOOL)checkForDuplicates:(char *)arg1 ofGroupId:(long long)arg2 error:(id *)arg3;
- (BOOL)doesGroupExistWithName:(NSString *)arg1;
- (NSNumber *)groupIdForGroupName:(NSString *)arg1;
- (BOOL)deleteUserWithUsername:(NSString *)arg1 error:(id *)arg2;
- (BOOL)addUserWithUsername:(NSString *)arg1 toGroup:(NSString *)arg2 primary:(BOOL)arg3 error:(id *)arg4;
- (BOOL)createUser:(_TtC17XCSAdministration14NewUserAccount *)arg1 error:(id *)arg2;
- (BOOL)createAdminUserWithUsername:(NSString *)arg1 password:(NSData *)arg2 error:(id *)arg3;
- (BOOL)checkForDuplicates:(char *)arg1 ofUserId:(long long)arg2 error:(id *)arg3;
- (_TtC17XCSAdministration11UserAccount *)findUserWithUsername:(NSString *)arg1 error:(id *)arg2;
- (NSNumber *)userIdForUsername:(NSString *)arg1;
@end

