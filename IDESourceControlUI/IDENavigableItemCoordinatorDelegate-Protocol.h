//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceControlUI/NSObject-Protocol.h>

@class IDEEditorDocument, IDENavigableItem, IDENavigableItemCoordinator, NSArray;

@protocol IDENavigableItemCoordinatorDelegate <NSObject>

@optional
- (void)navigableItemCoordinator:(IDENavigableItemCoordinator *)arg1 didForgetItems:(id)arg2;
- (void)navigableItemCoordinator:(IDENavigableItemCoordinator *)arg1 willForgetItems:(id)arg2;
- (void)didEndTransactionScopeForNavigableItemCoordinator:(IDENavigableItemCoordinator *)arg1;
- (void)willBeginTransactionScopeForNavigableItemCoordinator:(IDENavigableItemCoordinator *)arg1;
- (NSArray *)navigableItem:(IDENavigableItem *)arg1 childRepresentedObjectsForArray:(NSArray *)arg2;
- (IDEEditorDocument *)navigableItemCoordinator:(IDENavigableItemCoordinator *)arg1 editorDocumentForNavigableItem:(IDENavigableItem *)arg2;
@end

