//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEProvisioningMechanic, NSString;
@protocol IDEProvisioningMechanicContextProvider, IDEProvisioningTeamAccountPairProvider;

@interface IDEProvisioningMechanicContext : NSObject <DVTInvalidation>
{
    BOOL _runningInIDE;
    IDEProvisioningMechanic *_mechanic;
    id <IDEProvisioningMechanicContextProvider> _provisioningManager;
    id <IDEProvisioningTeamAccountPairProvider> _teamAccountPairProvider;
}

+ (void)initialize;
@property(nonatomic) BOOL runningInIDE; // @synthesize runningInIDE=_runningInIDE;
@property(retain, nonatomic) id <IDEProvisioningTeamAccountPairProvider> teamAccountPairProvider; // @synthesize teamAccountPairProvider=_teamAccountPairProvider;
@property(retain, nonatomic) id <IDEProvisioningMechanicContextProvider> provisioningManager; // @synthesize provisioningManager=_provisioningManager;
@property(retain, nonatomic) IDEProvisioningMechanic *mechanic; // @synthesize mechanic=_mechanic;
- (void).cxx_destruct;
- (id)makeRepairForRepairable:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

