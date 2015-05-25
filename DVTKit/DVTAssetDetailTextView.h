//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

#import "DVTFirstResponderShowingView.h"

@class DVTFirstResponderDrawingStrategy, NSString;

@interface DVTAssetDetailTextView : NSTextView <DVTFirstResponderShowingView>
{
    DVTFirstResponderDrawingStrategy *_firstResponderDrawingStrategy;
    BOOL _showsFirstResponder;
}

@property BOOL showsFirstResponder; // @synthesize showsFirstResponder=_showsFirstResponder;
- (void).cxx_destruct;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
