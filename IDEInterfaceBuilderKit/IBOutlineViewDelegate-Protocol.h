//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/DVTOutlineViewDelegate-Protocol.h>

@class IBOutlineView, NSEvent, NSOutlineView;

@protocol IBOutlineViewDelegate <DVTOutlineViewDelegate>
- (BOOL)outlineView:(NSOutlineView *)arg1 isGroupHeaderItem:(id)arg2;

@optional
- (void)outlineView:(IBOutlineView *)arg1 handleRightOrControlLeftDrag:(NSEvent *)arg2;
- (void)outlineView:(IBOutlineView *)arg1 handleRightOrControlLeftClick:(NSEvent *)arg2;
- (void)outlineView:(IBOutlineView *)arg1 didHandleMouseDown:(NSEvent *)arg2;
- (void)outlineView:(IBOutlineView *)arg1 handleMouseDown:(NSEvent *)arg2;
@end

