//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexSet;

@interface IDESourceEditorExtensionTextChange : NSObject
{
    long long _kind;
    NSIndexSet *_indexes;
    NSArray *_lines;
}

@property(readonly, copy) NSArray *lines; // @synthesize lines=_lines;
@property(readonly, copy) NSIndexSet *indexes; // @synthesize indexes=_indexes;
@property(readonly) long long kind; // @synthesize kind=_kind;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithKind:(long long)arg1 indexes:(id)arg2 lines:(id)arg3;

@end

