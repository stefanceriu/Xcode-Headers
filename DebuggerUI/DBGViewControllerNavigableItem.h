//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DBGDebugNavigableItem.h>

@class DBGViewDebuggerAdditionUIController, NSArray;

@interface DBGViewControllerNavigableItem : DBGDebugNavigableItem
{
    NSArray *_cachedChildRepresentedObjects;
    DBGViewDebuggerAdditionUIController *_cachedViewDebuggingUIController;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)viewDebuggingUIController;
- (id)childRepresentedObjects;
- (void)recursivelyInvalidateChildItems;
- (void)invalidateChildItems;
- (BOOL)isLeaf;

@end

