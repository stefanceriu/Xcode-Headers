//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

#import <XCSAdministration/XCSServicesSessionProvider-Protocol.h>

@class DVTDeveloperAccount, DVTServicesSession;

@interface XCSLoginToPortalOperation : XCSInitializationOperation <XCSServicesSessionProvider>
{
    DVTDeveloperAccount *_account;
    DVTServicesSession *_session;
}

@property(retain, nonatomic) DVTServicesSession *session; // @synthesize session=_session;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)run;
- (id)statusDescription;

@end

