//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSView, iCloudActivityEditor, iCloudController;

@interface iCloudViewController : IDEViewController
{
    iCloudActivityEditor *_editor;
    NSView *_headerAccessory;
}

@property(retain, nonatomic) NSView *headerAccessory; // @synthesize headerAccessory=_headerAccessory;
@property(readonly, nonatomic) __weak iCloudActivityEditor *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) __weak iCloudController *controller;
- (id)initWithEditor:(id)arg1;

@end

