//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NSTableView, XCSUIDirectoryServicesUser;

@interface XCSUI.XCSUIUserGroupsQueryWindow : NSWindowController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: selectionCallback
    // Error parsing type: , name: candidates
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(nonatomic, readonly) XCSUIDirectoryServicesUser *selectedItem;
- (void)acceptSelectedItem:(id)arg1;
- (void)windowDidLoad;
- (void)selectNextRow;
- (void)selectPreviousRow;
@property(nonatomic, copy) NSArray *candidates; // @synthesize candidates;
@property(nonatomic, copy) CDUnknownBlockType selectionCallback; // @synthesize selectionCallback;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView;

@end

