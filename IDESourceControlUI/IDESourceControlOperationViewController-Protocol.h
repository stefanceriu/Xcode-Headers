//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class DVTSourceControlWorkingCopy, NSString;
@protocol IDESourceControlOperationViewDelegate;

@protocol IDESourceControlOperationViewController
- (void)tearDownAction;
- (void)primaryAction;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic) __weak id <IDESourceControlOperationViewDelegate> delegate;

@optional
- (void)willBeginSheet;
@property(nonatomic, readonly) BOOL showIcon;
@property(nonatomic, copy) id context;
@end
