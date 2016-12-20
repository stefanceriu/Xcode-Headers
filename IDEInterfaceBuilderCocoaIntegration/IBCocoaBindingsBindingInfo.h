//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSMutableArray, NSString;

@interface IBCocoaBindingsBindingInfo : NSObject <NSCopying>
{
    NSDictionary *_dictionary;
    NSString *_category;
    NSMutableArray *_options;
}

- (void).cxx_destruct;
- (BOOL)isKeyOptional;
- (BOOL)isKeyless;
- (BOOL)isBound;
- (BOOL)isEnabled;
- (id)runtimeOptions;
- (id)attributeDescriptionForOption:(id)arg1;
- (id)mutableOptions;
- (id)suggestedControllerKey;
- (id)suggestedController;
- (id)acceptableValueTransformerNames;
- (id)valueTransformerName;
- (id)key;
- (id)acceptableControllers;
- (id)controller;
- (id)binding;
- (id)category;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 category:(id)arg2;

@end

