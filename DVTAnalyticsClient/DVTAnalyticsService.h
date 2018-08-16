//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTServicesType, NSArray, NSDictionary;

@interface DVTAnalyticsService : NSObject
{
    NSArray *_orderedParameters;
    NSArray *_pathComponents;
    NSDictionary *_parameters;
    DVTServicesType *_responseType;
}

+ (id)combinedParametersFromOptions:(id)arg1 andURLComponentProvider:(id)arg2;
@property(copy) DVTServicesType *responseType; // @synthesize responseType=_responseType;
@property(copy) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy) NSArray *pathComponents; // @synthesize pathComponents=_pathComponents;
@property(readonly) NSArray *orderedParameters; // @synthesize orderedParameters=_orderedParameters;
- (void).cxx_destruct;
- (id)_requestQueryString;
- (id)_requestEndpoint;
- (id)_responseFromServiceWithSession:(id)arg1 error:(id *)arg2;
- (id)resultWithSession:(id)arg1 error:(id *)arg2;
- (id)initWithServiceExtensionIdentifier:(id)arg1 pathComponents:(id)arg2 parameters:(id)arg3;
- (id)init;

@end

