//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTSourceControlAuthenticationStrategy, DVTSourceControlRemoteRepository, DVTSourceControlSystem, NSArray, NSString, NSURL;
@protocol DVTSourceControlAccount;

@protocol DVTSourceControlAccountManager <NSObject>
- (DVTSourceControlAuthenticationStrategy *)authenticationStrategyForURL:(NSURL *)arg1 usingAccount:(id <DVTSourceControlAccount>)arg2;
- (void)removeAccount:(id <DVTSourceControlAccount>)arg1;
- (void)addAccount:(id <DVTSourceControlAccount>)arg1;
- (void)accountChanged:(id <DVTSourceControlAccount>)arg1 previousUsername:(NSString *)arg2;
- (id <DVTSourceControlAccount>)existingAccountForRepository:(DVTSourceControlRemoteRepository *)arg1 authenticationStrategy:(DVTSourceControlAuthenticationStrategy *)arg2 createIfNeeded:(BOOL)arg3;
- (id <DVTSourceControlAccount>)existingAccountLikeAccount:(id <DVTSourceControlAccount>)arg1 addingIfNew:(BOOL)arg2;
- (DVTSourceControlRemoteRepository *)knownRepositoryForURL:(NSURL *)arg1 sourceControlSystem:(DVTSourceControlSystem *)arg2;
@property(nonatomic, readonly) NSArray *knownRepositories;
@end

