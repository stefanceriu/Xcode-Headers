//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/SPInfoTableView.h>

@class NSImageView, NSLayoutConstraint;

@interface SPInfoFloatingHeaderTableView : SPInfoTableView
{
    NSImageView *_imageView;
    NSLayoutConstraint *_imageViewWidthConstraint;
}

@property(retain) NSLayoutConstraint *imageViewWidthConstraint; // @synthesize imageViewWidthConstraint=_imageViewWidthConstraint;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)titleForGroupEndingAtRow:(long long)arg1;
- (void)setTitleOfLeadingTableColumnIfNeeded;
- (long long)nextGroupRowInRange:(struct _NSRange)arg1;
- (void)cacheDisplayOfTrailingColumns;
- (id)_userSelectableRowIndexesForProposedSelection:(id)arg1;
- (double)_uncachedRectHeightOfRow:(long long)arg1;
- (BOOL)_supportsVariableHeightRows;
- (void)columnsDidChange:(id)arg1;
- (void)boundsDidChange:(id)arg1;
- (struct CGRect)contentViewVisibleRect;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewWillDraw;
- (void)dealloc;
- (void)_init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

