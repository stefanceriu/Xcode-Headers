//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSPopUpButton, NSString;

@interface _TtC18IDESourceControlUI39SourceControlPrefsGeneralPaneController : IDEViewController
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
@property(nonatomic) __weak NSPopUpButton *navigatorSortingPopupButton; // @synthesize navigatorSortingPopupButton;
@property(nonatomic) __weak NSPopUpButton *comparisonLocalRevisionSidePopupButton; // @synthesize comparisonLocalRevisionSidePopupButton;
@property(nonatomic) BOOL alwaysAddFiles;
@property(nonatomic) BOOL showRemoteStatus;
@property(nonatomic) BOOL showLocalStatus;
@property(nonatomic) BOOL enableSourceControl;

@end

