//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class NSAttributedString;

@interface IDEPlaygroundQuickLookSingleLineTextView : NSTextView
{
    NSAttributedString *_attributedString;
}

- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (void)updateTextStorageForAttributedString:(id)arg1;
- (void)setAttributedString:(id)arg1;

@end

