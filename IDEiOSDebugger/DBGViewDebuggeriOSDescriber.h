//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/DBGAbstractViewDescriber.h>

@interface DBGViewDebuggeriOSDescriber : DBGAbstractViewDescriber
{
}

+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
+ (void)initialize;
- (void)primitiveInvalidate;
- (id)initialRequestPropertyActions;
- (id)targetKitFamilyIdentifier;
- (id)_fontFromSummary:(id)arg1;
- (void)_asyncAskForInspectableImageFromDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_asyncAskForInspectableColorFromDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)inspectableValueForDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)effectViewClassNames;
- (id)_forceImageRenderingForEffectViewClassesOptionValue;
- (id)_alwaysEncodeLayersOptionValue;
- (id)_turnOnLayersAsSnapshotsOptionValue;
- (void)fetchViewInfo:(CDUnknownBlockType)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (BOOL)isViewObjectInteresting:(id)arg1;
- (unsigned long long)shouldChild:(id)arg1 flattenIntoParent:(id)arg2;
- (id)classNameForDefaultViewIcon;

@end

