//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTModelTreeNode.h>

#import <Xcode3UI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>
#import <Xcode3UI/Xcode3ContainerItemWrapping-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL, PBXBuildFile, PBXReference, Xcode3BuildFileGroup, Xcode3BuildPhase, _TtC13DVTFoundation9DVTSymbol;

@interface Xcode3BuildFile : DVTModelTreeNode <IDEKeyDrivenNavigableItemRepresentedObject, Xcode3ContainerItemWrapping>
{
    PBXBuildFile *_buildFile;
    NSString *_parentPathForDisplay;
    BOOL _isMigDefsFile;
    BOOL _needToCheckIfIsMigDefsFile;
    BOOL _isSceneKitFile;
    BOOL _needToCheckIfIsSceneKitFile;
}

+ (void)batchSetCompilerFlags:(id)arg1 forBuildFiles:(id)arg2;
+ (id)wrappingXcode3BuildFileForPBXBuildFile:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(readonly) PBXBuildFile *pbxBuildFile; // @synthesize pbxBuildFile=_buildFile;
- (void).cxx_destruct;
- (long long)compareToBuildFile:(id)arg1;
@property(readonly) NSString *parentPathForDisplay;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL isSceneKitFile; // @synthesize isSceneKitFile=_isSceneKitFile;
@property(readonly) BOOL isMigDefsFile; // @synthesize isMigDefsFile=_isMigDefsFile;
@property(copy) NSString *compilerFlags;
@property(readonly) PBXReference *navigableReference;
- (id)reference;
@property(readonly) NSString *name;
- (void)primitiveInvalidate;
- (id)initWithBuildFile:(id)arg1;
@property(readonly, nonatomic) NSString *navigableItem_name;

// Remaining properties
@property(readonly) Xcode3BuildPhase *buildPhase; // @dynamic buildPhase;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
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
@property(readonly) Xcode3BuildFileGroup *parentGroup; // @dynamic parentGroup;
@property(readonly) Class superclass;

@end

