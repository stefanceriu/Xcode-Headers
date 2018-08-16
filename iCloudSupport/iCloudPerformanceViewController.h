//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCloudSupport/iCloudViewController.h>

#import <iCloudSupport/IDEGraphDelegate-Protocol.h>

@class DVTNotificationToken, IDEBarGraph, NSByteCountFormatter, NSMutableDictionary, NSString;

@interface iCloudPerformanceViewController : iCloudViewController <IDEGraphDelegate>
{
    NSByteCountFormatter *_byteFormatter;
    DVTNotificationToken *_iCloudNotificationToken;
    NSMutableDictionary *_progressForItemID;
    IDEBarGraph *_barGraph;
}

@property(retain) IDEBarGraph *barGraph; // @synthesize barGraph=_barGraph;
@property(retain) NSMutableDictionary *progressForItemID; // @synthesize progressForItemID=_progressForItemID;
@property(retain) DVTNotificationToken *iCloudNotificationToken; // @synthesize iCloudNotificationToken=_iCloudNotificationToken;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_observeController;
- (double)_progressDeltaForItem:(id)arg1 currentProgress:(double)arg2;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (id)colorForChartNamed:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

