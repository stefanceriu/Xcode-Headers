//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class NSButton;

@interface IDEQueueDebuggingOptionsViewController : IDELaunchActionOptionViewController
{
    NSButton *_enableQueueDebuggingCheckBox;
}

+ (BOOL)availableForScheme:(id)arg1;
@property __weak NSButton *enableQueueDebuggingCheckBox; // @synthesize enableQueueDebuggingCheckBox=_enableQueueDebuggingCheckBox;
- (void).cxx_destruct;
- (void)enableQueueDebuggingClicked:(id)arg1;
- (void)loadView;

@end

