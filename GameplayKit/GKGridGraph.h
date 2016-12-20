//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameplayKit/GKGraph.h>

@interface GKGridGraph : GKGraph
{
    struct GKCGridGraph *_cGridGraph;
    BOOL _diagonalsAllowed;
}

+ (id)graphFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed:(Class)arg4 nodeClass: /* Error: Ran out of types for this method. */;
+ (id)graphFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) BOOL diagonalsAllowed; // @synthesize diagonalsAllowed=_diagonalsAllowed;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeNodes:(id)arg1;
- (void)connectNodeToAdjacentNodes:(id)arg1;
- (id)nodeAtGridPositionNoNilCheck: /* Error: Ran out of types for this method. */;
- (id)nodeAtGridPosition: /* Error: Ran out of types for this method. */;
- (id)initFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed:(Class)arg4 nodeClass: /* Error: Ran out of types for this method. */;
- (id)initFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed: /* Error: Ran out of types for this method. */;
- (struct GKCGridGraph *)cGridGraph;
@property(readonly, nonatomic) unsigned long long gridHeight;
@property(readonly, nonatomic) unsigned long long gridWidth;
// Error parsing type for property gridOrigin:
// Property attributes: T,R,N

- (struct GKCGraph *)makeCGraph;

@end

