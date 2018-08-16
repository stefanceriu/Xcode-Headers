//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTDownloadableManager, DVTKVOQueueForwarder, DVTTableView, NSArray, NSPredicate, NSString;

@interface IDEComponentsDownloadablesTableController : IDEViewController <NSTableViewDelegate>
{
    DVTDownloadableManager *_downloadableManager;
    NSString *_headerTitle;
    NSPredicate *_downloadsFilter;
    DVTKVOQueueForwarder *_allDownloadables;
    DVTTableView *_tableView;
}

+ (id)keyPathsForValuesAffectingItems;
@property(retain) DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) DVTKVOQueueForwarder *allDownloadables; // @synthesize allDownloadables=_allDownloadables;
@property(retain) NSPredicate *downloadsFilter; // @synthesize downloadsFilter=_downloadsFilter;
@property(copy) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
@property(readonly) NSArray *items;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

