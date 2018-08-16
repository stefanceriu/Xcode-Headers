//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DVTFoundation/DVTPropertyListEncoding-Protocol.h>

@class DVTExtensionElementDescription, DVTPlugIn, DVTPlugInManager, NSBundle, NSDictionary, NSMutableSet, NSSet, NSString;

@interface DVTExtensionPoint : NSObject <DVTPropertyListEncoding>
{
    NSDictionary *_extensionPointData;
    DVTPlugInManager *_plugInManager;
    NSString *_identifier;
    NSString *_version;
    NSString *_name;
    DVTPlugIn *_plugIn;
    DVTExtensionElementDescription *_extensionSchema;
    DVTExtensionPoint *_parentExtensionPoint;
    NSMutableSet *_extensions;
    NSMutableSet *_childExtensionPoints;
}

+ (id)requiredExtensionsForExtensionPointWithIdentifier:(id)arg1;
+ (id)requiredExtensionPointForIdentifier:(id)arg1;
@property(readonly, copy) NSSet *childExtensionPoints; // @synthesize childExtensionPoints=_childExtensionPoints;
@property(readonly, copy) NSSet *extensions; // @synthesize extensions=_extensions;
@property(readonly) DVTPlugIn *plugIn; // @synthesize plugIn=_plugIn;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *version; // @synthesize version=_version;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_registerChildExtensionPoint:(id)arg1;
- (void)_registerExtension:(id)arg1;
- (id)extensionsMatchingPredicate:(id)arg1;
@property(readonly) NSBundle *bundle;
@property(readonly) DVTExtensionPoint *parentExtensionPoint; // @dynamic parentExtensionPoint;
@property(readonly, copy) DVTExtensionElementDescription *extensionSchema; // @dynamic extensionSchema;
- (void)_setUpParentExtensionPoint;
@property(readonly, copy) NSString *description;
- (void)encodeIntoPropertyList:(id)arg1;
- (void)awakeFromPropertyList;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithExtensionPointData:(id)arg1 plugIn:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

