//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerKit/GPUGenericNavigableItem.h>

#import <GPUDebuggerKit/GPUStringFilterableNavigableItem-Protocol.h>

@class GPUFilterTokenPredicate, GPUTraceProgramGroup, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GPUTraceProgramGroupNavigableItem : GPUGenericNavigableItem <GPUStringFilterableNavigableItem>
{
    NSArray *_cachedChildRepresentedObjects;
    GPUFilterTokenPredicate *_filterPredicate;
}

@property(retain, nonatomic) GPUFilterTokenPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
- (void).cxx_destruct;
- (void)invalidateChildItems;
@property(readonly, nonatomic) NSArray *childRepresentedObjects;
- (id)_filterChildren;
- (id)name;
- (id)image;
- (id)initWithRepresentedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GPUTraceProgramGroup *representedObject; // @dynamic representedObject;
@property(readonly) Class superclass;

@end

