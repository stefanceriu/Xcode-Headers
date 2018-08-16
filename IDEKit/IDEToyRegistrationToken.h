//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEToyRegistrationToken-Protocol.h>

@class IDEToy, IDEToybox, NSString;

@interface IDEToyRegistrationToken : NSObject <IDEToyRegistrationToken>
{
    IDEToybox *_toybox;
    IDEToy *_toy;
    NSString *_channelIdentifier;
    NSString *_subjectIdentifier;
    BOOL _didUnregister;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)initWithToybox:(id)arg1 toy:(id)arg2 channelIdentifier:(id)arg3 subjectIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

