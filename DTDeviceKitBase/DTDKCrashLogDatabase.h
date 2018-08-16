//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTDKCrashLogDatabase : NSObject
{
}

+ (void)unsymbolicateCrashLogs:(id)arg1;
+ (void)forceSymbolicateCrashLogs:(id)arg1;
+ (void)symbolicateCrashLogs:(id)arg1;
+ (void)deleteCrashLogs:(id)arg1;
+ (_Bool)importCrashLogAtURL:(id)arg1;
+ (_Bool)importCrashLogs:(id)arg1;
+ (id)_loadCrashLogMetadata:(id)arg1;
+ (id)_incidentIdentifierForCrashLogAtURL:(id)arg1;
+ (id)dsymForUUID:(id)arg1 inContext:(id)arg2;
+ (id)dsymsForPath:(id)arg1 inContext:(id)arg2;
+ (id)dsymsInContext:(id)arg1;
+ (id)dsymMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)dsymsMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)binaryImageForUUID:(id)arg1 inContext:(id)arg2;
+ (id)binaryImagesInContext:(id)arg1;
+ (id)binaryImageMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)binaryImagesMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)crashLogForIncidentIdentifier:(id)arg1 inContext:(id)arg2;
+ (id)crashLogsInContext:(id)arg1;
+ (id)crashLogMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)crashLogsMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)objectsWithEntityName:(id)arg1 MatchingPredicate:(id)arg2 inContext:(id)arg3;
+ (void)startMigration;
+ (_Bool)hasFinishedMigration;
+ (id)temporaryMoc;
+ (id)mainThreadMoc;
+ (id)moc;
+ (_Bool)_fixVersionHashesAt:(id)arg1 error:(id *)arg2;
+ (id)persistentStoreOptions;
+ (id)_managedObjectModel;
+ (void)setLastScanEventId:(unsigned long long)arg1;
+ (unsigned long long)lastScanEventId;
+ (void)startFSEvents;

@end

