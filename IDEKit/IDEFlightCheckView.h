//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

#import "DVTInvalidation.h"

@class DVTDelayedInvocation, DVTStackBacktrace, NSColor, NSError, NSImageView, NSProgressIndicator, NSString, NSTextView;

@interface IDEFlightCheckView : DVTLayoutView_ML <DVTInvalidation>
{
    DVTDelayedInvocation *_stateUpdatingDelayedInvocation;
    BOOL _blockHidingProgressView;
    BOOL _wantsToHideProgressView;
    int _state;
    int _style;
    id <IDEFlightChecking> _flightCheck;
    NSError *_errorForTooltip;
    NSTextView *_textView;
    NSImageView *_imageView;
    NSProgressIndicator *_progressView;
    NSColor *_textColor;
    DVTDelayedInvocation *_delayedHideProgressView;
}

+ (void)initialize;
@property(nonatomic) BOOL wantsToHideProgressView; // @synthesize wantsToHideProgressView=_wantsToHideProgressView;
@property(nonatomic) BOOL blockHidingProgressView; // @synthesize blockHidingProgressView=_blockHidingProgressView;
@property(retain, nonatomic) DVTDelayedInvocation *delayedHideProgressView; // @synthesize delayedHideProgressView=_delayedHideProgressView;
@property int style; // @synthesize style=_style;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSProgressIndicator *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSError *errorForTooltip; // @synthesize errorForTooltip=_errorForTooltip;
@property(readonly, nonatomic) id <IDEFlightChecking> flightCheck; // @synthesize flightCheck=_flightCheck;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)hideProgress;
- (void)showProgress;
- (id)errorImage;
- (id)finishedImage;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)updateState;
- (void)flightCheckStateChanged;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1 flightCheck:(id)arg2 style:(int)arg3 textColor:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

