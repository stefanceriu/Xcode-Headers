//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class DVTLibraryAsset, NSArray, NSAttributedString, NSImage, NSString;

@interface DVTLibraryAssetView : NSView
{
    struct {
        unsigned int drawsWithSelectionHighlight:1;
        unsigned int drawsWithAdjacentSelectionHighlight:1;
        unsigned int showsFirstResponder:1;
        unsigned int showingGridLines:1;
        unsigned int drawsWithClickFrame:1;
        unsigned int _reserved:3;
    } _flags;
    NSAttributedString *_text;
    NSArray *_observedAssetTokens;
    long long _style;
    NSString *_summary;
    NSString *_title;
    NSImage *_image;
    NSString *_badgeString;
    id <DVTLibraryAssetViewDelegate> _delegate;
    DVTLibraryAsset *_observedAsset;
}

+ (struct CGSize)maximumSizeForStyle:(long long)arg1;
+ (struct CGSize)minimumSizeForStyle:(long long)arg1;
+ (struct CGSize)maximumIconSize;
@property(retain, nonatomic) DVTLibraryAsset *observedAsset; // @synthesize observedAsset=_observedAsset;
@property(nonatomic) __weak id <DVTLibraryAssetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *badgeString; // @synthesize badgeString=_badgeString;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPick;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (id)accessibilityHelp;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveGridColor;
- (void)viewWillDraw;
- (BOOL)isOpaque;
- (id)effectiveSelectionFillColor;
- (id)effectiveSelectionStrokeColor;
- (id)gridColor;
- (id)clickedBorderColor;
- (id)normalBorderColor;
- (id)secondarySelectedBorderColor;
- (id)primarySelectedBorderColor;
- (id)normalBackgroundColor;
- (id)secondarySelectedBackgroundColor;
- (id)primarySelectedBackgroundColor;
- (id)text;
- (id)badgeStringAttributes;
- (BOOL)shouldBandSelectWithMouseDownEvent:(id)arg1;
- (struct CGRect)textAreaBounds;
- (struct CGRect)badgeStringBounds;
- (struct CGRect)badgeAreaBounds;
- (struct CGRect)imageRect;
- (struct CGRect)imageAreaBounds;
- (struct CGRect)contentAreaBounds;
- (struct CGRect)selectionAreaBounds;
- (BOOL)isFlipped;
@property(nonatomic, getter=isShowingGridLines) BOOL showingGridLines;
- (BOOL)shouldDrawWithClickFrame;
@property(nonatomic) BOOL drawsWithClickFrame;
@property(nonatomic) BOOL drawsWithAdjacentSelectionHighlight;
@property(nonatomic) BOOL drawsWithSelectionHighlight;
@property(nonatomic) BOOL showsFirstResponder;
- (void)setNilValueForKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

