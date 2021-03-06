//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDETestBundleDeviceRecord, NSString;

@interface IDETestBundleRunDestinationRecord : NSObject
{
    NSString *_targetArchitecture;
    IDETestBundleDeviceRecord *_targetDevice;
    IDETestBundleDeviceRecord *_localComputer;
}

@property(retain) IDETestBundleDeviceRecord *localComputer; // @synthesize localComputer=_localComputer;
@property(retain) IDETestBundleDeviceRecord *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRunDestinationRecord:(id)arg1;
- (id)initWithTargetArchitecture:(id)arg1 targetDeviceRecord:(id)arg2 localComputerRecord:(id)arg3;
- (id)init;

@end

