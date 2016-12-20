//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEIndexGeniusResultsFinder.h"

@class DVTObservingToken;

@interface XRMemoryGraphDebuggerGeniusResultsFinder : IDEIndexGeniusResultsFinder
{
    DVTObservingToken *_documentSelectedItemToken;
}

+ (Class)editorDocumentClass;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)_packagedGeniusResultsFromLocations:(id)arg1;
- (id)_geniusLocationsForClassType:(id)arg1 withSearchManager:(id)arg2;
- (id)_geniusLocationsForReferenceType:(id)arg1 withSearchManager:(id)arg2;
- (BOOL)_getUpdateGeniusResultsPhaseOneBlock:(CDUnknownBlockType *)arg1 phaseTwoBlock:(CDUnknownBlockType *)arg2 phaseThreeBlock:(CDUnknownBlockType *)arg3;
- (void)findGeniusResultsForEditorDocument:(id)arg1 selectedDocumentLocations:(id)arg2;
- (id)geniusCategoryIdentifier;

@end

