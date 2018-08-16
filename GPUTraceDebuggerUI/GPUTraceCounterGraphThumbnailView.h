//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <GPUTraceDebuggerUI/GPUTimelineGraphThumbnailView-Protocol.h>

@class GPUTimelineGraphDataSource, GPUTraceAPIItem, NSImageView, NSString;

__attribute__((visibility("hidden")))
@interface GPUTraceCounterGraphThumbnailView : NSView <GPUTimelineGraphThumbnailView>
{
    GPUTraceAPIItem *_item;
    GPUTimelineGraphDataSource *_dataSource;
    NSImageView *_imageView;
}

@property __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak GPUTimelineGraphDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (BOOL)updateThumbnailForItem:(const struct GPUTimelineGraphReferencePlaneCell *)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_update;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
