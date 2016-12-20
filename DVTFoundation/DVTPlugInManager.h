//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDispatchLock, DVTPlugInLocator, NSArray, NSDictionary, NSFileManager, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID;

@interface DVTPlugInManager : NSObject
{
    DVTDispatchLock *_plugInManagerLock;
    NSFileManager *_fileManager;
    NSString *_hostAppName;
    NSString *_hostAppContainingPath;
    NSMutableArray *_searchPaths;
    NSArray *_extraSearchPaths;
    NSMutableSet *_pathExtensions;
    NSMutableSet *_exposedCapabilities;
    NSMutableSet *_defaultPlugInCapabilities;
    NSMutableSet *_requiredPlugInIdentifiers;
    NSString *_plugInCachePath;
    NSDictionary *_plugInCache;
    BOOL _shouldClearPlugInCaches;
    DVTPlugInLocator *_plugInLocator;
    NSMutableDictionary *_plugInsByIdentifier;
    NSMutableDictionary *_extensionPointsByIdentifier;
    NSMutableDictionary *_extensionsByIdentifier;
    NSMutableDictionary *_invalidExtensionsByIdentifier;
    NSMutableSet *_warnedExtensionPointFailures;
    NSMutableSet *_nonApplePlugInSanitizedStatuses;
    NSMutableDictionary *_nonApplePlugInDescriptors;
    NSMutableDictionary *_nonApplePlugInDescriptorActivateCallbacks;
    struct {
        unsigned int _reserved:62;
        unsigned int _isSecondaryScan:1;
        unsigned int _hasScannedForPlugIns:1;
    } _flags;
    CDUnknownBlockType _shouldAllowNonApplePlugInsCallback;
}

+ (BOOL)enumerateExtensionDataForPluginAtPath:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (BOOL)ib_enumerateExtensionDataForPluginAtPath:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (void)_setDefaultPlugInManager:(id)arg1;
+ (id)defaultPlugInManager;
+ (void)initialize;
@property(copy) CDUnknownBlockType shouldAllowNonApplePlugInsCallback; // @synthesize shouldAllowNonApplePlugInsCallback=_shouldAllowNonApplePlugInsCallback;
@property(retain) DVTPlugInLocator *plugInLocator; // @synthesize plugInLocator=_plugInLocator;
@property BOOL shouldClearPlugInCaches; // @synthesize shouldClearPlugInCaches=_shouldClearPlugInCaches;
- (void).cxx_destruct;
- (id)_invalidExtensionWithIdentifier:(id)arg1;
- (id)_plugInCachePath;
- (id)_applicationCachesPath;
- (id)_toolsVersionName;
- (void)_createPlugInObjectsFromCache;
- (BOOL)_savePlugInCacheWithScanRecords:(id)arg1 error:(id *)arg2;
- (BOOL)_removePlugInCacheAndReturnError:(id *)arg1;
- (BOOL)_loadPlugInCache:(id *)arg1;
- (BOOL)_cacheCoversPlugInsWithScanRecords:(id)arg1;
- (id)_modificationDateOfFileAtPath:(id)arg1;
@property(readonly) BOOL usePlugInCache;
- (void)_preLoadPlugIns;
- (BOOL)_checkPresenceOfRequiredPlugIns:(id)arg1 error:(id *)arg2;
- (BOOL)shouldPerformConsistencyCheck;
- (void)_registerPlugInsFromScanRecords:(id)arg1;
- (void)_pruneUnusablePlugInsAndScanRecords:(id)arg1;
- (id)_plugInsToIgnore;
- (void)_recordSanitizedPluginStatus:(id)arg1 errorMessage:(id)arg2;
- (void)_addSanitizedNonApplePlugInStatusForBundle:(id)arg1 reason:(id)arg2;
@property(readonly) NSSet *sanitizedNonApplePlugInStatuses;
- (void)_createPlugInObjectsFromScanRecords:(id)arg1;
- (void)_instantiatePlugInsForScanRecords:(id)arg1;
- (void)_applyActivationRulesToScanRecords:(id)arg1;
- (id)_scanForPlugInsInDirectories:(id)arg1 skippingDuplicatesOfPlugIns:(id)arg2;
- (BOOL)initializePlugIns:(id *)arg1;
- (void)_checkNonApplePlugIns;
- (BOOL)_allowNonApplePlugInsFromDescriptors:(id)arg1 error:(id *)arg2;
- (void)_saveNonApplePlugInListBasedOnAllowedDescriptors:(id)arg1;
- (void)_registerDescriptorType:(id)arg1 activationCallback:(CDUnknownBlockType)arg2;
- (void)_recordNonApplePlugInDescriptor:(id)arg1;
- (BOOL)_checkValidityForBundle:(id)arg1 error:(id *)arg2;
- (id)nonApplePlugInDescriptorsNotPreviouslyAllowedOrSkipped;
- (id)nonApplePlugInDescriptorsPreviouslyAllowed;
- (id)_nonApplePlugInListDefault;
@property(readonly, copy) NSArray *nonApplePlugInDescriptors;
- (id)_extractErrorFromPlugInLoadingException:(id)arg1;
- (BOOL)_scanForPlugIns:(id *)arg1;
- (id)_plugInScanRecordsForInitialScan:(BOOL)arg1;
@property(readonly, copy) NSUUID *plugInHostUUID;
@property BOOL hasScannedForPlugIns; // @dynamic hasScannedForPlugIns;
- (id)_scanRecordForBundle:(id)arg1 atPath:(id)arg2;
- (BOOL)_isInitialScan;
- (id)_defaultPathExtensions;
@property(readonly, copy) NSArray *defaultSearchPaths;
- (id)_defaultApplicationSupportSubdirectory;
@property(readonly, copy) NSArray *extraSearchPaths;
- (id)_extensionsForExtensionPoint:(id)arg1 matchingPredicate:(id)arg2;
- (id)classesImplementingProtocol:(id)arg1;
- (id)extensionWithIdentifier:(id)arg1;
- (id)extensionPointWithIdentifier:(id)arg1;
- (id)plugInWithIdentifier:(id)arg1;
- (BOOL)scanForPlugIns:(id *)arg1;
- (id)init;
- (id)_hostAppName;
- (id)_hostAppContainingPath;

// Remaining properties
@property(copy) NSSet *defaultPlugInCapabilities; // @dynamic defaultPlugInCapabilities;
@property(copy) NSSet *exposedCapabilities; // @dynamic exposedCapabilities;
@property(readonly) NSMutableSet *mutableDefaultPlugInCapabilities; // @dynamic mutableDefaultPlugInCapabilities;
@property(readonly) NSMutableSet *mutableExposedCapabilities; // @dynamic mutableExposedCapabilities;
@property(readonly) NSMutableSet *mutablePathExtensions; // @dynamic mutablePathExtensions;
@property(readonly) NSMutableSet *mutableRequiredPlugInIdentifiers; // @dynamic mutableRequiredPlugInIdentifiers;
@property(readonly) NSMutableArray *mutableSearchPaths; // @dynamic mutableSearchPaths;
@property(copy) NSSet *pathExtensions; // @dynamic pathExtensions;
@property(copy) NSSet *requiredPlugInIdentifiers; // @dynamic requiredPlugInIdentifiers;
@property(copy) NSArray *searchPaths; // @dynamic searchPaths;

@end

