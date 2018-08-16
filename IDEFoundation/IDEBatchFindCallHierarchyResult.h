//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindAbstractResult.h>

@class IDEIndexSymbol;

@interface IDEBatchFindCallHierarchyResult : IDEBatchFindAbstractResult
{
    BOOL _recursive;
    IDEIndexSymbol *_symbol;
}

@property(readonly, getter=isRecursive) BOOL recursive; // @synthesize recursive=_recursive;
@property(readonly) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (BOOL)textRepresentationForPasteboardIsFileName;
- (id)textRepresentationForPasteboard;
- (BOOL)allowsSummarization;
- (BOOL)contributesToResultCount;
- (BOOL)contributesToFileResultCount;
- (id)initWithDocumentLocation:(id)arg1 parent:(id)arg2 symbol:(id)arg3;
- (BOOL)recursivelyReferences:(id)arg1;

@end

