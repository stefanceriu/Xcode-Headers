//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTProvisioningProfileManager, DVTSigningCertificateManager, IDEProvisioningLedger;

@protocol IDEProvisioningMechanicContextProvider <NSObject>
@property(readonly, nonatomic) IDEProvisioningLedger *ledger;
@property(readonly, nonatomic) DVTProvisioningProfileManager *profileManager;
@property(readonly, nonatomic) DVTSigningCertificateManager *certificateManager;
@end

