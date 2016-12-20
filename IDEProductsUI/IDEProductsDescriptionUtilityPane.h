//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEProductsUI/IDEProductsUtilityPane.h>

@class DVTTextViewWithPlaceholder, NSAttributedString, NSString;

@interface IDEProductsDescriptionUtilityPane : IDEProductsUtilityPane
{
    NSString *_descriptionKeyPath;
    NSAttributedString *_attributedCommentsString;
    NSString *_descriptionTitle;
    DVTTextViewWithPlaceholder *_descriptionTextView;
}

@property(retain) DVTTextViewWithPlaceholder *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(readonly) NSString *descriptionTitle; // @synthesize descriptionTitle=_descriptionTitle;
@property(copy) NSAttributedString *attributedCommentsString; // @synthesize attributedCommentsString=_attributedCommentsString;
@property(readonly) NSString *descriptionKeyPath; // @synthesize descriptionKeyPath=_descriptionKeyPath;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithInspectable:(id)arg1 descriptionKeyPath:(id)arg2 title:(id)arg3;
- (id)initWithInspectable:(id)arg1;

@end

