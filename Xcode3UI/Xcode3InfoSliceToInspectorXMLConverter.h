//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface Xcode3InfoSliceToInspectorXMLConverter : NSObject
{
    NSMutableDictionary *_cachedConversions;
}

+ (id)sharedConverter;
- (void).cxx_destruct;
- (id)inspectorXMLForSection:(id)arg1 column:(int)arg2;
- (id)_generateColumnnatedInspectorXMLForEntries:(id)arg1;
- (id)_generateInspectorXMLForEntries:(id)arg1;
- (id)init;

@end

