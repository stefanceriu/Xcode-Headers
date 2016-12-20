//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary;

@interface DVT_VMUDirectedGraph : NSObject <NSCopying>
{
    unsigned int _nodeCount;
    unsigned int _edgeCount;
    unsigned int _edgeCapacity;
    unsigned int _externalEdges;
    void *_deadNodes;
    unsigned int _nextNodeName;
    unsigned int _nextEdgeName;
    unsigned int *_nodeAdjIndex;
    struct _VMUDirectedGraphEdge *_edges;
    NSDictionary *_additionalProperties;
    unsigned int _indexedNodeSpace;
    unsigned int _indexedEdges;
    int _insideSearch;
    BOOL _inverted;
    BOOL _graphIs64bit;
}

+ (id)directedGraphWithData:(id)arg1 error:(id *)arg2;
+ (id)_unarchivedObject:(id)arg1 ofClass:(Class)arg2 options:(unsigned long long)arg3;
+ (id)_archivedObject:(id)arg1 options:(unsigned long long)arg2;
+ (void *)_copyUnarchived:(id)arg1 length:(unsigned long long *)arg2 options:(unsigned long long)arg3;
+ (id)_archivedBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
@property(readonly, nonatomic) BOOL graphIs64bit; // @synthesize graphIs64bit=_graphIs64bit;
@property(copy, nonatomic) NSDictionary *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(readonly, nonatomic) unsigned int edgeNamespaceSize; // @synthesize edgeNamespaceSize=_nextEdgeName;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize; // @synthesize nodeNamespaceSize=_nextNodeName;
@property(readonly, nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_nodeCount;
- (id)invertedGraph;
- (id)renormalizedGraph;
- (id)subgraphWithMarkedNodes:(void *)arg1;
- (void)invertEdges;
- (void)_dumpAdjacencyList;
- (void)breadthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;
- (void)depthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;
- (void)_searchMainLoop:(unsigned int)arg1 action:(CDUnknownBlockType)arg2;
- (void)_bfsCore:(unsigned int)arg1 colors:(char *)arg2 visitBlock:(CDUnknownBlockType)arg3 examineBlock:(CDUnknownBlockType)arg4;
- (void)_dfsCore:(unsigned int)arg1 colors:(char *)arg2 visitBlock:(CDUnknownBlockType)arg3 examineBlock:(CDUnknownBlockType)arg4;
- (void)withEdgeMarkingMap:(CDUnknownBlockType)arg1;
- (void)withNodeMarkingMap:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned int)_internalEnumerateEdgesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_internalAccessRawEdgesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateEdgesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int edgeCount;
- (unsigned int)parentGroupForNode:(unsigned int)arg1;
- (unsigned int)enumerateMembersOfGroupNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned int)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
- (void)_renameWithNodeMap:(unsigned int *)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int *)arg3 edgeNamespace:(unsigned int)arg4;
- (void)_renormalize;
- (BOOL)_adjustAdjacencyMap;
@property(nonatomic) BOOL inverted;
- (void)ungroupNode:(unsigned int)arg1;
- (unsigned int)addGroupNodeForNodes:(const unsigned int *)arg1 count:(unsigned int)arg2;
- (BOOL)isNodePresent:(unsigned int)arg1;
- (void)removeMarkedEdges:(void *)arg1;
- (void)removeMarkedNodes:(void *)arg1;
- (void *)_deadNodeMap;
- (void)_faultDeadNodeMap;
- (void)_removeEdges:(CDUnknownBlockType)arg1;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (void)_internalAddEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2 withName:(unsigned int)arg3;
- (unsigned int)addNode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)plistRepresentationWithOptions:(unsigned long long)arg1;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)initWithNodes:(unsigned int)arg1;
- (id)subgraphWithUniquePathsFromNode:(unsigned int)arg1 toNodes:(void *)arg2;
- (id)subgraphWithShortestPathsFromNode:(unsigned int)arg1 toNodes:(void *)arg2;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2;
- (void)stronglyConnectedComponentSearch:(unsigned int)arg1 withRecorder:(CDUnknownBlockType)arg2;

@end

