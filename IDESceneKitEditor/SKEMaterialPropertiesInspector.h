//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESceneKitEditor/SKEInspectorViewController.h>

#import <IDESceneKitEditor/NSOutlineViewDataSource-Protocol.h>
#import <IDESceneKitEditor/NSOutlineViewDelegate-Protocol.h>

@class NSString;

@interface SKEMaterialPropertiesInspector : SKEInspectorViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
}

+ (id)sliverElementsForSlotName:(id)arg1 extended:(BOOL)arg2;
- (id)sliceElement;
- (id)material;
- (void)setContent:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

