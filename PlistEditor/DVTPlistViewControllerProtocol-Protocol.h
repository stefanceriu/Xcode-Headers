//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlistEditor/NSObject-Protocol.h>

@class DVTPlistNode, DVTPlistSelection, NSArray;

@protocol DVTPlistViewControllerProtocol <NSObject>
- (void)revealNode:(DVTPlistNode *)arg1;
- (void)propertyListChanged:(DVTPlistNode *)arg1;

@optional
- (void)selectDocumentLocations:(NSArray *)arg1;
- (void)setSelection:(DVTPlistSelection *)arg1 edit:(BOOL)arg2;
- (DVTPlistSelection *)currentSelection;
- (BOOL)commitEdits;
- (BOOL)editInProgress;
@end

