//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class NSView;

@interface IDELibraryAreaView : DVTLayoutView_ML
{
    NSView *_headerView;
    NSView *_contentView;
}

+ (double)chromeHeight;
+ (double)rowHeight;
+ (double)heightForNumberOfRows:(double)arg1;
- (void).cxx_destruct;
- (struct CGSize)dvt_minimumSize;
- (void)layoutBottomUp;
- (void)didLayoutSubview:(id)arg1;
- (void)layoutTopDown;
- (id)subviewsOrderedForLayout;
- (BOOL)isFlipped;
- (void)awakeFromNib;

@end

