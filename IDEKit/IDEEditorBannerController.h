//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTScopeBarContentController-Protocol.h>

@class DVTButtonTextField, DVTObservingToken, NSArray, NSImage, NSString, NSTextField;

@interface IDEEditorBannerController : IDEViewController <DVTScopeBarContentController>
{
    double *_cachedMessageTextWidths;
    DVTObservingToken *_viewFrameObservingToken;
    BOOL _showsActionButton;
    double _preferredViewHeight;
    NSImage *_icon;
    NSString *_messageText;
    NSArray *_phrases;
    CDUnknownBlockType _actionBlock;
    NSString *_actionButtonTitle;
    NSImage *_actionButtonImage;
    NSTextField *_messageTextField;
    DVTButtonTextField *_actionButtonTextField;
    NSString *_toolTip;
}

@property(copy, nonatomic) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(retain) DVTButtonTextField *actionButtonTextField; // @synthesize actionButtonTextField=_actionButtonTextField;
@property(retain) NSTextField *messageTextField; // @synthesize messageTextField=_messageTextField;
@property(copy, nonatomic) NSImage *actionButtonImage; // @synthesize actionButtonImage=_actionButtonImage;
@property(copy, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(nonatomic) BOOL showsActionButton; // @synthesize showsActionButton=_showsActionButton;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(copy, nonatomic) NSImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)_actionButtonTextFieldAction:(id)arg1;
- (void)wasAssociatedWithScopeBarController:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_updateCachedMessageTextWidths;
- (void)loadView;
- (void)updateMessageText;
@property double preferredViewHeight; // @synthesize preferredViewHeight=_preferredViewHeight;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

