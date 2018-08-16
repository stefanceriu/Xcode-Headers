//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEActivityPopUpContentView, IDEActivityView, IDEWorkspaceDocument, NSArray, NSString;

@interface IDEActivityPopUpWindowController : NSWindowController <DVTInvalidation>
{
    NSArray *_notificationsToClosePopUpTokens;
    IDEActivityPopUpContentView *_contentView;
    IDEWorkspaceDocument *_workspaceDocument;
    IDEActivityView *_activityView;
    double _targetHeight;
    id _localEventHandler;
    BOOL _isClosed;
    BOOL _isOpen;
    double _spaceNeededForMultiActionIndicator;
}

+ (void)initialize;
+ (id)activityPopUpWindowForActivityView:(id)arg1;
@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
@property(readonly) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
@property(readonly) IDEActivityView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)stopMonitoringForEventsToClosePopUp;
- (void)startMonitoringForEventsToClosePopUp;
- (void)animateToHeight:(double)arg1;
- (void)closeAndAnimate:(BOOL)arg1;
- (void)animateOpen;
- (struct CGRect)popUpScreenRectUnderActivityViewTakingIntoAccountContentInset;
- (struct CGRect)activityViewScreenRect;
- (id)workspaceTabControllerForNavigation;
- (void)primitiveInvalidate;
- (id)initWithActivityView:(id)arg1 initialDataSource:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

