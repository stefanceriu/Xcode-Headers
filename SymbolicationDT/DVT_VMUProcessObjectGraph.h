//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SymbolicationDT/DVT_VMUObjectGraph.h>

#import "VMUCommonGraphInterface.h"

@class DVT_VMUClassInfoMap, DVT_VMUNodeToStringMap, DVT_VMURangeToStringMap, NSArray, NSDictionary, NSString;

@interface DVT_VMUProcessObjectGraph : DVT_VMUObjectGraph <VMUCommonGraphInterface>
{
    int _pid;
    unsigned int _kernPageSize;
    unsigned long long _machAbsolute;
    NSArray *_regions;
    unsigned int _regionCount;
    NSArray *_zoneNames;
    NSString *_procDescription;
    NSString *_procName;
    DVT_VMURangeToStringMap *_threadNameRanges;
    DVT_VMURangeToStringMap *_binarySectionNameRanges;
    DVT_VMURangeToStringMap *_regionSymbolNameRanges;
    NSDictionary *_pthreadOffsets;
    DVT_VMUNodeToStringMap *_nodeLabels;
    void *_userMarked;
}

@property(nonatomic) unsigned long long snapshotMachTime; // @synthesize snapshotMachTime=_machAbsolute;
@property(readonly, nonatomic) unsigned int regionCount; // @synthesize regionCount=_regionCount;
@property(readonly, nonatomic) unsigned int vmPageSize; // @synthesize vmPageSize=_kernPageSize;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2;
- (void)refineEdges:(unsigned int)arg1 withOptions:(unsigned int)arg2 markingInvalid:(void *)arg3;
- (void)refineTypesWithOverlay:(id)arg1;
- (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 alignmentSpacing:(unsigned int)arg4;
- (id)_detailedNodeOffsetDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 alignmentSpacing:(unsigned int)arg4;
- (id)nodeOffsetDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3;
- (id)nodeDescription:(unsigned int)arg1 withDestinationNode:(unsigned int)arg2 referenceInfo:(CDStruct_8b65991f)arg3;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (id)nodeDescription:(unsigned int)arg1;
- (id)shortNodeDescription:(unsigned int)arg1;
- (id)vmuVMRegionForNode:(unsigned int)arg1;
- (id)_descriptionForRegionAddress:(unsigned long long)arg1 withOffset:(unsigned long long)arg2 showSegment:(BOOL)arg3;
@property(readonly, nonatomic) BOOL is64bit;
@property(copy, nonatomic) NSString *processName;
@property(copy, nonatomic) NSString *toolHeaderDescription;
- (void *)copyUserMarked;
- (void)_renameWithNodeMap:(unsigned int *)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int *)arg3 edgeNamespace:(unsigned int)arg4;
- (unsigned int)enumerateRegionsWithBlock:(CDUnknownBlockType)arg1;
- (id)zoneNameForIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int zoneCount;
@property(readonly, nonatomic) DVT_VMUClassInfoMap *realizedClasses;
- (id)shortLabelForMallocNode:(unsigned int)arg1;
- (void *)contentForNode:(unsigned int)arg1;
- (id)labelForNode:(unsigned int)arg1;
- (void)setLabel:(id)arg1 forNode:(unsigned int)arg2;
- (struct _VMURange)regionSymbolRangeContainingAddress:(unsigned long long)arg1;
- (id)regionSymbolNameForAddress:(unsigned long long)arg1;
- (void)setRegionSymbolName:(id)arg1 forRange:(struct _VMURange)arg2;
- (struct _VMURange)binarySectionRangeContainingAddress:(unsigned long long)arg1;
- (id)binarySectionNameForAddress:(unsigned long long)arg1;
- (void)setBinarySectionName:(id)arg1 forRange:(struct _VMURange)arg2;
- (id)threadNameForAddress:(unsigned long long)arg1;
- (void)setThreadName:(id)arg1 forRange:(struct _VMURange)arg2;
- (void)_deriveObjcClassStructureRanges;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithPid:(int)arg1 nodes:(struct _VMUBlockNode *)arg2 nodeCount:(unsigned int)arg3 zoneNames:(id)arg4 classInfoMap:(id)arg5 regions:(id)arg6 pthreadOffsets:(id)arg7 userMarked:(void *)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int nodeCount;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize;
@property(readonly) Class superclass;

@end

