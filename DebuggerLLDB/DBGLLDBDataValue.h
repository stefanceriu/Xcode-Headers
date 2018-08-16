//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/DBGDataValue.h>

@class DBGLLDBDataType, NSArray, NSMutableArray, NSMutableIndexSet, NSString;
@protocol DBGSBValue;

@interface DBGLLDBDataValue : DBGDataValue
{
    BOOL _isDictionarySynthesizedParent;
    DBGLLDBDataType *_dbgStaticType;
    id <DBGSBValue> _lldbValueObject;
    int _lldbFormat;
    NSMutableArray *_childValues;
    NSMutableIndexSet *_fetchedIndexesForPlaceHolders;
    NSString *_expr_path_str;
    NSArray *_classNameHierarchy;
    BOOL _requested_children;
    BOOL _requestedSummary;
    BOOL _summaryHasBeenFetched_mainThreadOnly;
    BOOL _requestedFullSummary;
    BOOL _fullSummaryHasBeenFetched_mainThreadOnly;
    BOOL _representsNilObjectiveCObject;
    BOOL _representsNullObjectPointer;
    BOOL _representsNullClassTypedef;
    BOOL _mightRespondToSelectors;
    BOOL _value_has_changed;
    BOOL _childValuesCountValid;
    BOOL _hasChildValues;
    BOOL _in_scope;
    NSString *_name;
    NSString *_value_str;
    NSString *_address;
    NSString *_pointeeAddress;
    NSString *_summary_str;
    NSString *_fullSummary;
    DBGDataValue *_parent;
}

+ (id)_dataValueWithDisplayName:(id)arg1 tag:(unsigned long long)arg2;
+ (id)supportedDataValueFormats;
+ (int)dynamicValueType;
+ (id)_persistenceKeyForValueWithName:(id)arg1 inStackFrame:(id)arg2;
+ (int)_persistedLLDBFormatForValueName:(id)arg1 inStackFrame:(id)arg2;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
- (id)staticType;
- (BOOL)inScope;
- (id)parent;
@property(copy, nonatomic) NSString *fullSummary; // @synthesize fullSummary=_fullSummary;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary_str;
- (BOOL)hasChildValues;
@property BOOL childValuesCountValid; // @synthesize childValuesCountValid=_childValuesCountValid;
- (BOOL)valueHasChanged;
- (void)setPointeeAddress:(id)arg1;
- (id)pointeeAddress;
- (void)setAddress:(id)arg1;
- (id)address;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)isMemoryFault;
- (id)_dataValueFormatForLLDBFormat:(int)arg1;
- (void)_persistLLDBFormat:(id)arg1;
- (id)_classNameHierarchyStartingWithType:(id)arg1;
- (void)classNameHierarchy:(CDUnknownBlockType)arg1;
- (void)ensureAllDisplayablePropertiesAreLoaded:(CDUnknownBlockType)arg1;
- (BOOL)mightRespondToSelectors;
- (BOOL)_calculateRepresentsNullClassTypedef:(long long)arg1;
- (BOOL)representsNullClassTypedef;
- (BOOL)_calculateRepresentsNullObjectPointer:(long long)arg1;
- (BOOL)representsNullObjectPointer;
- (BOOL)_calculateRepresentsNilObjectiveCObject:(long long)arg1;
- (BOOL)representsNilObjectiveCObject;
- (void)_calculateZeroPointers;
- (void)watch;
- (BOOL)wantsToProvideSummary;
- (id)_createNSStringForCString:(const char *)arg1;
- (id)description;
- (id)_lldbValueObjectDescription;
- (id)_lldbValueDescription;
- (id)lldbDescription;
- (void)setFormat:(id)arg1;
- (id)format;
- (const char *)valueAsCString;
- (void)_rawDataWithHandler:(CDUnknownBlockType)arg1;
- (id)primitiveChildValues;
- (void)_faultNextSetOfChildValuesStartingAtIndex:(unsigned long long)arg1;
- (void)_setChildValuesToArrayOfPlaceholders;
- (void)_setChildValuesToArrayOfActualChildren;
- (void)_fetchChildValuesFromLLDBOnSessionThreadIfNecessary;
- (void)childWithName:(id)arg1 foundChild:(CDUnknownBlockType)arg2;
- (void)_setChildValuesWithKVO:(id)arg1;
- (id)childValues;
- (void)loadedFullSummary:(CDUnknownBlockType)arg1;
- (void)loadedSummary:(CDUnknownBlockType)arg1;
- (void)_fetchFullSummaryFromLLDBOnSessionThreadIfNecessary;
- (id)_calculateSummaryForDictionaryElement;
- (id)_calculateSummary;
- (void)_fetchSummaryFromLLDBOnSessionThreadIfNecessary;
- (id)value;
- (BOOL)dynamicTypeHasChanged;
- (BOOL)summaryHasChanged;
- (void)setValue:(id)arg1;
- (id)expressionPath;
- (void)_addSessionThreadAction:(CDUnknownBlockType)arg1;
- (id)_lldbSession;
- (BOOL)_isSessionThread;
- (void)_assertOnSessionThread;
- (id)lldbStackFrame;
- (id)initWithLLDBValueObject:(id)arg1 forStackFrame:(id)arg2 withParent:(id)arg3 updateSummary:(BOOL)arg4;
- (id)initWithLLDBValueObject:(id)arg1 forStackFrame:(id)arg2 withParent:(id)arg3;

@end

