//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBStoryboardDocumentCompiler.h>

@interface IBCocoaTouchStoryboardDocumentCompiler : IBStoryboardDocumentCompiler
{
    BOOL _instantiatedSegueTemplates;
}

+ (BOOL)finishCompilingDocument:(id)arg1 withOutputPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (BOOL)shouldCopyDeviceSpecificStringsFilesForDocument:(id)arg1;
- (id)stringByAppendingTargetDeviceSuffixToFilePath:(id)arg1 ifNeededForOptions:(id)arg2;
- (id)localOptionsForTarget:(id)arg1 withCompilerOptions:(id)arg2;
- (id)targetRuntimeCompilationTargetsForCompilerOptions:(id)arg1;
- (id)internalCompileWithOptions:(id)arg1 error:(id *)arg2;
- (id)compiledPackageVersion;
- (id)compileCompilationUnit:(id)arg1 options:(id)arg2 forSceneCompilationGroup:(id)arg3 error:(id *)arg4;
- (id)archivingContextForCompilationUnit:(id)arg1 options:(id)arg2;
- (id)marshallingContextForCompilationUnit:(id)arg1 options:(id)arg2;
- (id)storyboardPlaceholderIdentifier;

@end

