//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogChangeEvent.h>

@class NSString, NSValue;

@interface IDEActivityLogSetKeyValueChangeEvent : IDEActivityLogChangeEvent
{
    NSString *_key;
    NSValue *_value;
}

@property(readonly) NSValue *value; // @synthesize value=_value;
@property(readonly) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (void)writeToLogEventStream:(id)arg1;
- (id)initWithSection:(id)arg1 key:(id)arg2 value:(id)arg3;

@end

