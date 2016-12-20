//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICImageSlot.h>

@class IBICMipmapLevel;

@interface IBICMipmapSetRepSlot : IBICImageSlot
{
    IBICMipmapLevel *_mipmapLevel;
}

+ (id)slotWithLevel:(long long)arg1;
+ (id)baseSlot;
+ (id)slotWithMipmapLevel:(id)arg1;
+ (id)orderedComponentClasses;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
+ (id)slotFilterWithLevelFilter:(id)arg1;
@property(readonly) IBICMipmapLevel *mipmapLevel; // @synthesize mipmapLevel=_mipmapLevel;
- (void).cxx_destruct;
- (id)detailAreaPath;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (void)captureComponents;

@end

