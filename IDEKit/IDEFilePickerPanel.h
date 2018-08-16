//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEFilePickerView, NSArray, NSPredicate, NSString, NSURL, NSWindow;
@protocol IDEFilePickerViewDelegate;

@interface IDEFilePickerPanel : NSPanel <DVTInvalidation>
{
    IDEFilePickerView *_filePickerView;
    CDUnknownBlockType _completionHandler;
    NSWindow *_attachedToWindow;
    NSArray *_urls;
    NSURL *_directoryURL;
    NSArray *_allowedFileTypesForAddOther;
}

+ (void)initialize;
+ (id)filePickerPanel;
@property(copy) NSArray *allowedFileTypesForAddOther; // @synthesize allowedFileTypesForAddOther=_allowedFileTypesForAddOther;
@property(copy) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (void).cxx_destruct;
- (void)hideProgressIndicator;
- (void)showProgressIndicator;
@property(retain) id <IDEFilePickerViewDelegate> filePickerDelegate;
@property(nonatomic) unsigned long long pickingStyle;
@property(copy) NSPredicate *selectableNavigableItemFilter;
@property(copy) NSPredicate *allowedNavigableItemFilter;
@property(readonly) NSArray *URLs;
@property(retain) NSArray *items;
@property BOOL canChooseGroups;
@property BOOL allowsMultipleSelection;
@property(copy) NSArray *expandedItems;
@property(copy) NSArray *rootItems;
@property(copy) NSString *message;
@property BOOL showsAddOtherButton;
@property(copy) NSString *cancelButtonTitle;
@property(copy) NSString *addOtherButtonTitle;
@property(copy) NSString *addButtonTitle;
- (void)addOther:(id)arg1;
- (void)cancel:(id)arg1;
- (void)add:(id)arg1;
- (void)_pickingEndedWithReturnCode:(long long)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)primitiveInvalidate;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

