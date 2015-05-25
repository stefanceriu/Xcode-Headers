//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEProductsUtilityPane.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class DVTObservingToken, NSLayoutConstraint, NSString, NSTableView, NSTextField;

@interface IDEProductsDetailUtilityPane : IDEProductsUtilityPane <NSTableViewDataSource, NSTableViewDelegate>
{
    NSString *_detailTitle;
    NSString *_detailsKeyPath;
    NSTextField *_titleField;
    NSTableView *_tableView;
    NSLayoutConstraint *_scrollViewHeightConstraint;
    DVTObservingToken *_detailsObservingToken;
}

@property(retain) DVTObservingToken *detailsObservingToken; // @synthesize detailsObservingToken=_detailsObservingToken;
@property __weak NSLayoutConstraint *scrollViewHeightConstraint; // @synthesize scrollViewHeightConstraint=_scrollViewHeightConstraint;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property(readonly) NSString *detailsKeyPath; // @synthesize detailsKeyPath=_detailsKeyPath;
@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)details;
- (void)setDetailsKeyPath:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewDidLoad;
- (id)initWithInspectable:(id)arg1 detailsKeyPath:(id)arg2;
- (id)initWithInspectable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
