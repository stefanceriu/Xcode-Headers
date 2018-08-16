//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDESourceControlUI/NSSplitViewDelegate-Protocol.h>
#import <IDESourceControlUI/NSTouchBarDelegate-Protocol.h>

@class DVTBorderedView, DVTReplacementView, DVTScopeBarButton, NSProgressIndicator, NSScrollView, NSTokenField, _TtC18IDESourceControlUI26SourceControlLogItemHolder;

@interface _TtC18IDESourceControlUI17WorkingCopyEditor : IDEEditor <NSTouchBarDelegate, NSSplitViewDelegate>
{
    // Error parsing type: , name: borderedView
    // Error parsing type: , name: topBarView
    // Error parsing type: , name: replacementView
    // Error parsing type: , name: searchField
    // Error parsing type: , name: allHistoryButton
    // Error parsing type: , name: dayHistoryButton
    // Error parsing type: , name: weekHistoryButton
    // Error parsing type: , name: monthHistoryButton
    // Error parsing type: , name: progressIndicator
    // Error parsing type: , name: commitButton
    // Error parsing type: , name: filterString
    // Error parsing type: , name: currentSelectedItem
    // Error parsing type: , name: _currentNavigableItem
    // Error parsing type: , name: dateFilteringMode
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (BOOL)canProvideCurrentSelectedItems;
+ (id)keyPathsForValuesAffectingCurrentSelectedDocumentLocations;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)loadView;
- (void)awakeFromNib;
- (void)switchTimeFilter:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (void)primitiveInvalidate;
- (void)refreshEditorCommand:(id)arg1;
- (void)showCommit:(id)arg1;
- (void)startFilter:(id)arg1;
@property(nonatomic, readonly) NSScrollView *mainScrollView;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
@property(nonatomic, retain) _TtC18IDESourceControlUI26SourceControlLogItemHolder *currentSelectedItem; // @synthesize currentSelectedItem;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic) __weak DVTScopeBarButton *monthHistoryButton; // @synthesize monthHistoryButton;
@property(nonatomic) __weak DVTScopeBarButton *weekHistoryButton; // @synthesize weekHistoryButton;
@property(nonatomic) __weak DVTScopeBarButton *dayHistoryButton; // @synthesize dayHistoryButton;
@property(nonatomic) __weak DVTScopeBarButton *allHistoryButton; // @synthesize allHistoryButton;
@property(nonatomic) __weak NSTokenField *searchField; // @synthesize searchField;
@property(nonatomic) __weak DVTReplacementView *replacementView; // @synthesize replacementView;
@property(nonatomic) __weak DVTBorderedView *topBarView; // @synthesize topBarView;
@property(nonatomic) __weak DVTBorderedView *borderedView; // @synthesize borderedView;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;

@end

