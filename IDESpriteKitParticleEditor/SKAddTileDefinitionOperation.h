//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class NSArray;

@interface SKAddTileDefinitionOperation : SKDocumentOperation
{
    id _tileSet;
    id _rule;
    NSArray *_definitions;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (id)initWithDocument:(id)arg1 addingDefinitions:(id)arg2 toRule:(id)arg3 forTileSet:(id)arg4;

@end

