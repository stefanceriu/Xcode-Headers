//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigableItemDomainProvider.h>

#import <DebuggerUI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTObservingToken, IDEFileReference, NSArray, NSImage, NSMapTable, NSMutableArray, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface DBGMemoryDataExecutionEnvironmentWrapper : IDENavigableItemDomainProvider <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableArray *_processWrappers;
    NSMapTable *_launchSessionsToObserverTokens;
    DVTObservingToken *_workspacesLaunchSessionsObserver;
    DVTObservingToken *_workspaceValidObserver;
}

+ (id)domainObjectForWorkspace:(id)arg1;
+ (id)providerForWorkspace:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (unsigned long long)navigableItem_indexOfRepresentedObjectForIdentifier:(id)arg1 inRelationshipKeyPath:(id)arg2;
- (id)navigableItem_identifierForRepresentedObjectAtIndex:(unsigned long long)arg1 inRelationshipKeyPath:(id)arg2;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (void)_addMemoryDataGroupForProcess:(id)arg1;
- (void)_removeMemoryDataGroupForProcess:(id)arg1;
- (void)_handleProcessChanged:(id)arg1;
- (void)_handleLaunchSessionsAdded:(id)arg1;
- (void)_handleLaunchSessionsRemoved:(id)arg1;
- (void)_handleLaunchSessionsChanged:(id)arg1;
- (id)_initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableProcessWrappers; // @dynamic mutableProcessWrappers;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) NSArray *processWrappers; // @dynamic processWrappers;
@property(readonly) Class superclass;

@end

