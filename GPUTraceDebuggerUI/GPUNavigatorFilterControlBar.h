//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDENavigatorFilterControlBar.h"

#import "NSDraggingDestination.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GPUNavigatorFilterControlBar : IDENavigatorFilterControlBar <NSDraggingDestination>
{
}

- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

