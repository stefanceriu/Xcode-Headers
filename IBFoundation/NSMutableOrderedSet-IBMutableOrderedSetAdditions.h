//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableOrderedSet.h>

#import <IBFoundation/IBMutableOrderedCollection-Protocol.h>

@class NSString;

@interface NSMutableOrderedSet (IBMutableOrderedSetAdditions) <IBMutableOrderedCollection>
- (void)ib_reverseObjects;
- (void)ib_removeObjectsInCollection:(id)arg1;
- (void)ib_mergeAdditionsAndOrderingHintsFromOrderedSet:(id)arg1;
- (void)ib_addObjectToSortedCollectionUsingBinarySearch:(id)arg1 comparisonSelector:(SEL)arg2;
- (void)ib_addObjectToSortedCollectionUsingBinarySearch:(id)arg1 comparator:(CDUnknownBlockType)arg2;
- (void)ib_insertObjects:(id)arg1 atIndex:(long long)arg2;
- (void)ib_addObjectIfNonNil:(id)arg1;
- (void)ib_appendObjects:(id)arg1;
- (void)ib_addObjectsFromCollection:(id)arg1;
- (void)ib_addObjectsFromFastEnumerable:(id)arg1;
- (id)ib_dequeue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

