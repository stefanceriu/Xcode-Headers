//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEPlaygroundQuickLookProvider-Protocol.h>

@class NSAttributedString, NSString, NSView;

@interface IDEPlaygroundQuickLookForGap : NSObject <IDEPlaygroundQuickLookProvider>
{
    NSAttributedString *_gapAttributedString;
    NSView *_quickLookForNaturalSize;
}

- (void).cxx_destruct;
- (id)quickLookViewForResultsView;
- (id)quickLookViewForNaturalSize;
@property(readonly, copy) NSAttributedString *attributedTitle;
@property(readonly) NSView *iconView;
- (id)initWithGap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

