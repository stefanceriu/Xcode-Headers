//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/XDDevAttributeMapping.h>

#import <IDEModelEditor/IDEMappingModelObject-Protocol.h>

@class IDETypeIdentifier, NSArray, NSImage, NSString;
@protocol IDEDMModelObject, IDEDMSourceObject;

@interface XDDevAttributeMapping (XDDevAttributeMappingNavigableIdentification) <IDEMappingModelObject>
@property(readonly) id <IDEDMModelObject> parentObject;
@property(readonly) NSArray *structuralChildren;
@property(readonly) id <IDEDMSourceObject> sourceObject;
@property(readonly) NSImage *representativeIcon;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@end

