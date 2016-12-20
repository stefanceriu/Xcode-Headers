//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEProductsUI/IDEProductsUtilityPane.h>

@class NSButton, NSString;

@interface IDEProductsSingleButtonUtilityPane : IDEProductsUtilityPane
{
    NSString *_buttonTitle;
    NSString *_buttonTitleKeyPath;
    NSString *_buttonEnabledKeyPath;
    NSString *_buttonAction;
    id <IDEProductsInspectableVending> _vendor;
    NSButton *_button;
}

@property(retain) NSButton *button; // @synthesize button=_button;
@property __weak id <IDEProductsInspectableVending> vendor; // @synthesize vendor=_vendor;
@property(retain, nonatomic) NSString *buttonAction; // @synthesize buttonAction=_buttonAction;
@property(retain, nonatomic) NSString *buttonEnabledKeyPath; // @synthesize buttonEnabledKeyPath=_buttonEnabledKeyPath;
@property(retain, nonatomic) NSString *buttonTitleKeyPath; // @synthesize buttonTitleKeyPath=_buttonTitleKeyPath;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void).cxx_destruct;
- (void)bindButtonEnabledKeyPath;
- (void)bindButtonTitleKeyPath;
- (void)buttonClicked:(id)arg1;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (id)initWithInspectable:(id)arg1 vendor:(id)arg2;
- (id)initWithInspectable:(id)arg1;

@end

