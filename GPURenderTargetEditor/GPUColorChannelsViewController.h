//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "GPUColorChannelLinkDelegate.h"
#import "GPUTraceResourceSettingsChannelStripDelegate.h"

@class DYRenderingAttributes, GPUColorChannelLink, NSArray, NSString;

@interface GPUColorChannelsViewController : NSViewController <GPUTraceResourceSettingsChannelStripDelegate, GPUColorChannelLinkDelegate>
{
    id <DYResource> _resource;
    DYRenderingAttributes *_renderingAttributes;
    BOOL _showDepth;
    BOOL _linked;
    NSArray *_colorChannels;
    unsigned long long _numberOfLinkedChannels;
    GPUColorChannelLink *_linkView;
    NSArray *_allChannelViewControllers;
    NSArray *_linkedChannelViewControllers;
    id <GPUColorChannelsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <GPUColorChannelsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)colorChannelLink:(id)arg1 changedLinkState:(BOOL)arg2;
- (void)channelStrip:(id)arg1 updateToneMapExtentsWithMin:(double)arg2 andMax:(double)arg3;
- (void)channelStrip:(id)arg1 updateToneMapRangeWithMin:(double)arg2 andMax:(double)arg3;
- (void)channelStrip:(id)arg1 autoRangeCheckBoxUpdatedWithState:(long long)arg2;
- (void)channelStrip:(id)arg1 enableButtonUpdatedWithState:(long long)arg2 usingAlternateKey:(BOOL)arg3;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)setResource:(id)arg1 renderingAttributes:(id)arg2 showDepth:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

