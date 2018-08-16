//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTMutableOrderedDictionary, NSMutableOrderedSet, NSString;

@interface DVTLibraryGroup : NSObject
{
    NSString *_name;
    DVTLibraryGroup *_parentGroup;
    DVTMutableOrderedDictionary *_childGroups;
    NSMutableOrderedSet *_assets;
}

- (void).cxx_destruct;
- (id)description;
- (void)populateAssetsInDisplayOrder:(id)arg1 comparator:(CDUnknownBlockType)arg2;
- (void)removeAsset:(id)arg1;
- (void)addAsset:(id)arg1;
- (id)groupWithPathCreatingIfNeeded:(id)arg1;
- (id)childGroupWithNameCreatingIfNeeded:(id)arg1;
- (id)rootGroup;
- (id)initWithName:(id)arg1;

@end

