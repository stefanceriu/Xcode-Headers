//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBCollection-Protocol.h>

@class NSArray, NSEnumerator, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, Protocol;
@protocol IBCollection, IBOrderedCollection;

@protocol IBOrderedCollection <IBCollection>
+ (id)ib_orderedCollectionWithOrderedCollection:(id <IBOrderedCollection>)arg1;
+ (id)ib_collectionWithObject:(id)arg1;
+ (id)ib_emptyCollection;
+ (Class)ib_mutableClass;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(long long (^)(id, id))arg4;
- (id)lastObject;
- (id)firstObject;
- (long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (BOOL)ib_binarySearchForObject:(id)arg1 usingComparator:(long long (^)(id, id))arg2;
- (unsigned long long)ib_indexOfFirstObjectPassingTest:(BOOL (^)(id))arg1;
- (id <IBOrderedCollection>)ib_collectionByReversingObjects;
- (id <IBOrderedCollection>)ib_collectionByInsertingObjects:(id <IBCollection>)arg1 atIndex:(long long)arg2;
- (id <IBOrderedCollection>)ib_collectionByInsertingObject:(id)arg1 atIndex:(long long)arg2;
- (id)ib_collectionByKeepingObjectsInSet:(NSSet *)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (NSSet *)ib_setByMappingBlock:(id (^)(id))arg1;
- (void)ib_getObjects:(id *)arg1;
- (void)ib_removeObjectsInReceiverFromArray:(NSMutableArray *)arg1;
- (void)ib_removeObjectsInReceiverFromOrderedSet:(NSMutableOrderedSet *)arg1;
- (void)ib_removeObjectsInReceiverFromSet:(NSMutableSet *)arg1;
- (id)ib_maximumObjectUsingComparator:(long long (^)(id, id))arg1;
- (id)ib_minimumObjectUsingComparator:(long long (^)(id, id))arg1;
- (long long)ib_numberOfObjectsPassingTest:(BOOL (^)(id))arg1;
- (NSArray *)ib_arrayByMappingBlock:(id (^)(id))arg1;
- (NSArray *)ib_arrayBySortingUsingComparator:(long long (^)(id, id))arg1;
- (NSArray *)ib_arrayBySortingUsingSelector:(SEL)arg1 onKeyPath:(NSString *)arg2;
- (NSArray *)ib_arrayBySortingUsingSelector:(SEL)arg1;
- (void)ib_enumerateObjectsUsingMutatingBlock:(void (^)(id))arg1;
- (void)ib_enumerateCopyOfObjectsUsingBlock:(void (^)(id))arg1;
- (id <IBOrderedCollection>)ib_collectionByMappingAndFilteringWithBlock:(id (^)(id))arg1;
- (id <IBOrderedCollection>)ib_collectionByRemovingObject:(id)arg1;
- (id <IBOrderedCollection>)ib_collectionByAddingObject:(id)arg1;
- (id <IBOrderedCollection>)ib_collectionByRemovingObjectsInSet:(NSSet *)arg1;
- (id <IBOrderedCollection>)ib_collectionByAddingObjectsFromCollection:(id <IBCollection>)arg1;
- (id <IBOrderedCollection>)ib_collectionByRemovingObjectsFromCollection:(id <IBCollection>)arg1;
- (id <IBOrderedCollection>)ib_collectionByMappingBlock:(id (^)(id))arg1;
- (id <IBOrderedCollection>)ib_collectionByFilteringUsingBlock:(BOOL (^)(id))arg1;
- (id <IBOrderedCollection>)ib_collectionByRemovingNulls;
- (id)ib_onlyObjectPassingTest:(BOOL (^)(id))arg1;
- (id)ib_firstObjectPassingTest:(BOOL (^)(id))arg1;
- (BOOL)ib_objectsAreStrictlyContainedBySet:(NSSet *)arg1;
- (BOOL)ib_objectsAreContainedBySet:(NSSet *)arg1;
- (BOOL)ib_anyObjectsPassTest:(BOOL (^)(id))arg1;
- (BOOL)ib_allObjectsPassTest:(BOOL (^)(id))arg1;
- (id)mutableCopy;
- (id)copy;
- (Class)ib_mutableClass;
- (NSEnumerator *)objectEnumerator;
- (NSSet *)ib_uniqueObjects;
- (NSArray *)allObjects;
- (id <IBOrderedCollection>)ib_objectsConformingToProtocol:(Protocol *)arg1;
- (id <IBOrderedCollection>)ib_objectsOfClass:(Class)arg1;
- (unsigned long long)count;
- (BOOL)containsObject:(id)arg1;
- (id)ib_onlyObject;
- (id)anyObject;
@end

