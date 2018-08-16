//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTHUDPopUpContentViewController.h>

#import <IDEDocViewer/NSTableViewDelegate-Protocol.h>

@class DVTObservingToken, DVTTableView, IDEDocSampleCodeDownloadManager, NSArrayController, NSMapTable, NSMutableSet, NSString;

@interface IDEDocDownloadsHUDPopUpViewController : DVTHUDPopUpContentViewController <NSTableViewDelegate>
{
    IDEDocSampleCodeDownloadManager *_downloadManager;
    DVTObservingToken *_downloadsObservingToken;
    NSMutableSet *_clearableDownloads;
    NSMapTable *_downloadToStageObservingToken;
    BOOL _canClearDownloads;
    NSArrayController *_downloadsController;
    DVTTableView *_downloadsTableView;
}

@property(retain) DVTTableView *downloadsTableView; // @synthesize downloadsTableView=_downloadsTableView;
@property(retain) NSArrayController *downloadsController; // @synthesize downloadsController=_downloadsController;
@property BOOL canClearDownloads; // @synthesize canClearDownloads=_canClearDownloads;
- (void).cxx_destruct;
- (void)clearDownloads:(id)arg1;
- (id)downloadManager;
- (void)setDownloadManager:(id)arg1;
- (void)_endObservingDownload:(id)arg1;
- (void)_beginObservingDownload:(id)arg1;
- (void)_updateCanClearDownloads;
- (void)_updateViewSize;
- (void)viewDidAppear;
- (BOOL)shouldShowDoneButton;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

