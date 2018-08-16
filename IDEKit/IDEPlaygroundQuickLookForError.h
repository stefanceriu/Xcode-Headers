//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEKit/IDEPlaygroundQuickLookProvider-Protocol.h>

@class IDEPlaygroundLoggerErrorEntry, NSAttributedString, NSImageView, NSLayoutConstraint, NSString, NSTextView, NSView;

@interface IDEPlaygroundQuickLookForError : NSViewController <IDEPlaygroundQuickLookProvider>
{
    IDEPlaygroundLoggerErrorEntry *_errorEntry;
    NSImageView *_errorIconImageView;
    NSAttributedString *_errorAttributedString;
    NSView *_quickLookForNaturalSize;
    BOOL _haveSetupQuickLookForResultsView;
    NSTextView *_textView;
    NSLayoutConstraint *_heightConstraint;
    NSView *_resultsViewStyleQuickLook;
    NSTextView *_resultsViewStyleTextView;
    NSLayoutConstraint *_resultsViewStyleTextViewHeightConstraint;
}

@property __weak NSLayoutConstraint *resultsViewStyleTextViewHeightConstraint; // @synthesize resultsViewStyleTextViewHeightConstraint=_resultsViewStyleTextViewHeightConstraint;
@property NSTextView *resultsViewStyleTextView; // @synthesize resultsViewStyleTextView=_resultsViewStyleTextView;
@property __weak NSView *resultsViewStyleQuickLook; // @synthesize resultsViewStyleQuickLook=_resultsViewStyleQuickLook;
@property __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property NSTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)_constrainHeightOfTextView:(id)arg1 minHeight:(double)arg2 maxHeight:(double)arg3 heightConstraint:(id)arg4;
- (void)_installTextInTextView:(id)arg1;
- (id)quickLookViewForResultsView;
- (id)quickLookViewForNaturalSize;
@property(readonly, copy) NSAttributedString *attributedTitle;
@property(readonly) NSView *iconView;
- (id)initWithErrorEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

