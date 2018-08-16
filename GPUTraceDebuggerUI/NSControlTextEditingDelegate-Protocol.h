//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTraceDebuggerUI/NSObject-Protocol.h>

@class NSArray, NSControl, NSString, NSText, NSTextView;

@protocol NSControlTextEditingDelegate <NSObject>

@optional
- (NSArray *)control:(NSControl *)arg1 textView:(NSTextView *)arg2 completions:(NSArray *)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (BOOL)control:(NSControl *)arg1 textView:(NSTextView *)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)control:(NSControl *)arg1 isValidObject:(id)arg2;
- (void)control:(NSControl *)arg1 didFailToValidatePartialString:(NSString *)arg2 errorDescription:(NSString *)arg3;
- (BOOL)control:(NSControl *)arg1 didFailToFormatString:(NSString *)arg2 errorDescription:(NSString *)arg3;
- (BOOL)control:(NSControl *)arg1 textShouldEndEditing:(NSText *)arg2;
- (BOOL)control:(NSControl *)arg1 textShouldBeginEditing:(NSText *)arg2;
@end

