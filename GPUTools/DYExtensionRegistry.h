//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DYExtensionRegistry : NSObject
{
    NSMutableDictionary *_slotsMap;
    NSMutableDictionary *_identifiersMap;
}

+ (id)sharedExtensionRegistry;
- (id)extensionsForSlot:(id)arg1;
- (void)registerExtension:(id)arg1;
- (void)dealloc;
- (id)init;

@end

