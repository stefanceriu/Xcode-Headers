//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IBNSTouchBarItem.h"

#import "IBDocumentArchiving-Protocol.h"

@class NSColor, NSColorPickerTouchBarItem, NSString;

@interface IBNSColorPickerTouchBarItem : IBNSTouchBarItem <IBDocumentArchiving>
{
    NSColorPickerTouchBarItem *_runtimeTouchBarItem;
    BOOL _showsAlpha;
    BOOL _enabled;
    NSColor *_color;
    unsigned long long _type;
    id _target;
    SEL _action;
}

+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
@property unsigned long long type; // @synthesize type=_type;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property BOOL showsAlpha; // @synthesize showsAlpha=_showsAlpha;
@property(copy) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)runtimeTouchBarItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (BOOL)ibInspectedCustomizationLabelIsVisible;
- (BOOL)ibInspectedIdentifierIsVisible;
- (id)ibTypeNameForDefaultLabel;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

