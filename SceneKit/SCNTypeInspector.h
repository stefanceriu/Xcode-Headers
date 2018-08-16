//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <SceneKit/NSOutlineViewDataSource-Protocol.h>
#import <SceneKit/NSOutlineViewDelegate-Protocol.h>

@class NSMutableDictionary, NSOutlineView, NSString;

__attribute__((visibility("hidden")))
@interface SCNTypeInspector : NSView <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    id _instance;
    NSView *_mainView;
    NSOutlineView *_outlineView;
    NSMutableDictionary *_datasource;
}

- (void).cxx_destruct;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (id)ivarsOfItem:(id)arg1;
@property(retain) id instance;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

