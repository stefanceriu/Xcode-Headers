//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IBCocoaBindingsCompletionItem : NSObject
{
    NSString *displayText;
    NSString *displayType;
    BOOL shouldAppearInSuggestions;
}

@property BOOL shouldAppearInSuggestions; // @synthesize shouldAppearInSuggestions;
@property(copy) NSString *displayType; // @synthesize displayType;
@property(copy) NSString *displayText; // @synthesize displayText;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 type:(id)arg2;
- (id)initWithName:(id)arg1 type:(id)arg2 shouldAppearInSuggestions:(BOOL)arg3;

@end

