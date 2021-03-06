//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTPopoverContentViewController.h>

#import <DVTKit/DVTColorLiteralQuickEditCollectionViewDelegate-Protocol.h>
#import <DVTKit/DVTObjectLiteralQuickEditor-Protocol.h>
#import <DVTKit/NSCollectionViewDataSource-Protocol.h>
#import <DVTKit/NSCollectionViewDelegate-Protocol.h>
#import <DVTKit/NSCollectionViewDelegateFlowLayout-Protocol.h>

@class DVTColorLiteralQuickEditCollectionView, NSArray, NSColor, NSPopover, NSString, NSView;
@protocol DVTColorLiteralQuickEditViewControllerDelegate;

@interface DVTColorLiteralQuickEditViewController : DVTPopoverContentViewController <NSCollectionViewDelegate, NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout, DVTColorLiteralQuickEditCollectionViewDelegate, DVTObjectLiteralQuickEditor>
{
    NSPopover *presentingPopover;
    id <DVTColorLiteralQuickEditViewControllerDelegate> _delegate;
    NSColor *_selectedColor;
    NSArray *_recentlyUsedColors;
    NSArray *_colorPalette;
    DVTColorLiteralQuickEditCollectionView *_collectionView;
    NSView *_footerView;
}

+ (struct CGSize)defaultContentSize;
@property(retain) NSView *footerView; // @synthesize footerView=_footerView;
@property(retain) DVTColorLiteralQuickEditCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) NSArray *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(readonly, nonatomic) NSArray *recentlyUsedColors; // @synthesize recentlyUsedColors=_recentlyUsedColors;
@property(copy, nonatomic) NSColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) id <DVTColorLiteralQuickEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSPopover *presentingPopover; // @synthesize presentingPopover;
- (void).cxx_destruct;
- (void)colorCollectionView:(id)arg1 didSelectionMoreColorOptionsOnIndexPath:(id)arg2;
- (void)colorCollectionView:(id)arg1 didKeyboardSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (void)presentMoreColorOptions;
- (BOOL)shouldDisplayRecentSection;
- (id)highlightedColor;
- (void)moreButtonClicked:(id)arg1;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithSelectedColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

