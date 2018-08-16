//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelEditor/XDComponentIdentifying-Protocol.h>

@class NSString;

@interface XDDiagramTool : NSObject <XDComponentIdentifying>
{
    NSString *_identifier;
    id _delegate;
    NSString *_label;
    NSString *_toolTip;
    struct _XDDiagramToolFlags _dtFlags;
}

+ (id)defaultIdentifier;
+ (void)initialize;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)flagsChanged:(id)arg1 inView:(id)arg2;
- (void)mouseDown:(id)arg1 inView:(id)arg2;
- (void)mouseMoved:(id)arg1 inView:(id)arg2;
- (void)mouseExited:(id)arg1 inView:(id)arg2;
- (void)mouseEntered:(id)arg1 inView:(id)arg2;
- (void)resignCurrentDiagramTool;
- (void)becomeCurrentDiagramTool;
- (BOOL)acceptsMouseMovedEvents;
- (void)setAcceptsMouseMovedEvents:(BOOL)arg1;
- (id)imageForDiagramToolbarItem;
- (id)cursorForDiagramView:(id)arg1;
- (id)toolTip;
- (void)setToolTip:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)identifier;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

