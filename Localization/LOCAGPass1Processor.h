//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Localization/LOCAGProcessor.h>

@interface LOCAGPass1Processor : LOCAGProcessor
{
}

- (void)cleanUp;
- (id)mergeNibGlossaries:(id)arg1;
- (void)createXLIFF;
- (void)postProcessNibs;
- (void)extractStringsAndLeverageTranslations;
- (void)populate;
- (void)makeDirectoriesAndCloneNonLocContentsInNewLoc;
- (void)processUniversalNibs;
- (void)makeSourceLocaleLprojCorrespondingToBaseLproj:(id)arg1;
- (void)moveLprojContentsFrom:(id)arg1 to:(id)arg2;
- (void)preProcessNibs;
- (void)consolidateLprojDirectories:(id)arg1;

@end

