//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEProductsUI/DVTTableCellViewTitleEditingDelegate-Protocol.h>
#import <IDEProductsUI/IDEFilterControlBarTarget-Protocol.h>
#import <IDEProductsUI/IDEInitialization-Protocol.h>
#import <IDEProductsUI/IDEProductsInspectableVending-Protocol.h>
#import <IDEProductsUI/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTTableView, IDESearchFilterControlBar, NSAlert, NSArray, NSArrayController, NSImage, NSString, NSTableHeaderView, NSTextField, NSView;
@protocol IDEProductsInspectable;

@interface IDEArchivesViewController : IDEViewController <IDEFilterControlBarTarget, NSTableViewDelegate, DVTTableCellViewTitleEditingDelegate, IDEInitialization, IDEProductsInspectableVending>
{
    IDESearchFilterControlBar *_controlBar;
    NSString *_searchString;
    DVTBorderedView *_bottomBorderView;
    NSArrayController *_archivesArrayController;
    NSTableHeaderView *_tableHeaderView;
    DVTTableView *_archivesTableView;
    NSTextField *_statusBarTextField;
    NSImage *_archiveImage;
    DVTObservingToken *_selectedArchivesObservingToken;
    DVTObservingToken *_archivesObservingToken;
    NSAlert *_deleteArchiveAlert;
    id <IDEProductsInspectable> _currentInspectable;
}

+ (id)keyPathsForValuesAffectingArchivesFilterPredicate;
+ (id)keyPathsForValuesAffectingSearchStrings;
+ (id)keyPathsForValuesAffectingArchives;
+ (void)revealArchive:(id)arg1;
+ (void)revealArchiveNotification:(id)arg1;
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
@property(retain) id <IDEProductsInspectable> currentInspectable; // @synthesize currentInspectable=_currentInspectable;
@property(retain, nonatomic) NSAlert *deleteArchiveAlert; // @synthesize deleteArchiveAlert=_deleteArchiveAlert;
@property(retain) DVTObservingToken *archivesObservingToken; // @synthesize archivesObservingToken=_archivesObservingToken;
@property(retain) DVTObservingToken *selectedArchivesObservingToken; // @synthesize selectedArchivesObservingToken=_selectedArchivesObservingToken;
@property(readonly) NSImage *archiveImage; // @synthesize archiveImage=_archiveImage;
@property __weak NSTextField *statusBarTextField; // @synthesize statusBarTextField=_statusBarTextField;
@property __weak DVTTableView *archivesTableView; // @synthesize archivesTableView=_archivesTableView;
@property __weak NSTableHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain) NSArrayController *archivesArrayController; // @synthesize archivesArrayController=_archivesArrayController;
@property __weak DVTBorderedView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property __weak IDESearchFilterControlBar *controlBar; // @synthesize controlBar=_controlBar;
- (void).cxx_destruct;
- (struct _NSRange)initialSelectionRangeForTableCellView:(id)arg1 usingProposedRange:(struct _NSRange)arg2;
- (void)titleDidChangeForTableCellView:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterButtonMenu;
- (id)filterDefinitionIdentifier;
- (void)primitiveInvalidate;
@property(readonly) BOOL shouldShowNoSelection;
- (void)handleAction:(id)arg1 fromInspectable:(id)arg2;
- (void)downloadDSYMForArchive:(id)arg1;
- (void)productsContextMenu_showArchiveInFinder:(id)arg1;
- (void)productsContextMenu_deleteArchive:(id)arg1;
- (void)deleteArchive:(id)arg1;
- (void)deleteArchives:(id)arg1;
- (void)updateStatusBar;
- (id)archivesFilterPredicate;
@property(readonly) NSArray *searchStrings;
@property(retain, nonatomic) NSArray *archives;
- (void)viewDidLoad;
- (void)loadView;
- (void)revealArchive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL vendorIsBusy;
@property(readonly, nonatomic) NSView *view;

@end

