//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSKeyedUnarchiver.h>

#import <IDESceneKitEditor/NSKeyedUnarchiverDelegate-Protocol.h>

@class NSString;
@protocol NSKeyedUnarchiverDelegate;

@interface SKESceneCustomClassKeyedUnarchiver : NSKeyedUnarchiver <NSKeyedUnarchiverDelegate>
{
    id <NSKeyedUnarchiverDelegate> _clientDelegate;
}

- (void).cxx_destruct;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (id)initForReadingWithData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

