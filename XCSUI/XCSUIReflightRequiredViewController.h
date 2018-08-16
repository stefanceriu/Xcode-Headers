//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTBorderedView, NSTextField, XCSBot;

@interface XCSUIReflightRequiredViewController : DVTViewController
{
    XCSBot *_reflightBot;
    NSTextField *_lozengeTextField;
    NSTextField *_textField;
    DVTBorderedView *_borderedView;
}

+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
@property __weak NSTextField *lozengeTextField; // @synthesize lozengeTextField=_lozengeTextField;
@property(retain, nonatomic) XCSBot *reflightBot; // @synthesize reflightBot=_reflightBot;
- (void).cxx_destruct;
- (void)upgradeBot:(id)arg1;
- (void)loadView;

@end

