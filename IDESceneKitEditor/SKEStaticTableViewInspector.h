//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESceneKitEditor/SKEInspectorViewController.h>

#import "NSTableViewDelegate.h"

@class DVTObservingToken, DVTScopeBarView, DVTScrollView, DVTTableView, NSArrayController, NSString, SKEStaticTableViewInspectorTableView;

@interface SKEStaticTableViewInspector : SKEInspectorViewController <NSTableViewDelegate>
{
    SKEStaticTableViewInspectorTableView *_tableView;
    DVTScrollView *_scrollView;
    DVTScopeBarView *_scopeBarView;
    NSArrayController *_arrayController;
    DVTObservingToken *_arrayControllerContentObservingToken;
    NSString *_emptyContentString;
}

+ (id)tableColumnTitles;
+ (struct _NSRange)visibleRowCountRange;
+ (BOOL)wantsEditionBar;
@property(readonly) DVTScopeBarView *scopeBarView; // @synthesize scopeBarView=_scopeBarView;
@property(readonly) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(readonly) DVTTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)makeProtoptypeStepperTextField;
- (id)makeProtoptypeTextField;
@property(copy, nonatomic) NSString *emptyContentString;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)arrayControllerContentDidChange;
- (void)configureEditionBar;
- (void)updateConstraintsAccordingToControlViewVisibilityAndNumberOfRows;
- (void)loadView;
- (void)setContent:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

