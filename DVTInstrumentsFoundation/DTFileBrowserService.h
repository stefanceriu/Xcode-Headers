//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTFileBrowserServiceAuthorizedAPI-Protocol.h>

@class NSString;

@interface DTFileBrowserService : DTXService <DTFileBrowserServiceAuthorizedAPI>
{
}

+ (void)registerCapabilities:(id)arg1;
- (id)updateAttributesForItem:(id)arg1;
- (id)contentsOfDirectoryAtPath:(id)arg1;
- (id)dataFromFileAtPath:(id)arg1;
- (id)entriesInPathsArray:(id)arg1;
- (id)entriesAtPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

