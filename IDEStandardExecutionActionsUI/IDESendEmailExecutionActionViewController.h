//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEActionSliceViewController.h>

@class IDESendEmailExecutionAction, NSScrollView, NSTextField, NSTextView;

@interface IDESendEmailExecutionActionViewController : IDEActionSliceViewController
{
    NSTextField *_toField;
    NSTextField *_subjectField;
    NSTextView *_bodyTextView;
    NSScrollView *_bodyScrollView;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(readonly) IDESendEmailExecutionAction *sendEmailAction;

@end

