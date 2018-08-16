//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSCodeCoverageObject.h>

@class NSString;

@interface XCSCodeCoverageMethod : XCSCodeCoverageObject
{
    unsigned long long _symbolValue;
}

+ (id)_enumRepresentationToSourceCodeSymbolKindIdentifier:(id)arg1;
+ (id)_sourceCodeSymbolKindIdentifierToEnumRepresentation:(id)arg1;
+ (id)_sourceCodeSymbolKindPrefix;
+ (void)initialize;
@property(nonatomic) unsigned long long symbolValue; // @synthesize symbolValue=_symbolValue;
- (void)_bindHierarchyWithIntegration:(id)arg1 parentObject:(id)arg2;
- (BOOL)_validateWithSourceCodeSymbolKindIdentifier:(id)arg1 validationErrors:(id *)arg2;
- (id)ccifRepresentation;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)ccimRepresentation;
- (id)dictionaryRepresentation;
- (unsigned long long)count;
- (id)keyPath;
@property(readonly, copy, nonatomic) NSString *sourceCodeSymbolKindIdentifier;
- (id)_initWithSourceCodeSymbolKindIdentifier:(id)arg1 skipValidation:(BOOL)arg2 skipBindHierarchy:(BOOL)arg3 validationErrors:(id *)arg4;
- (id)initWithContents:(id)arg1 service:(id)arg2 skipValidation:(BOOL)arg3 skipBindHierarchy:(BOOL)arg4 validationErrors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithTitle:(id)arg1 sourceCodeSymbolKindIdentifier:(id)arg2;
- (id)init;

@end

