//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DTObjectGridGraph <NSObject>
@property(readonly, nonatomic) id <DTObjectGridReference> selectedReference;
@property(readonly, nonatomic) id <DTObjectGridNode> selectedNode;
@property(nonatomic) unsigned int pivotNodeIdentifier;
@property(nonatomic) struct CGSize gridCellSize;
@property(nonatomic) __weak id <DTObjectGridGraphDelegate> delegate;
@property(nonatomic) __weak id <DTObjectGridGraphDataSource> dataSource;
- (void)deselectAll;
- (void)selectReferenceWithIdentifier:(unsigned int)arg1;
- (void)selectNodeWithIdentifier:(unsigned int)arg1;
- (void)setPivotNodeIdentifier:(unsigned int)arg1 animated:(BOOL)arg2;
@end
