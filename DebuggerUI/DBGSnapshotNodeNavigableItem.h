//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DBGDebugNavigableItem.h>

@class DBGViewDebuggerAdditionUIController, NSArray;

@interface DBGSnapshotNodeNavigableItem : DBGDebugNavigableItem
{
    DBGViewDebuggerAdditionUIController *_viewDebuggingUIController;
    NSArray *_cachedChildRepresentedObjects;
}

@property(retain, nonatomic) NSArray *cachedChildRepresentedObjects; // @synthesize cachedChildRepresentedObjects=_cachedChildRepresentedObjects;
@property(retain, nonatomic) DBGViewDebuggerAdditionUIController *viewDebuggingUIController; // @synthesize viewDebuggingUIController=_viewDebuggingUIController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)recursivelyInvalidateChildItems;
- (void)invalidateChildItems;

@end

