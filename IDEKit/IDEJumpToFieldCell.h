//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSButtonCell;
@protocol IDEJumpToFieldCellDelegate;

@interface IDEJumpToFieldCell : NSTextFieldCell
{
    NSButtonCell *_linkButtonCell;
    double _linkButtonWidth;
    id <IDEJumpToFieldCellDelegate> _delegate;
    BOOL _showLinkButton;
    BOOL _showLink;
}

@property BOOL showLink; // @synthesize showLink=_showLink;
@property BOOL showLinkButton; // @synthesize showLinkButton=_showLinkButton;
@property(retain) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)eventIsInSubCellArea:(id)arg1 ofView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_configureSubCells;
- (struct CGRect)_linkButtonFrameForCellFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_adjustedTextRectForRect:(struct CGRect)arg1;
- (double)_adjustedTextWidthForRect:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_showLinkButtonInView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;
- (double)linkButtonWidth;
- (void)linkAction:(id)arg1;
- (void)_commonInitForJumpToFieldCell;

@end

