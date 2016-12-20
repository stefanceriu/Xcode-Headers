//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEKeyDrivenNavigableItem.h"

@class DBGMemoryDataProcessWrapper, DBGViewDebuggerAdditionUIController, DVTObservingToken, NSArray, NSString, XRMemoryGraphDebuggerAdditionUIController;

@interface DBGProcessNavigableItem : IDEKeyDrivenNavigableItem
{
    NSArray *_cachedChildRepresentedObjects;
    NSArray *_queueContentArray;
    BOOL _hasFilterString;
    DBGMemoryDataProcessWrapper *_memoryDataGroup;
    DVTObservingToken *_viewDebuggerObservingToken;
    DVTObservingToken *_showOnlyInterestingViewObjectsObservingToken;
    DVTObservingToken *_showOnlyVisibleViewObjectsObservingToken;
    DVTObservingToken *_focusObservingToken;
    DVTObservingToken *_memoryGraphDebuggerObservingToken;
    XRMemoryGraphDebuggerAdditionUIController *_memoryDebuggingUIController;
    BOOL _usedInDebugNavigator;
    BOOL _showsCompressedStackFrames;
    BOOL _showsOnlyAncestorWithInterestingFrames;
    BOOL _showsOnlyRunningBlocks;
    BOOL _showsGauges;
    int _navigatorContentMode;
    DBGViewDebuggerAdditionUIController *_viewDebuggingUIController;
    NSString *_filterString;
}

+ (id)keyPathsForValuesAffectingLeaf;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingTopNavigableModel;
+ (id)keyPathsForValuesAffectingProcess;
+ (id)_mainQueueName;
@property(retain, nonatomic) DBGMemoryDataProcessWrapper *memoryDataGroup; // @synthesize memoryDataGroup=_memoryDataGroup;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain, nonatomic) id <IDEDebuggingAdditionUIController> memoryDebuggingUIController; // @synthesize memoryDebuggingUIController=_memoryDebuggingUIController;
@property(retain, nonatomic) DBGViewDebuggerAdditionUIController *viewDebuggingUIController; // @synthesize viewDebuggingUIController=_viewDebuggingUIController;
@property(nonatomic) BOOL showsGauges; // @synthesize showsGauges=_showsGauges;
@property(nonatomic) BOOL showsOnlyRunningBlocks; // @synthesize showsOnlyRunningBlocks=_showsOnlyRunningBlocks;
@property(nonatomic) BOOL showsOnlyAncestorWithInterestingFrames; // @synthesize showsOnlyAncestorWithInterestingFrames=_showsOnlyAncestorWithInterestingFrames;
@property(nonatomic) BOOL showsCompressedStackFrames; // @synthesize showsCompressedStackFrames=_showsCompressedStackFrames;
@property(nonatomic) int navigatorContentMode; // @synthesize navigatorContentMode=_navigatorContentMode;
@property BOOL usedInDebugNavigator; // @synthesize usedInDebugNavigator=_usedInDebugNavigator;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)invalidateChildItems;
- (void)recursivelyInvalidateChildItems;
- (id)childItemsToSearchForFindingDescendant:(id)arg1;
- (void)_addGaugeDocumentLocationsIfNecessary:(id)arg1;
- (id)childRepresentedObjects;
- (void)findInterestingThreads:(id *)arg1 filteredInterestingThreads:(id *)arg2 fromThreads:(id)arg3;
- (id)_generateQueueChildrenFromFilteredInterestingThreads:(id)arg1;
- (BOOL)isLeaf;
- (id)subtitle;
- (id)image;
- (id)name;
- (id)topNavigableModel;
- (id)process;
- (id)initWithRepresentedObject:(id)arg1;

@end

