//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/IDEIssueLogDataSource-Protocol.h>
#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTFilePath, DVTSDK, DVTSourceCodeLanguage, DVTToolsVersion, IDEBuildParameters, IDEContainer, IDEFileReference, IDEGroup, IDEPIFGUID, IDESourceFileBuildInfo, IDETestBlueprintHostSettings, IDETypeIdentifier, IDEWorkspaceArenaSnapshot, NSArray, NSDictionary, NSSet, NSString;
@protocol DVTMacroExpansion, IDEBlueprintProvider, IDEBuildable, IDECustomDataStoring, IDEProvisionable;

@protocol IDEBlueprint <NSObject, IDEIssueLogDataSource>
@property(readonly) NSArray *buildableProducts;
@property(readonly) NSArray *buildables;
@property(readonly) id <IDEBuildable> primaryBuildable;
@property(readonly, copy) NSString *blueprintIdentifier;
@property(readonly, copy) NSString *localizedDescription;
@property(readonly, copy) NSString *name;
- (DVTFilePath *)entitlementsFilePathForBuildConfiguration:(NSString *)arg1;
- (void)addFileReference:(IDEFileReference *)arg1 toBuildablesContainingFileReference:(IDEFileReference *)arg2;
- (BOOL)containsFilePath:(DVTFilePath *)arg1;
- (BOOL)containsFileReference:(IDEFileReference *)arg1;
- (id <IDEBuildable>)buildableForIdentifier:(NSString *)arg1;
- (IDEContainer<IDECustomDataStoring> *)customDataStore;
- (IDEContainer<IDEBlueprintProvider> *)blueprintProvider;

@optional
@property(readonly) BOOL participatesInSchemeAutocreation;
@property(readonly) IDETypeIdentifier *activityLogDomainType;
@property(readonly, copy) IDEPIFGUID *PIFGUID;
@property(readonly) id <IDEProvisionable> provisionable;
@property(readonly) NSSet *knownAssetTags;
@property(readonly) DVTToolsVersion *createdOnToolsVersion;
@property(readonly, copy) DVTFilePath *bundleBaselineRecordFilePath;
@property(readonly, getter=isUnitTest) BOOL unitTest;
@property(retain) IDETestBlueprintHostSettings *testBlueprintUITestingTargetAppSettings;
@property(retain) IDETestBlueprintHostSettings *testBlueprintHostSettings;
@property(readonly) BOOL containsOnlySwift;
@property(readonly) BOOL containsSwift;
@property(readonly, copy) NSString *compilerSpecificationIdentifier;
@property(readonly, copy) NSString *defaultConfigurationName;
@property(readonly, copy) NSArray *availableConfigurationNames;
- (void)removeFileReferenceFromBuildables:(IDEFileReference *)arg1;
- (IDESourceFileBuildInfo *)sourceFileBuildInfoForFileAtPath:(DVTFilePath *)arg1;
- (void)removeTagsFromKnownAssetTags:(NSSet *)arg1;
- (void)addTagsToKnownAssetTags:(NSSet *)arg1;
- (DVTFilePath *)infoDictionaryFilePathForConfiguration:(NSString *)arg1;
- (NSDictionary *)infoDictionaryForConfiguration:(NSString *)arg1;
- (NSString *)pathToLargestAssetCatalogAppIconPassingTest:(BOOL (^)(NSDictionary *))arg1;
- (NSArray<DVTMacroExpansion> *)additionalOverridingCompilerArgumentsForSourceCodeBuildFileReference:(IDEFileReference *)arg1;
- (void)setOverridingAdditionalCompilerArguments:(NSArray<DVTMacroExpansion> *)arg1 forSourceCodeBuildFileReference:(IDEFileReference *)arg2;
- (NSArray<DVTMacroExpansion> *)additionalCompilerArgumentsForSourceCodeBuildFileReference:(IDEFileReference *)arg1;
- (void)setAdditionalCompilerArguments:(NSArray<DVTMacroExpansion> *)arg1 forSourceCodeBuildFileReference:(IDEFileReference *)arg2;
- (NSSet *)linkedBinaries;
- (NSSet *)allProjectHeaderFiles;
- (NSSet *)allPrivateHeaderFiles;
- (NSSet *)allPublicHeaderFiles;
- (NSArray *)allResourceFilesBreakingOutLocalizableVariants:(BOOL)arg1;
- (NSArray *)allBuildFileReferences;
- (NSArray *)sourceCodeBuildFileReferences;
- (DVTSourceCodeLanguage *)predominantSourceCodeLanguage;
- (BOOL)configureToBuildMixedTargetWithDestinationGroup:(IDEGroup *)arg1 configureBridgingHeader:(BOOL)arg2 returningErrorString:(id *)arg3;
- (BOOL)isConfiguredToBuildMixedTarget;
- (BOOL)wouldBecomeMixedTargetAfterAddingTypes:(NSArray *)arg1;
- (BOOL)wouldBecomeMixedTargetAfterAddingFiles:(NSArray *)arg1;
- (BOOL)canUseBridgingHeader;
- (BOOL)isMixedTarget;
- (BOOL)configureToBuildWithOptimizationProfileReturningErrorString:(id *)arg1;
- (BOOL)isConfiguredToBuildWithOptimizationProfile;
- (void)setEnableSwift3ObjCInference:(BOOL)arg1;
- (void)updateSwiftCompilerTo:(NSString *)arg1;
- (void)resetLastSwiftMigration;
- (void)updateLastSwiftMigrationToCurrent;
- (BOOL)lastSwiftMigrationIsCurrent;
- (void)convertToUseModernObjCSyntax;
- (void)convertToUseARC;
- (BOOL)canConvertToUseARC;
- (void)convertToBuild64bitOnly;
- (void)convertToUseClang;
- (NSString *)deviceSDKFor:(NSString *)arg1 SDKs:(NSSet *)arg2;
- (NSString *)simulatorSDKFor:(NSString *)arg1 SDKs:(NSSet *)arg2;
- (DVTSDK *)specifiedBaseSDKForBuildConfigurationName:(NSString *)arg1;
- (DVTSDK *)baseSDKForBuildConfigurationName:(NSString *)arg1;
- (NSSet *)supportedPlatformsForConfiguration:(NSString *)arg1 workspaceArenaSnapshot:(IDEWorkspaceArenaSnapshot *)arg2;
- (NSSet *)supportedPlatformsForBuildParameters:(IDEBuildParameters *)arg1;
- (NSArray *)availableArchitecturesForConfiguration:(NSString *)arg1 workspaceArenaSnapshot:(IDEWorkspaceArenaSnapshot *)arg2;
- (NSArray *)availableArchitecturesForBuildParameters:(IDEBuildParameters *)arg1;
@end

