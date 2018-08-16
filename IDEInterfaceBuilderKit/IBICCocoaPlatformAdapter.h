//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBICAbstractPlatformAdapter.h>

@interface IBICCocoaPlatformAdapter : IBICAbstractPlatformAdapter
{
}

- (id)firstVersionSupportingThinning;
- (id)firstVersionSupportingOnDemandResources;
- (BOOL)canHostPDFContentOutsideOfCARFiles;
- (void)compileCARItems:(id)arg1 tagSolutionSpace:(id)arg2 options:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)compileBundleIconFromSelection:(id)arg1 options:(id)arg2;
- (BOOL)isValidOutputLocation:(long long)arg1 forIconSetRep:(id)arg2 withCompilationOptions:(id)arg3 populatingIssues:(id)arg4;
- (BOOL)isValidOutputLocation:(long long)arg1 forBundleIconSetRep:(id)arg2 withCompilationOptions:(id)arg3 populatingIssues:(id)arg4;
- (id)imageCatalogCompilerOptionsFromToolArguments:(id)arg1 forCatalogCollection:(id)arg2 populatingResults:(id)arg3;
- (id)platform;
- (id)minimumDeploymentTargetSupportingIconsInCARFiles;
- (id)minimumDeploymentTargetSupportingAppIconsInCARFiles;
- (id)minimumDeploymentTargetSupportingModels;
- (id)minimumDeploymentTargetSupportingNamedColors;
- (id)minimumDeploymentTargetSupportingTexturesInCARFiles;
- (id)minimumDeploymentTargetSupportingAppIcons;
- (id)minimumDeploymentTargetSupportingDataInCARFiles;
- (id)minimumDeploymentTargetSupportingSpriteAtlasesInCARFiles;
- (id)absoluteMinimumDeploymentTarget;
- (id)minimumDeploymentTargetSupportingHEIFFiles;
- (id)minimumDeploymentTargetSupportingPDFInCARFiles;
- (id)minimumDeploymentTargetSupportingJPGInCARFiles;
- (id)minimumDeploymentTargetSupportingCARFiles;
- (id)targetPlatformForArguments:(id)arg1;
- (id)defaultTargetDevices;

@end

