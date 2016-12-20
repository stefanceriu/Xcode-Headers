//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerKit/GPUBufferViewerDataSourceViewController.h>

#import "NSOutlineViewDataSource.h"

@class GPUBufferViewerDefaults, NSOutlineView, NSString;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerOutlineViewController : GPUBufferViewerDataSourceViewController <NSOutlineViewDataSource>
{
    BOOL _performedInitialScroll;
    NSOutlineView *_outlineView;
    unsigned long long _maxComponents;
    GPUBufferViewerDefaults *_defaults;
}

@property(nonatomic) BOOL performedInitialScroll; // @synthesize performedInitialScroll=_performedInitialScroll;
@property(retain, nonatomic) GPUBufferViewerDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic) unsigned long long maxComponents; // @synthesize maxComponents=_maxComponents;
@property(nonatomic) __weak NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)copy:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)scrollToRow0;
- (void)update;
@property(retain) id <GPUBufferViewerDataSource> representedObject; // @dynamic representedObject;
- (BOOL)becomeFirstResponder;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

