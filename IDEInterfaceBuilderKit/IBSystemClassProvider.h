//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractClassProvider.h>

@class IBPlatform, NSDictionary, NSMutableDictionary, NSSet;

@interface IBSystemClassProvider : IBAbstractClassProvider
{
    IBPlatform *_platform;
    NSSet *_partialDescriptions;
    NSDictionary *_partialDescriptionsByName;
    NSMutableDictionary *_cachedFlattenedOutletSetsByClassName;
}

+ (id)systemClassProviderForPlatform:(id)arg1;
- (void).cxx_destruct;
- (id)partialClassDescriptions;
- (id)flattenedOutletsForClassNamed:(id)arg1;
- (id)initWithPlatform:(id)arg1;

@end

