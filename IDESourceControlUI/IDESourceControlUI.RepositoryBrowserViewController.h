//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTOutlineView, DVTSearchField, IDEControlGroup;

@interface IDESourceControlUI.RepositoryBrowserViewController : IDEViewController
{
    // Error parsing type: , name: borderedView
    // Error parsing type: , name: glassBarBorderedView
    // Error parsing type: , name: addButton
    // Error parsing type: , name: removeButton
    // Error parsing type: , name: controlGroup
    // Error parsing type: , name: filterField
    // Error parsing type: , name: outlineView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
@property(nonatomic) __weak DVTOutlineView *outlineView; // @synthesize outlineView;
@property(nonatomic) __weak DVTSearchField *filterField; // @synthesize filterField;
@property(nonatomic) __weak IDEControlGroup *controlGroup; // @synthesize controlGroup;
@property(nonatomic) __weak DVTGradientImageButton *removeButton; // @synthesize removeButton;
@property(nonatomic) __weak DVTGradientImageButton *addButton; // @synthesize addButton;
@property(nonatomic) __weak DVTBorderedView *glassBarBorderedView; // @synthesize glassBarBorderedView;
@property(nonatomic) __weak DVTBorderedView *borderedView; // @synthesize borderedView;

@end

