//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetCollection.h>

@interface IBICSlottedAssetCollection (DisplayAdditions)
- (void)mutateBySettingConflictState:(unsigned long long)arg1 forChild:(id)arg2 inDocument:(id)arg3;
- (void)mutateBySettingSlot:(id)arg1 forChild:(id)arg2 inDocument:(id)arg3;
- (BOOL)shouldAvoidDeletingChild:(id)arg1;
- (void)populatePasteboardContext:(id)arg1 forChild:(id)arg2;
- (CDUnknownBlockType)contentReferencePreservingCallbackGivenEndPointGenerator:(CDUnknownBlockType)arg1;
- (void)populatePlistWithDescriptionForIctool:(id)arg1 forChild:(id)arg2;
- (BOOL)displaysChildrenInOutlineView;
- (id)icon;
@end

