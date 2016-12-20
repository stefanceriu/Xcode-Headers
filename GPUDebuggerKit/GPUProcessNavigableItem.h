//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerKit/GPUTraceGroupNavigableItem.h>

@class NSArray;

@interface GPUProcessNavigableItem : GPUTraceGroupNavigableItem
{
    NSArray *_cachedChildRepresentedObjects;
    BOOL _filteringEnabled;
    BOOL _showsGauges;
    int _callOrProgramMode;
    int _programSortMode;
}

+ (id)keyPathsForValuesAffectinImage;
+ (id)keyPathsForValuesAffectingName;
@property(nonatomic) BOOL showsGauges; // @synthesize showsGauges=_showsGauges;
@property(nonatomic) BOOL filteringEnabled; // @synthesize filteringEnabled=_filteringEnabled;
@property(nonatomic) int programSortMode; // @synthesize programSortMode=_programSortMode;
@property(nonatomic) int callOrProgramMode; // @synthesize callOrProgramMode=_callOrProgramMode;
- (void).cxx_destruct;
- (void)invalidateChildItems;
- (void)addGaugeItemsToChildObjects:(id)arg1;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (id)image;
- (id)subtitle;
- (id)name;
- (id)initWithRepresentedObject:(id)arg1;

@end

