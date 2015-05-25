//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDELanguageSupportUI/IDEToy.h>

@class NSTextStorage;

@interface IDEConsoleToy : IDEToy
{
    id <IDEToyRegistrationToken> _registrationToken;
    unsigned long long _currentGeneration;
    NSTextStorage *_textStorage;
}

@property(readonly) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void).cxx_destruct;
- (void)processPlaygroundResult:(id)arg1;
- (void)beginExecutionGeneration:(unsigned long long)arg1;
- (void)setToybox:(id)arg1;
- (BOOL)shouldDisplayInTimeline;
- (id)init;

@end
