//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/NSTextFieldDelegate-Protocol.h>

@class IBCocoaBindingsAutocompletingTextField, NSString;

@protocol IBCocoaBindingsAutocompletingTextFieldDelegate <NSTextFieldDelegate>

@optional
- (void)textFieldDidDismissCompletions:(IBCocoaBindingsAutocompletingTextField *)arg1;
- (void)textField:(IBCocoaBindingsAutocompletingTextField *)arg1 didAcceptCompletion:(NSString *)arg2 by:(unsigned long long)arg3;
@end

