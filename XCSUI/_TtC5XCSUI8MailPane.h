//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class NSBundle, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface _TtC5XCSUI8MailPane : DVTViewController
{
    // Error parsing type: , name: prefPane
    // Error parsing type: , name: fromField
    // Error parsing type: , name: fromAddressField
    // Error parsing type: , name: replyToNameField
    // Error parsing type: , name: replyToAddressField
    // Error parsing type: , name: smtpRelayField
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateFromName:(id)arg1;
- (void)updateFromAddress:(id)arg1;
- (void)updateReplyToName:(id)arg1;
- (void)updateReplyToAddress:(id)arg1;
- (void)updateSMTPRelay:(id)arg1;
- (void)loadView;
- (void)sendTestMessage:(id)arg1;
@property(nonatomic, readonly) NSBundle *nibBundle;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic) __weak NSTextField *smtpRelayField; // @synthesize smtpRelayField;
@property(nonatomic) __weak NSTextField *replyToAddressField; // @synthesize replyToAddressField;
@property(nonatomic) __weak NSTextField *replyToNameField; // @synthesize replyToNameField;
@property(nonatomic) __weak NSTextField *fromAddressField; // @synthesize fromAddressField;
@property(nonatomic) __weak NSTextField *fromField; // @synthesize fromField;

@end

