//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTTableView, IDEInspectorKeyPath;

@interface SKInspectorMultiTextureProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    DVTTableView *_tableView;
}

@property(retain) DVTTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)updateRowSelection;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)delete:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)refresh;
- (double)baseline;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)viewDidLoad;

@end

