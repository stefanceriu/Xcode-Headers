//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTOutlineViewWithCustomGridDrawing.h>

@interface DVTPlistOutlineView : DVTOutlineViewWithCustomGridDrawing
{
    struct CGRect lastOutlineRect;
    BOOL adjustRowRect;
    BOOL adjustBounds;
    BOOL isEditing;
    BOOL fitToSuperview;
}

@property BOOL fitToSuperview; // @synthesize fitToSuperview;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)drawContextMenuHighlightForRow:(long long)arg1;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (struct CGSize)_adjustFrameSizeToFitSuperview:(struct CGSize)arg1;
- (void)_highlightRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (void)_drawDropHighlightBetweenUpperRow:(long long)arg1 andLowerRow:(long long)arg2 onRow:(long long)arg3 atOffset:(double)arg4;
- (void)_drawDropHighlightOutlineForRow:(long long)arg1;
- (void)_drawDropHighlightBackgroundForRow:(long long)arg1;
- (struct CGRect)rectOfRow:(long long)arg1;
- (struct CGRect)bounds;
- (id)_highlightColorForCell:(id)arg1;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSelectedOutlineRowsForRect:(struct CGRect)arg1;
- (void)invalidateFrameRectOfRect:(struct CGRect)arg1;
- (long long)lastRowForItem:(id)arg1;
- (BOOL)selectionShouldUsePrimaryColor;
- (struct CGRect)rectOfExistingRowsAndColumnsLessOne;
- (BOOL)abortEditing;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (BOOL)isEditing;
- (id)menuForEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;

@end

