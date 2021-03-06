//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IBFoundation/IBICSlot.h>

@class IBICColorSpace, IBICGraphicsFeatureSet, IBICIdiom, IBICMemoryClass;

@interface IBICDataSetRepSlot : IBICSlot
{
    IBICIdiom *_idiom;
    IBICMemoryClass *_memory;
    IBICGraphicsFeatureSet *_graphicsFeatureSet;
    IBICColorSpace *_colorSpace;
}

+ (id)orderedComponentClasses;
+ (id)slotWithIdiom:(id)arg1 memory:(id)arg2 graphicsFeatureSet:(id)arg3;
+ (id)slotWithIdiom:(id)arg1;
+ (id)genesisSlotsForSlots:(id)arg1;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
+ (id)slotFilterWithIdiomFilter:(id)arg1 memoryFilter:(id)arg2 graphicsFeatureSetFilter:(id)arg3 colorSpaceFilter:(id)arg4;
+ (id)slotFilterWithNilMatching:(long long)arg1 idioms:(id)arg2 memoryClasses:(id)arg3 graphicsFeatureSets:(id)arg4 colorSpaces:(id)arg5;
+ (id)slotFilterUnionedWithStandardUniversalCounterpart:(BOOL)arg1 idioms:(id)arg2 memoryClasses:(id)arg3 graphicsFeatureSets:(id)arg4 colorSpaces:(id)arg5;
@property(readonly) IBICColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly) IBICGraphicsFeatureSet *graphicsFeatureSet; // @synthesize graphicsFeatureSet=_graphicsFeatureSet;
@property(readonly) IBICMemoryClass *memory; // @synthesize memory=_memory;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (void)captureComponents;

@end

