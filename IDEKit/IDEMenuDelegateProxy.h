//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class DVTExtension, NSString;
@protocol NSMenuDelegate;

@interface IDEMenuDelegateProxy : NSObject <NSMenuDelegate>
{
    id <NSMenuDelegate> _delegate;
    DVTExtension *_delegateExtension;
}

@property(retain) DVTExtension *delegateExtension; // @synthesize delegateExtension=_delegateExtension;
- (void).cxx_destruct;
- (struct CGRect)confinementRectForMenu:(id)arg1 onScreen:(id)arg2;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (long long)numberOfItemsInMenu:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

