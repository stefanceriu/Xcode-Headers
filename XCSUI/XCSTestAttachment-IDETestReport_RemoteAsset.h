//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSCore/XCSTestAttachment.h>

#import <XCSUI/IDETestReport_RemoteAsset-Protocol.h>

@class NSString, NSURL;

@interface XCSTestAttachment (IDETestReport_RemoteAsset) <IDETestReport_RemoteAsset>
@property(readonly, nonatomic) unsigned long long ide_testReport_remoteAsset_size;
@property(readonly, copy, nonatomic) NSURL *ide_testReport_remoteAsset_downloadURL;
@property(readonly, copy, nonatomic) NSString *ide_testReport_remoteAsset_fileName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

