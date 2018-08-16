//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlAccount.h>

@class DVTSourceControlBasicAuthenticationStrategy, DVTSourceControlSSHKeysAuthenticationStrategy, NSString, NSURL;

@interface GitHubAccount : DVTSourceControlAccount
{
    // Error parsing type: , name: otpKeychainIdentifier
    // Error parsing type: , name: cloneType
    // Error parsing type: , name: username
    // Error parsing type: , name: sshKeysAuthenticationStrategy
    // Error parsing type: , name: basicAuthenticationStrategy
    // Error parsing type: , name: _hostURL
}

+ (BOOL)supportsSecureCoding;
+ (id)DEFAULT_PASSWORD_RESET_URL;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 hostURL:(id)arg2 authenticationStrategy:(id)arg3;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) BOOL onDefaultHost;
@property(nonatomic, readonly) BOOL isEnterpriseAccount;
- (id)authenticationStrategyForURL:(id)arg1;
- (id)initWithUsername:(id)arg1 hostURL:(id)arg2 authenticationStrategy:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) NSURL *hostURL;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, retain) DVTSourceControlBasicAuthenticationStrategy *basicAuthenticationStrategy; // @synthesize basicAuthenticationStrategy;
@property(nonatomic, retain) DVTSourceControlSSHKeysAuthenticationStrategy *sshKeysAuthenticationStrategy; // @synthesize sshKeysAuthenticationStrategy;
@property(nonatomic, readonly) NSString *sshUsername;
@property(nonatomic, copy) NSString *username; // @synthesize username;
@property(nonatomic, readonly) NSString *accountTypeDisplayName;
@property(nonatomic) long long cloneType; // @synthesize cloneType;
@property(nonatomic, copy) NSString *otpKeychainIdentifier; // @synthesize otpKeychainIdentifier;
- (id)dictionaryRepresentation;

@end

