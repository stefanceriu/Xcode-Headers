//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSArray, NSMutableArray, NSString;
@protocol DVTInfoPlistValueCellDelegate;

@interface DVTInfoPlistValueCell : NSTextFieldCell
{
    id <DVTInfoPlistValueCellDelegate> _delegate;
    NSMutableArray *_tokens;
}

@property(copy, nonatomic) NSArray *_tokens; // @synthesize _tokens;
@property(retain) id <DVTInfoPlistValueCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (struct _NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (id)_tokenContainingCharacterLocation:(unsigned long long)arg1;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (void)setObjectValue:(id)arg1;
@property(copy) NSString *unexpandedStringValue;

@end

