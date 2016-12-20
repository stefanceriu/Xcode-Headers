//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IDEArchive, IDEDistributionItem, NSNumber, NSString;

@protocol IDEDistributionAppleProvidedContent
@property(readonly) NSString *mainAppStubCopySubpath;
@property(readonly) NSString *packagePath;
@property(readonly) NSString *archivePath;
@property(readonly) NSString *archiveOperationDestinationBuildSettingName;
- (NSNumber *)isAppleProvidedContent:(IDEDistributionItem *)arg1 archive:(IDEArchive *)arg2 error:(id *)arg3;
- (BOOL)shouldCopySidecarContentFromArchive:(IDEArchive *)arg1;
- (BOOL)shouldRemoveForAppStoreDistributionDistributionItem:(IDEDistributionItem *)arg1 shouldRemoveParentDirectory:(char *)arg2;
- (BOOL)shouldRetrieveTeamIDForSigningFromDistributionItem:(IDEDistributionItem *)arg1;
- (BOOL)shouldCodeSignDistributionItem:(IDEDistributionItem *)arg1;
@end

