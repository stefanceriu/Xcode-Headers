//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTSourceControlWorkingCopy, NSString, NSTextField;
@protocol IDESourceControlOperationViewDelegate;

@interface _TtC18IDESourceControlUI23AddRemoteViewController : DVTViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: operation
    // Error parsing type: , name: newRemoteNameField
    // Error parsing type: , name: newRemoteURLField
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)tearDownAction;
- (void)primaryAction;
- (void)willBeginSheet;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic, retain) NSTextField *newRemoteURLField; // @synthesize newRemoteURLField;
@property(nonatomic, retain) NSTextField *newRemoteNameField; // @synthesize newRemoteNameField;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic, retain) id <IDESourceControlOperationViewDelegate> delegate; // @synthesize delegate;

@end
