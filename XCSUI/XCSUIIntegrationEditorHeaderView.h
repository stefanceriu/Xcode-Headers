//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class DVTTabChooserView, NSButton, XCSUIInsetHorizontalDividerLine;

@interface XCSUIIntegrationEditorHeaderView : NSView
{
    DVTTabChooserView *_tabChooserView;
    NSButton *_editBotButton;
    NSButton *_integrateButton;
    XCSUIInsetHorizontalDividerLine *_dividerLine;
}

@property __weak XCSUIInsetHorizontalDividerLine *dividerLine; // @synthesize dividerLine=_dividerLine;
@property __weak NSButton *integrateButton; // @synthesize integrateButton=_integrateButton;
@property __weak NSButton *editBotButton; // @synthesize editBotButton=_editBotButton;
@property __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
- (void).cxx_destruct;

@end

