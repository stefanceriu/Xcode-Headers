//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCloudSupport/iCloudViewController.h>

@class NSByteCountFormatter, NSDateFormatter, NSMutableDictionary, NSMutableSet, NSOutlineView;

@interface iCloudDocumentsViewController : iCloudViewController
{
    id _itemNotificationToken;
    NSMutableSet *_observationTokens;
    NSMutableDictionary *_displayItemIndex;
    NSOutlineView *_outlineView;
    id _frameDidChangeNotificationToken;
    NSDateFormatter *_dateFormatter;
    NSByteCountFormatter *_sizeFormatter;
}

+ (id)descendingImage;
+ (id)ascendingImage;
@property(retain, nonatomic) NSByteCountFormatter *sizeFormatter; // @synthesize sizeFormatter=_sizeFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) id frameDidChangeNotificationToken; // @synthesize frameDidChangeNotificationToken=_frameDidChangeNotificationToken;
@property(retain, nonatomic) NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)reloadDocuments;
- (void)resizeColumnsInTable:(id)arg1;
- (void)sizeColumnWidthToFit:(id)arg1;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 getValueAndFormatter:(out id *)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)rootItem;
- (id)indicatorImageForSortDescriptor:(id)arg1;
- (id)sortDescriptorForTableColumn:(id)arg1 ascending:(BOOL)arg2;
- (void)checkGaugeInView:(id)arg1 forItem:(id)arg2;
- (id)initWithEditor:(id)arg1;

@end

