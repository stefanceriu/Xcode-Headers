//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTDiagnosticsClient-Protocol.h>

@class NSString;

@interface IDEDiagnosticsProvisioning : NSObject <DVTDiagnosticsClient>
{
}

- (BOOL)_gatherTeamsInfo:(id)arg1 outError:(id *)arg2;
- (BOOL)_gatherCertificateManagerInfo:(id)arg1 outError:(id *)arg2;
- (BOOL)_writeDictionary:(id)arg1 name:(id)arg2 collector:(id)arg3 error:(id *)arg4;
- (void)collect:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
