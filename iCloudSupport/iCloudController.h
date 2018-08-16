//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudSupport/DVTInvalidation-Protocol.h>
#import <iCloudSupport/IDECommandHandler-Protocol.h>
#import <iCloudSupport/IDECommandHandlerVendor-Protocol.h>
#import <iCloudSupport/IDEInitialization-Protocol.h>
#import <iCloudSupport/iCloudServiceObserver-Protocol.h>
#import <iCloudSupport/iCloudUIDelegate-Protocol.h>

@class DVTStackBacktrace, IDEWorkspace, NSArray, NSButton, NSImageView, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSSet, NSString, NSTextField, NSTimer, NSView, NSWindow, iCloud;
@protocol iCloudItem;

@interface iCloudController : NSObject <IDEInitialization, DVTInvalidation, iCloudServiceObserver, iCloudUIDelegate, IDECommandHandlerVendor, IDECommandHandler>
{
    NSMutableArray *_transferMeasurements;
    double _transferMeasurementsinitialTimeInterval;
    double _transferMeasurementsLastTimeInterval;
    NSTimer *_transferMeasurementsTimer;
    long long _childFetchesInProgress;
    id <iCloudItem> _temporaryRoot;
    NSSet *_devices;
    NSRecursiveLock *_devicesLock;
    BOOL _firstLoginAttempt;
    IDEWorkspace *_workspace;
    NSString *_UUID;
    iCloud *_iCloud;
    NSString *_primaryContainerName;
    double _lastUpdated;
    NSArray *_logEntries;
    NSMutableDictionary *_progressForItemID;
    NSRecursiveLock *_itemsLock;
    NSMutableDictionary *_items;
    NSRecursiveLock *_statusesLock;
    NSMutableDictionary *_statuses;
    NSRecursiveLock *_accountInformationLock;
    NSMutableDictionary *_accountInformation;
    NSMutableDictionary *_pathNameForContainerName;
    NSMutableDictionary *_pathForContainerName;
    NSMutableSet *_containerNamesToWipe;
    NSWindow *_wipeAppContainerSheet;
    NSImageView *_wipeWarningImageWell;
    NSTextField *_wipeTitleTextField;
    NSTextField *_wipeWarningTextField;
    NSView *_wipeMultipleContainersView;
    NSTextField *_wipeDetailsTextField;
    NSView *_wipeMultipleScrollView;
    NSButton *_wipeSheetDoneButton;
    NSLayoutConstraint *_wipeImageBottomSpacingConstraint;
    NSLayoutConstraint *_wipeDetailsTextFieldBottomSpacingConstraint;
    NSLayoutConstraint *_wipeDetailsTextFieldVerticalSpacingConstraint;
    NSLayoutConstraint *_wipeMultipleScrollViewConstraint1;
    NSLayoutConstraint *_wipeMultipleScrollViewConstraint2;
    NSLayoutConstraint *_wipeMultipleScrollViewSuperviewConstraint1;
    NSLayoutConstraint *_wipeMultipleScrollViewSuperviewConstraint2;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (BOOL)launchSessionHasAssociatediCloudContainers:(id)arg1;
+ (void)_getContainersFromEntitlements:(id)arg1 into:(id)arg2 foriCloudController:(id)arg3;
+ (void)_getContainersFromEntitlementsDict:(id)arg1 inPath:(id)arg2 into:(id)arg3 forKey:(id)arg4 foriCloudController:(id)arg5;
+ (id)_resolveContainerNameAndUpdateProperties:(id)arg1 prefix:(id)arg2 foriCloudController:(id)arg3;
+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (BOOL)_isValidSelector:(SEL)arg1;
+ (id)controllerForDocumentLocation:(id)arg1;
+ (id)controllerForURL:(id)arg1;
+ (id)controllerForUUID:(id)arg1;
+ (id)controllerForWorkspace:(id)arg1;
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
+ (void)initialize;
@property(retain) NSLayoutConstraint *wipeMultipleScrollViewSuperviewConstraint2; // @synthesize wipeMultipleScrollViewSuperviewConstraint2=_wipeMultipleScrollViewSuperviewConstraint2;
@property(retain) NSLayoutConstraint *wipeMultipleScrollViewSuperviewConstraint1; // @synthesize wipeMultipleScrollViewSuperviewConstraint1=_wipeMultipleScrollViewSuperviewConstraint1;
@property(retain) NSLayoutConstraint *wipeMultipleScrollViewConstraint2; // @synthesize wipeMultipleScrollViewConstraint2=_wipeMultipleScrollViewConstraint2;
@property(retain) NSLayoutConstraint *wipeMultipleScrollViewConstraint1; // @synthesize wipeMultipleScrollViewConstraint1=_wipeMultipleScrollViewConstraint1;
@property(retain) NSLayoutConstraint *wipeDetailsTextFieldVerticalSpacingConstraint; // @synthesize wipeDetailsTextFieldVerticalSpacingConstraint=_wipeDetailsTextFieldVerticalSpacingConstraint;
@property(retain) NSLayoutConstraint *wipeDetailsTextFieldBottomSpacingConstraint; // @synthesize wipeDetailsTextFieldBottomSpacingConstraint=_wipeDetailsTextFieldBottomSpacingConstraint;
@property __weak NSLayoutConstraint *wipeImageBottomSpacingConstraint; // @synthesize wipeImageBottomSpacingConstraint=_wipeImageBottomSpacingConstraint;
@property __weak NSButton *wipeSheetDoneButton; // @synthesize wipeSheetDoneButton=_wipeSheetDoneButton;
@property(retain) NSView *wipeMultipleScrollView; // @synthesize wipeMultipleScrollView=_wipeMultipleScrollView;
@property __weak NSTextField *wipeDetailsTextField; // @synthesize wipeDetailsTextField=_wipeDetailsTextField;
@property __weak NSView *wipeMultipleContainersView; // @synthesize wipeMultipleContainersView=_wipeMultipleContainersView;
@property __weak NSTextField *wipeWarningTextField; // @synthesize wipeWarningTextField=_wipeWarningTextField;
@property __weak NSTextField *wipeTitleTextField; // @synthesize wipeTitleTextField=_wipeTitleTextField;
@property __weak NSImageView *wipeWarningImageWell; // @synthesize wipeWarningImageWell=_wipeWarningImageWell;
@property(retain) NSWindow *wipeAppContainerSheet; // @synthesize wipeAppContainerSheet=_wipeAppContainerSheet;
@property(readonly, nonatomic) NSMutableSet *containerNamesToWipe; // @synthesize containerNamesToWipe=_containerNamesToWipe;
@property(retain, nonatomic) NSMutableDictionary *pathForContainerName; // @synthesize pathForContainerName=_pathForContainerName;
@property(retain, nonatomic) NSMutableDictionary *pathNameForContainerName; // @synthesize pathNameForContainerName=_pathNameForContainerName;
@property(retain, nonatomic) NSMutableDictionary *accountInformation; // @synthesize accountInformation=_accountInformation;
@property(retain, nonatomic) NSRecursiveLock *accountInformationLock; // @synthesize accountInformationLock=_accountInformationLock;
@property(retain, nonatomic) NSMutableDictionary *statuses; // @synthesize statuses=_statuses;
@property(retain, nonatomic) NSRecursiveLock *statusesLock; // @synthesize statusesLock=_statusesLock;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(retain, nonatomic) NSRecursiveLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property(retain) NSMutableDictionary *progressForItemID; // @synthesize progressForItemID=_progressForItemID;
@property(nonatomic) BOOL firstLoginAttempt; // @synthesize firstLoginAttempt=_firstLoginAttempt;
@property(readonly, copy, nonatomic) NSArray *logEntries; // @synthesize logEntries=_logEntries;
@property(nonatomic) double lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(copy, nonatomic) NSString *primaryContainerName; // @synthesize primaryContainerName=_primaryContainerName;
@property(readonly, nonatomic) iCloud *iCloud; // @synthesize iCloud=_iCloud;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly) NSArray *transferMeasurements; // @synthesize transferMeasurements=_transferMeasurements;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)iCloudServiceCenter:(id)arg1 didDisconnectDevice:(id)arg2;
- (void)iCloudServiceCenter:(id)arg1 didConnectDevice:(id)arg2;
- (void)iCloudServiceCenter:(id)arg1 serviceAccountChanged:(id)arg2 onDevice:(id)arg3;
- (void)iCloudServiceCenter:(id)arg1 serviceStatusChanged:(int)arg2 onDevice:(id)arg3;
- (void)iCloudServiceCenter:(id)arg1 item:(id)arg2 didDownloadBytes:(unsigned long long)arg3 of:(unsigned long long)arg4 forDevice:(id)arg5;
- (void)iCloudServiceCenter:(id)arg1 item:(id)arg2 didUploadBytes:(unsigned long long)arg3 of:(unsigned long long)arg4 forDevice:(id)arg5;
- (void)iCloudServiceCenter:(id)arg1 movedItem:(id)arg2 from:(id)arg3 to:(id)arg4 onDevice:(id)arg5;
- (void)iCloudServiceCenter:(id)arg1 removedItem:(id)arg2 fromDevice:(id)arg3;
- (void)iCloudServiceCenter:(id)arg1 addedItem:(id)arg2 toDevice:(id)arg3;
- (void)iCloudServiceCenter:(id)arg1 item:(id)arg2 sizeChanged:(unsigned long long)arg3 onDevice:(id)arg4;
- (void)iCloudServiceCenter:(id)arg1 item:(id)arg2 statusChanged:(unsigned long long)arg3 onDevice:(id)arg4;
- (void)iCloudServiceCenter:(id)arg1 fetchedInitialItems:(id)arg2 fromDevice:(id)arg3;
- (void)iCloudServiceCenter:(id)arg1 didReceiveAccountInformation:(id)arg2 fromDevice:(id)arg3;
- (void)iCloud:(id)arg1 needsAppleIDAndPasswordWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)addLogEntry:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *sortedDevices;
- (id)accountInformationForDevice:(id)arg1;
- (void)setAccountInformation:(id)arg1 forDevice:(id)arg2;
- (int)serverStatusForDevice:(id)arg1;
- (void)setServerStatus:(int)arg1 forDevice:(id)arg2;
- (id)rootItemForDevice:(id)arg1;
- (void)setRootItemInArray:(id)arg1 forDevice:(id)arg2;
- (void)_findContainerNamesToWipe;
- (void)startWatchingFirstContainerInLaunchSession:(id)arg1;
- (void)_getTransferMeasurementFromItem:(id)arg1 type:(BOOL)arg2;
- (double)_progressDeltaForItem:(id)arg1 currentProgress:(double)arg2;
- (void)_transferMeasurementsTimerFired:(id)arg1;
- (void)setCurrentTransferMeasurement:(id)arg1;
- (void)_orderOutWipeAppContainerSheet;
- (BOOL)_deleteFilesFrom:(id)arg1 pathToSkip:(id)arg2;
- (void)endWipeAppContainerSheet:(id)arg1;
- (void)discloseWipeMultipleScrollView:(id)arg1;
- (void)_reenableScreenUpdates;
- (void)wipeAppContainer:(id)arg1;
- (id)_pathForContainerName:(id)arg1;
- (id)_localiCloudDirectoryPath;
- (void)fetchEvent:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
@property(copy, nonatomic) NSSet *devices;
- (id)children;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

