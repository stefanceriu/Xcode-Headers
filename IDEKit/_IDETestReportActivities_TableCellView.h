//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSButton, NSString, NSTextField;

@interface _IDETestReportActivities_TableCellView : NSTableCellView
{
    BOOL _isMasterActivity;
    BOOL _containsFailure;
    BOOL _containsCrash;
    BOOL _selected;
    id _assertion;
    NSString *_activityString;
    NSString *_durationString;
    NSTextField *_primaryLabel;
    NSButton *_button;
}

@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property BOOL containsCrash; // @synthesize containsCrash=_containsCrash;
@property BOOL containsFailure; // @synthesize containsFailure=_containsFailure;
@property __weak NSButton *button; // @synthesize button=_button;
@property __weak NSTextField *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(copy) NSString *durationString; // @synthesize durationString=_durationString;
@property(copy) NSString *activityString; // @synthesize activityString=_activityString;
@property(retain) id assertion; // @synthesize assertion=_assertion;
@property BOOL isMasterActivity; // @synthesize isMasterActivity=_isMasterActivity;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;

@end

