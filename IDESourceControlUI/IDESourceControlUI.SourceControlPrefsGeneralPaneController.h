//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSPopUpButton, NSString, _TtC18IDESourceControlUI32SourceControlPrefsPaneController;

@interface IDESourceControlUI.SourceControlPrefsGeneralPaneController : IDEViewController
{
    // Error parsing type: , name: comparisonLocalRevisionSidePopupButton
    // Error parsing type: , name: navigatorSortingPopupButton
    // Error parsing type: , name: prefPaneController
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setNavigatorSorting:(id)arg1;
- (void)setComparisonLocalRevisionSide:(id)arg1;
- (void)viewDidInstall;
- (void)loadView;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic) __weak _TtC18IDESourceControlUI32SourceControlPrefsPaneController *prefPaneController; // @synthesize prefPaneController;
@property(nonatomic) __weak NSPopUpButton *navigatorSortingPopupButton; // @synthesize navigatorSortingPopupButton;
@property(nonatomic) __weak NSPopUpButton *comparisonLocalRevisionSidePopupButton; // @synthesize comparisonLocalRevisionSidePopupButton;
@property(nonatomic) BOOL alwaysAddFiles;
@property(nonatomic) BOOL showRemoteStatus;
@property(nonatomic) BOOL showLocalStatus;
@property(nonatomic) BOOL enableSourceControl;

@end
