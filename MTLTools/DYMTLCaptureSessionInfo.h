//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTools/DYCaptureSessionInfo.h>

@class NSArray;

@interface DYMTLCaptureSessionInfo : DYCaptureSessionInfo
{
    unsigned long long _capturedCommandQueueAddress;
    NSArray *_deviceProfiles;
}

+ (id)captureSessionInfoWithCaptureStore:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *deviceProfiles; // @synthesize deviceProfiles=_deviceProfiles;
@property(readonly, nonatomic) unsigned long long capturedCommandQueueAddress; // @synthesize capturedCommandQueueAddress=_capturedCommandQueueAddress;
- (void).cxx_destruct;
- (BOOL)canPlaybackOnDeviceWithInfo:(id)arg1 limitBackwardsCompatibility:(BOOL)arg2 isInternal:(BOOL)arg3;
- (BOOL)_isBackwardsCompatible:(id)arg1 isInternal:(BOOL)arg2;
- (id)initWithCaptureStore:(id)arg1;

@end

