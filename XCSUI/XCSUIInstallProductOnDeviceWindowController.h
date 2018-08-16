//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <XCSUI/NSTableViewDelegate-Protocol.h>

@class DVTFilePath, DVTObservingToken, NSArray, NSButton, NSIndexSet, NSProgressIndicator, NSString, NSTableView;

@interface XCSUIInstallProductOnDeviceWindowController : NSWindowController <NSTableViewDelegate>
{
    DVTFilePath *_productPath;
    NSTableView *_tableView;
    NSButton *_installButton;
    NSButton *_cancelButton;
    NSProgressIndicator *_progressIndicator;
    NSArray *_devices;
    NSIndexSet *_tableViewSelectionIndexes;
    DVTObservingToken *_selectionWatcher;
}

@property(retain) DVTObservingToken *selectionWatcher; // @synthesize selectionWatcher=_selectionWatcher;
@property(copy, nonatomic) NSIndexSet *tableViewSelectionIndexes; // @synthesize tableViewSelectionIndexes=_tableViewSelectionIndexes;
@property(copy) NSArray *devices; // @synthesize devices=_devices;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *installButton; // @synthesize installButton=_installButton;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(copy) DVTFilePath *productPath; // @synthesize productPath=_productPath;
- (void).cxx_destruct;
- (void)install:(id)arg1;
- (void)cancel:(id)arg1;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

