//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEProjectItemViewController.h"

@class DVTBorderedView, DVTGradientImageButton, DVTObservingToken, DVTTableView, NSProgressIndicator, Xcode3PassbookItemModel;

@interface Xcode3PassbookItemViewController : IDEProjectItemViewController
{
    DVTObservingToken *_customPassTypesObserver;
    DVTObservingToken *_knownPassTypesObserver;
    BOOL _refreshing;
    DVTBorderedView *_tableBorder;
    DVTTableView *_passTypesTable;
    DVTGradientImageButton *_refreshTableButton;
    NSProgressIndicator *_refreshTableSpinner;
}

+ (id)keyPathsForValuesAffectingUseCustomPassTypes;
@property(nonatomic, getter=isRefreshing) BOOL refreshing; // @synthesize refreshing=_refreshing;
@property(retain) NSProgressIndicator *refreshTableSpinner; // @synthesize refreshTableSpinner=_refreshTableSpinner;
@property(retain) DVTGradientImageButton *refreshTableButton; // @synthesize refreshTableButton=_refreshTableButton;
@property(retain) DVTTableView *passTypesTable; // @synthesize passTypesTable=_passTypesTable;
@property(retain) DVTBorderedView *tableBorder; // @synthesize tableBorder=_tableBorder;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)refresh:(id)arg1;
- (void)setUseCustomPassTypes:(BOOL)arg1;
- (BOOL)useCustomPassTypes;
- (void)primitiveInvalidate;
- (void)layout;
- (void)loadView;
- (id)initWithEditorItemModel:(id)arg1 portalInfoDelegate:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) Xcode3PassbookItemModel *model; // @dynamic model;

@end

