//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlMultiChooserItem.h>

@class IDESourceControlBranch;
@protocol IDESourceControlBranchChooserItemDelegate;

@interface IDESourceControlBranchChooserItem : IDESourceControlMultiChooserItem
{
    IDESourceControlBranch *_selectedBranch;
    IDESourceControlBranch *_currentBranch;
    BOOL _addedNewBranchesSeperator;
    id <IDESourceControlBranchChooserItemDelegate> _delegate;
}

@property __weak id <IDESourceControlBranchChooserItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDESourceControlBranch *currentBranch; // @synthesize currentBranch=_currentBranch;
@property(retain) IDESourceControlBranch *selectedBranch; // @synthesize selectedBranch=_selectedBranch;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)setSelectedItem:(id)arg1;
- (id)addMenuItemForBranch:(id)arg1;
- (void)_fetchRemoteBranchesForMenu:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)fetchBranchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_newBranch:(id)arg1;

@end

