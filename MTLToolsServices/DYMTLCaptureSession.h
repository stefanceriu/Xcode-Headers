//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsServices/DYCaptureSession.h>

@interface DYMTLCaptureSession : DYCaptureSession
{
    unsigned long long _captureCommandQueueAddress;
    unsigned long long _captureScopeAddress;
}

@property(nonatomic) unsigned long long captureScopeAddress; // @synthesize captureScopeAddress=_captureScopeAddress;
@property(nonatomic) unsigned long long captureCommandQueueAddress; // @synthesize captureCommandQueueAddress=_captureCommandQueueAddress;
- (void)_saveAPISpecificData:(id)arg1;
- (void)_setupFinalConfigurationDictionary:(id)arg1;
- (void)_postProcessArchive;

@end

