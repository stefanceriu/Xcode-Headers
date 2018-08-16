//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObjectController.h>

@class NSString;

@interface NSObjectController (IBNSObjectControllerIntegration)
+ (id)keyPathsForValuesAffectingIbShadowedUsingManagedProxy;
+ (id)ibDynamicShadowedKeyPathsToTypes;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (void)ibAwakeInDocument:(id)arg1;
- (void)ibPullExternalPredicateFormatInDocument:(id)arg1;
@property(copy) NSString *ibExternalFetchPredicateFormat;
- (id)ibControlledObjectClassKey;
- (id)ibControlledObjectClassName;
- (BOOL)ibAcceptsBindingsValidation;
@property long long ibArchivedControllerMode;
- (void)setIbShadowedUsingManagedProxy:(BOOL)arg1;
- (BOOL)ibShadowedUsingManagedProxy;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibResolvedTypeNameForControllerKey:(id)arg1;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (id)ibLocalAttributeKeyPaths;

// Remaining properties
@property BOOL ibShadowedAutomaticallyPreparesContent; // @dynamic ibShadowedAutomaticallyPreparesContent;
@property BOOL ibShadowedEditable; // @dynamic ibShadowedEditable;
@property(copy) NSString *ibShadowedEntityName; // @dynamic ibShadowedEntityName;
@property(copy) NSString *ibShadowedObjectClassName; // @dynamic ibShadowedObjectClassName;
@property BOOL ibShadowedUsesLazyFetching; // @dynamic ibShadowedUsesLazyFetching;
@end

