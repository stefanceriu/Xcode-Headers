//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class NSBundle, NSButton, NSImageView, NSLayoutConstraint, NSSlider, NSStackView, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface _TtC5XCSUI12SettingsPane : DVTViewController
{
    // Error parsing type: , name: runTestsAsField
    // Error parsing type: , name: buildServiceUserLoggedInStatus
    // Error parsing type: , name: changeUserButton
    // Error parsing type: , name: logInButton
    // Error parsing type: , name: dataLocationField
    // Error parsing type: , name: relocateButton
    // Error parsing type: , name: showDataLocationButton
    // Error parsing type: , name: timeoutSlider
    // Error parsing type: , name: timeoutLabel
    // Error parsing type: , name: logInButtonContainerView
    // Error parsing type: , name: settingsStackView
    // Error parsing type: , name: buildUserContainerView
    // Error parsing type: , name: dataLocationContainerView
    // Error parsing type: , name: changeUserLeadingConstraintToLogInButton
    // Error parsing type: , name: changeUserButtonLeadingConstraintToSuper
    // Error parsing type: , name: prefPane
    // Error parsing type: , name: integrationUserName
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)changeUser:(id)arg1;
- (void)logIn:(id)arg1;
- (void)sliderMoved:(id)arg1;
- (void)viewDidLoad;
- (void)relocate:(id)arg1;
- (void)showDataLocationPath:(id)arg1;
@property(nonatomic, readonly) NSBundle *nibBundle;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic, retain) NSLayoutConstraint *changeUserLeadingConstraintToLogInButton; // @synthesize changeUserLeadingConstraintToLogInButton;
@property(nonatomic) __weak NSView *dataLocationContainerView; // @synthesize dataLocationContainerView;
@property(nonatomic) __weak NSView *buildUserContainerView; // @synthesize buildUserContainerView;
@property(nonatomic) __weak NSStackView *settingsStackView; // @synthesize settingsStackView;
@property(nonatomic) __weak NSView *logInButtonContainerView; // @synthesize logInButtonContainerView;
@property(nonatomic) __weak NSTextField *timeoutLabel; // @synthesize timeoutLabel;
@property(nonatomic) __weak NSSlider *timeoutSlider; // @synthesize timeoutSlider;
@property(nonatomic) __weak NSButton *showDataLocationButton; // @synthesize showDataLocationButton;
@property(nonatomic) __weak NSButton *relocateButton; // @synthesize relocateButton;
@property(nonatomic) __weak NSTextField *dataLocationField; // @synthesize dataLocationField;
@property(nonatomic) __weak NSButton *logInButton; // @synthesize logInButton;
@property(nonatomic) __weak NSButton *changeUserButton; // @synthesize changeUserButton;
@property(nonatomic) __weak NSImageView *buildServiceUserLoggedInStatus; // @synthesize buildServiceUserLoggedInStatus;
@property(nonatomic) __weak NSTextField *runTestsAsField; // @synthesize runTestsAsField;

@end
