//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetRepIdentifier.h>

@interface IBICModelSetRepIdentifier : IBICSlottedAssetRepIdentifier
{
}

+ (id)inferredRepIdentifiersGroupedByItemNameForPaths:(id)arg1;
+ (id)inferredRepIdentifierForPath:(id)arg1 slotComponentTransformer:(CDUnknownBlockType)arg2;
+ (BOOL)isValidFilenameForImport:(id)arg1;
+ (Class)slotClass;
+ (id)identifierWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
- (id)slot;
- (id)initWithSlot:(id)arg1 fileName:(id)arg2 conflictState:(unsigned long long)arg3;

@end

