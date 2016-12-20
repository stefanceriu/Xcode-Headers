//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class DYRangeSlider, NSButton, NSLayoutConstraint, NSTextField;

__attribute__((visibility("hidden")))
@interface GPUTraceResourceSettingsChannelStrip : NSViewController
{
    DYRangeSlider *_rangeSlider;
    NSTextField *_rangeMinTextField;
    NSTextField *_rangeMaxTextField;
    NSButton *_autoRangeCheckBox;
    double _userSliderMin;
    double _userSliderMax;
    double _userExtentMin;
    double _userExtentMax;
    double _toneMapDefaultMin;
    double _toneMapDefaultMax;
    double _toneMapLimitMin;
    double _toneMapLimitMax;
    unsigned char _stripType;
    unsigned char _tag;
    NSTextField *_channelLabel;
    NSButton *_enableButton;
    NSLayoutConstraint *_linkViewSpacerConstraint;
    id <GPUTraceResourceSettingsChannelStripDelegate> _delegate;
    double _toneMapExtentMin;
    double _toneMapExtentMax;
    double _toneMapSliderMin;
    double _toneMapSliderMax;
}

@property(nonatomic) double toneMapSliderMax; // @synthesize toneMapSliderMax=_toneMapSliderMax;
@property(nonatomic) double toneMapSliderMin; // @synthesize toneMapSliderMin=_toneMapSliderMin;
@property(nonatomic) double toneMapExtentMax; // @synthesize toneMapExtentMax=_toneMapExtentMax;
@property(nonatomic) double toneMapExtentMin; // @synthesize toneMapExtentMin=_toneMapExtentMin;
@property(nonatomic) __weak id <GPUTraceResourceSettingsChannelStripDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned char tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned char stripType; // @synthesize stripType=_stripType;
@property(retain, nonatomic) NSLayoutConstraint *linkViewSpacerConstraint; // @synthesize linkViewSpacerConstraint=_linkViewSpacerConstraint;
@property(retain, nonatomic) NSButton *enableButton; // @synthesize enableButton=_enableButton;
@property(retain, nonatomic) NSTextField *channelLabel; // @synthesize channelLabel=_channelLabel;
- (void).cxx_destruct;
- (void)_toggleAutoRangeCheckBox:(id)arg1;
- (void)_updateMaxTextField:(id)arg1;
- (void)_updateMinTextField:(id)arg1;
- (void)_updateToneMapSlider:(id)arg1;
- (void)_toggleEnableState:(id)arg1;
- (void)_applyToneMapValues;
- (void)_applySliderMin:(double)arg1 andSliderMax:(double)arg2 withExtentMin:(double)arg3 andExtentMax:(double)arg4 informingDelegate:(BOOL)arg5;
- (void)_updateTextFieldWithType:(unsigned char)arg1;
- (void)_setToneMapRange:(const struct DYRangeValue *)arg1 informingDelegate:(BOOL)arg2;
- (void)_setToneMapExtentsWithMin:(double)arg1 andMax:(double)arg2 informingDelegate:(BOOL)arg3;
@property(nonatomic) long long autoRangeCheckBoxState;
@property(nonatomic) long long enableButtonState;
@property(readonly, nonatomic) double uiWidth;
- (void)viewDidLoad;
- (void)setRenderingAttributes:(id)arg1 channelIndex:(unsigned char)arg2;

@end

