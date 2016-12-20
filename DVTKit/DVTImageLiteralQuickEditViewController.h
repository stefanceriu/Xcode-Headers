//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTPopoverContentViewController.h>

#import "DVTObjectLiteralQuickEditor.h"
#import "NSCollectionViewDataSource.h"
#import "NSCollectionViewDelegate.h"

@class DVTFilePath, NSArray, NSCollectionView, NSPopover, NSString, NSView;

@interface DVTImageLiteralQuickEditViewController : DVTPopoverContentViewController <NSCollectionViewDelegate, NSCollectionViewDataSource, DVTObjectLiteralQuickEditor>
{
    NSPopover *presentingPopover;
    id <DVTImageLiteralQuickEditViewControllerDelegate> _delegate;
    DVTFilePath *_selectedImageFilePath;
    NSArray *_imageFilePaths;
    NSCollectionView *_collectionView;
    NSView *_footerView;
}

+ (struct CGSize)defaultContentSize;
@property(retain) NSView *footerView; // @synthesize footerView=_footerView;
@property(retain) NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *imageFilePaths; // @synthesize imageFilePaths=_imageFilePaths;
@property(retain, nonatomic) DVTFilePath *selectedImageFilePath; // @synthesize selectedImageFilePath=_selectedImageFilePath;
@property(nonatomic) id <DVTImageLiteralQuickEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSPopover *presentingPopover; // @synthesize presentingPopover;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (void)moreButtonClicked:(id)arg1;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithSelectedImageFilePath:(id)arg1 inImageFilePaths:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

