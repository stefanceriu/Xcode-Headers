//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <Xcode3UI/NSPopoverDelegate-Protocol.h>

@class NSPopover, NSString, NSTextField;

@interface Xcode3CompileFlagSettingViewController : IDEViewController <NSPopoverDelegate>
{
    NSTextField *_textField;
    NSString *_content;
    CDUnknownBlockType _completionBlock;
    NSPopover *_popover;
}

+ (void)showCompileFlagPopoverRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 defaultContent:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)close:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)popoverDidClose:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

