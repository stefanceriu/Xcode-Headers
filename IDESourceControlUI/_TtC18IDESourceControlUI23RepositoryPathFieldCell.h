//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@interface _TtC18IDESourceControlUI23RepositoryPathFieldCell : NSTextFieldCell
{
    // Error parsing type: , name: CHOOSER_BUTTON_PAD
    // Error parsing type: , name: CHOOSER_BUTTON_HEIGHT
    // Error parsing type: , name: CHOOSER_BUTTON_WIDTH
    // Error parsing type: , name: delegate
    // Error parsing type: , name: chooseButtonCell
}

- (CDUnknownBlockType).cxx_destruct;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
@property(nonatomic) BOOL enabled;
- (BOOL)isEnabled;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)chooseWithSender:(id)arg1;
- (id)copyWithZone:(void *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;

@end

