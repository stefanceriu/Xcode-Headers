//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceDisplayableItem.h>

#import <GPUDebuggerMTLSupport/DYFunctionTracerDelegate-Protocol.h>
#import <GPUDebuggerMTLSupport/GPUMTLStateMirrorInterface-Protocol.h>
#import <GPUDebuggerMTLSupport/GPUMTLTraceItemInterface-Protocol.h>

@class NSString;
@protocol DYPMTLStateMirror;

__attribute__((visibility("hidden")))
@interface GPUMTLTraceDisplayableItem : GPUTraceDisplayableItem <DYFunctionTracerDelegate, GPUMTLStateMirrorInterface, GPUMTLTraceItemInterface>
{
    id <DYPMTLStateMirror> _stateMirror;
    unsigned long long _owningDeviceID;
}

@property(readonly, nonatomic) unsigned long long owningDeviceID; // @synthesize owningDeviceID=_owningDeviceID;
- (void).cxx_destruct;
- (id)rewriteArgument:(const struct Argument *)arg1;
- (id)rewriteReceiver:(unsigned long long)arg1;
- (id)rewriteURL:(const char *)arg1;
- (id)_thumbnailToImage:(id)arg1;
- (id)_resourceInfoWithThumbnailInfo:(id)arg1;
- (id)_renderedImage:(id)arg1 showDepth:(BOOL)arg2;
- (id)generateFenumInfo;
- (id)generateLabel;
@property(readonly, nonatomic) unsigned long long receiverID;
@property(readonly, nonatomic) BOOL hasStateMirror;
@property(readonly, nonatomic) id <DYPMTLStateMirror> stateMirror;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithController:(id)arg1 parent:(id)arg2 deviceID:(unsigned long long)arg3 functionIndex:(int)arg4 displayIndex:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

