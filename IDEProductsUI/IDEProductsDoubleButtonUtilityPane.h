//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEProductsUI/IDEProductsSingleButtonUtilityPane.h>

@class NSButton, NSString;

@interface IDEProductsDoubleButtonUtilityPane : IDEProductsSingleButtonUtilityPane
{
    NSString *_secondButtonTitle;
    NSString *_secondButtonTitleKeyPath;
    NSString *_secondButtonEnabledKeyPath;
    NSString *_secondButtonAction;
    NSButton *_secondButton;
}

@property(retain) NSButton *secondButton; // @synthesize secondButton=_secondButton;
@property(retain, nonatomic) NSString *secondButtonAction; // @synthesize secondButtonAction=_secondButtonAction;
@property(retain, nonatomic) NSString *secondButtonEnabledKeyPath; // @synthesize secondButtonEnabledKeyPath=_secondButtonEnabledKeyPath;
@property(retain, nonatomic) NSString *secondButtonTitleKeyPath; // @synthesize secondButtonTitleKeyPath=_secondButtonTitleKeyPath;
@property(retain, nonatomic) NSString *secondButtonTitle; // @synthesize secondButtonTitle=_secondButtonTitle;
- (void).cxx_destruct;
- (void)bindSecondButtonEnabledKeyPath;
- (void)bindSecondButtonTitleKeyPath;
- (void)secondButtonClicked:(id)arg1;
- (void)viewDidLoad;
- (void)primitiveInvalidate;

@end

