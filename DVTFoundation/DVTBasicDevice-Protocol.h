//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTCodesignableDevice.h"

@class NSString;

@protocol DVTBasicDevice <DVTCodesignableDevice>
@property(readonly, copy) NSString *operatingSystemBuild;
@property(readonly, copy) NSString *operatingSystemVersion;
@property(readonly, copy) NSString *processorDescription;
@property(readonly, copy, nonatomic) NSString *modelUTI;
@property(readonly, copy, nonatomic) NSString *modelCode;
@property(readonly, copy, nonatomic) NSString *modelName;
@end
