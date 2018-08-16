//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEWorkspaceTabControllerLayoutTreeNode, NSArray, NSString;

@interface IDENavigationHUDTabLayoutCell : NSObject
{
    IDEWorkspaceTabControllerLayoutTreeNode *_representedLayoutTreeNode;
    unsigned long long _orientation;
    IDENavigationHUDTabLayoutCell *_parentCell;
    NSArray *_childCells;
}

@property(readonly) unsigned long long orientation; // @synthesize orientation=_orientation;
@property __weak IDENavigationHUDTabLayoutCell *parentCell; // @synthesize parentCell=_parentCell;
@property(readonly) NSArray *childCells; // @synthesize childCells=_childCells;
@property(readonly) IDEWorkspaceTabControllerLayoutTreeNode *representedLayoutTreeNode; // @synthesize representedLayoutTreeNode=_representedLayoutTreeNode;
- (void).cxx_destruct;
@property(readonly) NSString *fullDescription;
- (void)appendDescriptionToString:(id)arg1 withIndentation:(id)arg2;
- (id)description;
- (BOOL)canRotateLogicalGeometricLayoutToOrientation:(BOOL)arg1;
- (void)rotateLogicallyGeometricNodes;
@property(readonly) BOOL canCollapse;
- (void)condense;
@property(readonly) double fixedWidthOrHeight;
@property(readonly) BOOL hasFixedWidthOrHeight;
@property(readonly) BOOL representsNewSplitAction;
- (void)addChildCell:(id)arg1;
- (void)setChildCells:(id)arg1;
- (id)representativeLayerForTabLayer:(id)arg1;
@property(readonly, getter=isLeaf) BOOL leaf;
- (id)initWithRepresentedLayoutTreeNode:(id)arg1 childCells:(id)arg2 orientation:(unsigned long long)arg3;
- (id)initWithRepresentedLayoutTreeNode:(id)arg1;

@end

