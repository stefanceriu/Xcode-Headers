//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeveloperAccount, DVTDeveloperAccountManager, DVTITunesConnectApplicationDescription, DVTITunesConnectConfigurationResponse, DVTLogAspect, DVTMutableOrderedDictionary, DVTProvisioningProfileManager, DVTSigningCertificateManager, IDEAppStoreSubmissionConfiguration, IDEArchive, IDEDistributionLogging, IDEDistributionManifest, IDEDistributionMethod, IDEDistributionProcessingPipeline, IDEDistributionProvisioningEvaluation, IDEDistributionProvisioningManualSigningMap, IDEITunesConnect, IDEProvisioningTeamManager, NSArray, NSMutableOrderedSet, NSMutableSet, NSNumber, NSSet, NSURL;
@protocol IDEProvisioningBasicTeam;

@interface IDEDistributionContext : NSObject
{
    IDEITunesConnect *_iTunesConnectProxy;
    IDEDistributionContext *_parent;
    IDEArchive *_archive;
    DVTSigningCertificateManager *_certificateManager;
    DVTProvisioningProfileManager *_profileManager;
    IDEProvisioningTeamManager *_teamManager;
    DVTDeveloperAccountManager *_accountManager;
    IDEDistributionMethod *_distributionMethod;
    id <IDEProvisioningBasicTeam> _team;
    NSNumber *_distributionTask;
    IDEDistributionProvisioningEvaluation *_provisioningEvaluation;
    NSArray *_topLevelDistributionItems;
    IDEDistributionLogging *_logging;
    DVTLogAspect *_logAspect;
    NSNumber *_uploadSymbols;
    NSNumber *_uploadBitcode;
    NSNumber *_compileBitcode;
    NSNumber *_stripSwiftSymbols;
    IDEAppStoreSubmissionConfiguration *_appStoreSubmissionConfiguration;
    DVTITunesConnectConfigurationResponse *_appStoreSubmissionConfigurationResponse;
    NSArray *_distributionIssues;
    DVTMutableOrderedDictionary *_itemToEntitlementsProcessorsMap;
    IDEDistributionProcessingPipeline *_pipeline;
    DVTMutableOrderedDictionary *_itemToProcessingResultsMap;
    DVTITunesConnectApplicationDescription *_applicationRecord;
    DVTDeveloperAccount *_iTunesConnectAccount;
    NSURL *_ODRAssetPackBaseURL;
    NSNumber *_includeODRAssetPackInBundle;
    IDEDistributionManifest *_distributionManifest;
    NSArray *_thinningVariants;
    NSNumber *_archivedProvisioningStyle;
    NSNumber *_provisioningStyle;
    IDEDistributionProvisioningManualSigningMap *_manualSigningAssetMap;
    NSMutableOrderedSet *_certificatesCreated;
    NSArray *_cachedDeviceFamiliesForThinning;
    NSSet *_allowedInputs;
    NSSet *_allowedOutputs;
    NSArray *_stepClasses;
    NSMutableSet *_itemsWithProfileSelection;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *itemsWithProfileSelection; // @synthesize itemsWithProfileSelection=_itemsWithProfileSelection;
@property(readonly, nonatomic) NSArray *stepClasses; // @synthesize stepClasses=_stepClasses;
@property(readonly, nonatomic) NSSet *allowedOutputs; // @synthesize allowedOutputs=_allowedOutputs;
@property(readonly, nonatomic) NSSet *allowedInputs; // @synthesize allowedInputs=_allowedInputs;
@property(retain, nonatomic) NSArray *cachedDeviceFamiliesForThinning; // @synthesize cachedDeviceFamiliesForThinning=_cachedDeviceFamiliesForThinning;
@property(retain, nonatomic) NSMutableOrderedSet *certificatesCreated; // @synthesize certificatesCreated=_certificatesCreated;
@property(retain, nonatomic) IDEDistributionProvisioningManualSigningMap *manualSigningAssetMap; // @synthesize manualSigningAssetMap=_manualSigningAssetMap;
@property(retain, nonatomic) NSNumber *provisioningStyle; // @synthesize provisioningStyle=_provisioningStyle;
@property(retain, nonatomic) NSNumber *archivedProvisioningStyle; // @synthesize archivedProvisioningStyle=_archivedProvisioningStyle;
@property(retain, nonatomic) NSArray *thinningVariants; // @synthesize thinningVariants=_thinningVariants;
@property(retain, nonatomic) IDEDistributionManifest *distributionManifest; // @synthesize distributionManifest=_distributionManifest;
@property(retain, nonatomic) NSNumber *includeODRAssetPackInBundle; // @synthesize includeODRAssetPackInBundle=_includeODRAssetPackInBundle;
@property(retain, nonatomic) NSURL *ODRAssetPackBaseURL; // @synthesize ODRAssetPackBaseURL=_ODRAssetPackBaseURL;
@property(retain, nonatomic) DVTDeveloperAccount *iTunesConnectAccount; // @synthesize iTunesConnectAccount=_iTunesConnectAccount;
@property(retain, nonatomic) DVTITunesConnectApplicationDescription *applicationRecord; // @synthesize applicationRecord=_applicationRecord;
@property(retain, nonatomic) DVTMutableOrderedDictionary *itemToProcessingResultsMap; // @synthesize itemToProcessingResultsMap=_itemToProcessingResultsMap;
@property(retain, nonatomic) IDEDistributionProcessingPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(retain, nonatomic) DVTMutableOrderedDictionary *itemToEntitlementsProcessorsMap; // @synthesize itemToEntitlementsProcessorsMap=_itemToEntitlementsProcessorsMap;
@property(retain, nonatomic) NSArray *distributionIssues; // @synthesize distributionIssues=_distributionIssues;
@property(retain, nonatomic) DVTITunesConnectConfigurationResponse *appStoreSubmissionConfigurationResponse; // @synthesize appStoreSubmissionConfigurationResponse=_appStoreSubmissionConfigurationResponse;
@property(retain, nonatomic) IDEAppStoreSubmissionConfiguration *appStoreSubmissionConfiguration; // @synthesize appStoreSubmissionConfiguration=_appStoreSubmissionConfiguration;
@property(retain, nonatomic) NSNumber *stripSwiftSymbols; // @synthesize stripSwiftSymbols=_stripSwiftSymbols;
@property(retain, nonatomic) NSNumber *compileBitcode; // @synthesize compileBitcode=_compileBitcode;
@property(retain, nonatomic) NSNumber *uploadBitcode; // @synthesize uploadBitcode=_uploadBitcode;
@property(retain, nonatomic) NSNumber *uploadSymbols; // @synthesize uploadSymbols=_uploadSymbols;
@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(retain, nonatomic) IDEDistributionLogging *logging; // @synthesize logging=_logging;
@property(retain, nonatomic) NSArray *topLevelDistributionItems; // @synthesize topLevelDistributionItems=_topLevelDistributionItems;
@property(retain, nonatomic) IDEDistributionProvisioningEvaluation *provisioningEvaluation; // @synthesize provisioningEvaluation=_provisioningEvaluation;
@property(retain, nonatomic) NSNumber *distributionTask; // @synthesize distributionTask=_distributionTask;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(retain, nonatomic) IDEDistributionMethod *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
@property(retain, nonatomic) DVTDeveloperAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) IDEProvisioningTeamManager *teamManager; // @synthesize teamManager=_teamManager;
@property(retain, nonatomic) DVTProvisioningProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(retain, nonatomic) DVTSigningCertificateManager *certificateManager; // @synthesize certificateManager=_certificateManager;
@property(retain, nonatomic) IDEArchive *archive; // @synthesize archive=_archive;
@property(readonly, nonatomic) IDEDistributionContext *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)propertyListRepresentation;
- (BOOL)strictTeamIDMatch;
- (BOOL)isInAppContent;
- (id)flattenedDistributionItems;
- (id)nonChainedDescription;
- (id)description;
@property(retain, nonatomic) IDEITunesConnect *iTunesConnectProxy; // @synthesize iTunesConnectProxy=_iTunesConnectProxy;
- (id)initWithParent:(id)arg1 stepClass:(Class)arg2 allowedInputs:(id)arg3 allowedOutputs:(id)arg4;
- (id)init;
- (id)initWithParent:(id)arg1 allowedInputs:(id)arg2 allowedOutputs:(id)arg3;
- (id)initWithParent:(id)arg1 stepClass:(Class)arg2;

@end

