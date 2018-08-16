//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTITunesConnectServiceResponse.h>

#import <DVTFoundation/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface DVTITunesConnectConfigurationResponse : DVTITunesConnectServiceResponse <NSSecureCoding>
{
    NSString *_alertMessage;
    NSDictionary *_configuration;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(readonly) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithITunesSoftwareServiceConfigurationResponse:(id)arg1;
- (id)initWithIsSuccessful:(BOOL)arg1 configuration:(id)arg2 alertMessage:(id)arg3 errors:(id)arg4 warnings:(id)arg5 infoMessages:(id)arg6;

@end

