//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEProductsUI/DVTCrashChartScaffoldView.h>

@class NSPopUpButton;

@interface DVTCrashChartSwitcherView : DVTCrashChartScaffoldView
{
    BOOL _showDeviceTypeOption;
    CDUnknownBlockType _switcherCallback;
    NSPopUpButton *_switcher;
}

@property(nonatomic) BOOL showDeviceTypeOption; // @synthesize showDeviceTypeOption=_showDeviceTypeOption;
@property(retain, nonatomic) NSPopUpButton *switcher; // @synthesize switcher=_switcher;
@property(copy, nonatomic) CDUnknownBlockType switcherCallback; // @synthesize switcherCallback=_switcherCallback;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)switchView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

