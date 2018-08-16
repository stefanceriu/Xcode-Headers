//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEContainer.h>

#import <IDEFoundation/DVTXMLUnarchiverDelegate-Protocol.h>
#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>
#import <IDEFoundation/IDECustomDataStoring-Protocol.h>

@class IDEDirectoryBasedCustomDataStore, IDEGroup, NSMapTable, NSMutableDictionary, NSString;

@interface IDEXMLPackageContainer : IDEContainer <DVTXMLUnarchiverDelegate, DVTXMLUnarchiving, IDECustomDataStoring>
{
    IDEGroup *_unarchivingGroup;
    NSMutableDictionary *_unarchivingProperties;
    IDEDirectoryBasedCustomDataStore *_customDataStore;
    NSMapTable *_unsavedXMLDataForCustomDataStoreSpecifier;
    BOOL _hasUnhandledArchiveData;
}

+ (id)containerDataFilePathsForFilePath:(id)arg1;
+ (id)xmlArchiveFileName;
+ (id)rootElementName;
+ (BOOL)supportsFilePersistence;
@property(readonly) BOOL hasUnhandledArchiveData; // @synthesize hasUnhandledArchiveData=_hasUnhandledArchiveData;
@property(retain) IDEDirectoryBasedCustomDataStore *customDataStore; // @synthesize customDataStore=_customDataStore;
- (void).cxx_destruct;
@property(readonly) float maxSupportedArchiveVersion;
@property(readonly) float archiveVersion;
@property(readonly) NSString *displayName;
- (BOOL)supportsCustomDataForOwnership:(id)arg1;
- (void)moveCustomDataWithSpecifier:(id)arg1 toSpecifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeCustomDataWithSpecifier:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeCustomData:(id)arg1 withSpecifier:(id)arg2 forceOverwrite:(BOOL)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)readCustomDataWithSpecifier:(id)arg1 error:(id *)arg2;
- (id)customDataOwnershipsForGrouping:(id)arg1;
- (id)customDataSpecifiersForGrouping:(id)arg1 ownership:(id)arg2;
- (void)primitiveInvalidate;
- (void)addSpecifier:(id)arg1 inWorkspace:(id)arg2 toSCMWithCompletionBlock:(CDUnknownBlockType)arg3;
- (void)scmStatusForSpecifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleFilePathDidChange:(id)arg1;
- (BOOL)writeToFilePath:(id)arg1 forceWrite:(BOOL)arg2 error:(id *)arg3;
- (id)_xmlData;
- (BOOL)didReadFromFilePath:(id)arg1 error:(id *)arg2;
- (id)_subitemsForUnarchivedSubitems:(id)arg1;
- (BOOL)willReadFromFilePath:(id)arg1 error:(id *)arg2;
- (BOOL)readFromFilePath:(id)arg1 error:(id *)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)customDataStoreClosing:(id)arg1;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (void)_createCustomDataStore:(id)arg1;
- (id)_archiveFilePathForFilePath:(id)arg1;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_addObject:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_setProperty:(id)arg1 fromUTF8String:(const char *)arg2 fromXMLUnarchiver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

