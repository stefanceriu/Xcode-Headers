//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class DTMemoryGraphItem, DTMutableMemoryGraphItem, DVT_VMUProcessObjectGraph, NSCountedSet, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;

@interface DTObjectGraphIndex : NSObject <NSCopying>
{
    DTMutableMemoryGraphItem *_rootItem;
    NSMapTable *_classNodeForInfo;
    NSCountedSet *_expansions;
    NSMutableSet *_exemptIdentifiers;
    NSString *_mainExecutablePath;
    NSMutableDictionary *_classInfoForMallocBlockSize;
    NSMutableDictionary *_classInfoForVMRegionTag;
    BOOL _showLeaksOnly;
    NSString *_filterString;
    CDUnknownBlockType _userFilterBlock;
    DVT_VMUProcessObjectGraph *_graph;
    DVT_VMUProcessObjectGraph *_leakedGraph;
    unsigned long long _defaultHierarchicalLimit;
}

@property(nonatomic) BOOL showLeaksOnly; // @synthesize showLeaksOnly=_showLeaksOnly;
@property(nonatomic) unsigned long long defaultHierarchicalLimit; // @synthesize defaultHierarchicalLimit=_defaultHierarchicalLimit;
@property(retain, nonatomic) DVT_VMUProcessObjectGraph *leakedGraph; // @synthesize leakedGraph=_leakedGraph;
@property(retain, nonatomic) DVT_VMUProcessObjectGraph *graph; // @synthesize graph=_graph;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_userFilterBlock;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (void).cxx_destruct;
- (BOOL)_isNodePresentInLeakedGraph:(unsigned int)arg1;
- (void)_updateFilter;
- (void)exemptItem:(id)arg1;
- (BOOL)_isNodeExempt:(unsigned int)arg1;
- (void)_updateItemLimit:(id)arg1;
- (id)itemForReference:(unsigned int)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3;
- (id)itemForNode:(unsigned int)arg1;
- (id)_parentForItem:(id)arg1;
@property(readonly, nonatomic) DTMemoryGraphItem *rootItem;
- (void)_regenerateIndex;
- (id)_classInfoForNodeName:(unsigned int)arg1 nodeInfo:(CDStruct_599faf0f)arg2;
- (id)_classInfoForVMRegion:(id)arg1;
- (id)_classInfoForMallocBlockSize:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGraph:(id)arg1;

@end

