//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTBorderedView, DVTOutlineView, DVTSourceControlPathLocation, DVTSourceControlRepository, NSMutableDictionary, NSString;
@protocol DVTSourceControlCancellable, IDESourceControlFilePickerDelegate;

@interface IDESourceControlFilePickerViewController : DVTViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    DVTBorderedView *_borderedView;
    CDUnknownBlockType _completionBlock;
    id <DVTSourceControlCancellable> _currentToken;
    DVTSourceControlRepository *_repository;
    DVTSourceControlPathLocation *_root;
    NSMutableDictionary *_cachedPaths;
    DVTOutlineView *_outlineView;
    id <IDESourceControlFilePickerDelegate> _delegate;
}

@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) id <IDESourceControlFilePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)choose:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)setRepository:(id)arg1;
- (void)displayError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

