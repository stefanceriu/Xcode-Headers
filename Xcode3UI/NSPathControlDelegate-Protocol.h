//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/NSObject-Protocol.h>

@class NSMenu, NSOpenPanel, NSPasteboard, NSPathComponentCell, NSPathControl, NSPathControlItem;
@protocol NSDraggingInfo;

@protocol NSPathControlDelegate <NSObject>

@optional
- (void)pathControl:(NSPathControl *)arg1 willPopUpMenu:(NSMenu *)arg2;
- (void)pathControl:(NSPathControl *)arg1 willDisplayOpenPanel:(NSOpenPanel *)arg2;
- (BOOL)pathControl:(NSPathControl *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2;
- (unsigned long long)pathControl:(NSPathControl *)arg1 validateDrop:(id <NSDraggingInfo>)arg2;
- (BOOL)pathControl:(NSPathControl *)arg1 shouldDragPathComponentCell:(NSPathComponentCell *)arg2 withPasteboard:(NSPasteboard *)arg3;
- (BOOL)pathControl:(NSPathControl *)arg1 shouldDragItem:(NSPathControlItem *)arg2 withPasteboard:(NSPasteboard *)arg3;
@end

