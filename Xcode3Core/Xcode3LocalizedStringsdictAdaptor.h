//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizedStringsdictAdaptor.h>

@class NSDictionary, NSMutableDictionary, Xcode3Target;

@interface Xcode3LocalizedStringsdictAdaptor : IDELocalizedStringsdictAdaptor
{
    Xcode3Target *_target;
    NSDictionary *_baseStrings;
    NSMutableDictionary *_stringsCache;
}

+ (id)adaptedResourcesForPopulationContext:(id)arg1;
- (void).cxx_destruct;
- (id)localizedGroupIdentifier;
- (id)stringsForLanguage:(id)arg1;
- (void)setStrings:(id)arg1 forLanguage:(id)arg2;
- (id)target;
- (id)expectedSuperitem;
- (id)expectedDirectoryPath;
- (id)expectedFileName;
- (id)comments;
- (void)primitiveInvalidate;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 stringsdictFileReference:(id)arg3 target:(id)arg4;

@end
