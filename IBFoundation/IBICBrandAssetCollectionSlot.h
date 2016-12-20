//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlot.h>

@class IBICIdiom, IBICRole, IBICSize;

@interface IBICBrandAssetCollectionSlot : IBICSlot
{
    IBICIdiom *_idiom;
    IBICRole *_role;
    IBICSize *_size;
}

+ (Class)assetRepClass;
+ (Class)assetSetClass;
+ (id)slotWithIdiom:(id)arg1 role:(id)arg2 size:(id)arg3;
+ (id)orderedComponentClasses;
@property(readonly) IBICSize *size; // @synthesize size=_size;
@property(readonly) IBICRole *role; // @synthesize role=_role;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (void)captureComponents;

@end

