//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewTextAttachmentCell.h>

@class NSView;

@interface DVTMarkupViewTextAttachmentCell : NSViewTextAttachmentCell
{
    NSView *_markupView;
}

@property(retain) NSView *markupView; // @synthesize markupView=_markupView;
- (void).cxx_destruct;
- (id)viewWithFrame:(struct CGRect)arg1 forView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (struct CGSize)cellSize;

@end

