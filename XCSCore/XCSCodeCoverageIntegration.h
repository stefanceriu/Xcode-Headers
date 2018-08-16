//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSCodeCoverageObject.h>

@class NSArray, NSDictionary, NSString;

@interface XCSCodeCoverageIntegration : XCSCodeCoverageObject
{
    NSString *_integrationID;
    unsigned long long _integrationNumber;
    NSArray *_targets;
    NSDictionary *_deviceMap;
}

@property(retain, nonatomic) NSDictionary *deviceMap; // @synthesize deviceMap=_deviceMap;
@property(retain, nonatomic) NSArray *targets; // @synthesize targets=_targets;
@property(nonatomic) unsigned long long integrationNumber; // @synthesize integrationNumber=_integrationNumber;
@property(copy, nonatomic) NSString *integrationID; // @synthesize integrationID=_integrationID;
- (void).cxx_destruct;
- (id)_targetWithTitle:(id)arg1;
- (id)_deviceTinyIDs;
- (void)_bindHierarchy;
- (unsigned long long)_deviceCount;
- (id)_deviceWithTinyID:(id)arg1;
- (void)_setDevices:(id)arg1;
- (BOOL)_validateWithIntegrationID:(id)arg1 integrationNumber:(unsigned long long)arg2 targets:(id)arg3 devices:(id)arg4 validationErrors:(id *)arg5;
- (BOOL)_validateWithIntegrationID:(id)arg1 validationErrors:(id *)arg2;
- (void)importUsingService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)splitIntegrationForImportWithError:(id *)arg1;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)ccifRepresentation;
- (id)ccimRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)setDeviceCoverage:(id)arg1 lineCoveragePercentage:(id)arg2 lineCoveragePercentageDelta:(id)arg3 validationErrors:(id *)arg4;
- (unsigned long long)count;
- (id)keyPath;
@property(readonly, nonatomic) NSArray *devices;
- (id)_initWithIntegrationID:(id)arg1 integrationNumber:(unsigned long long)arg2 targets:(id)arg3 devices:(id)arg4 skipValidation:(BOOL)arg5 skipBindHierarchy:(BOOL)arg6 validationErrors:(id *)arg7;
- (id)initWithContents:(id)arg1 service:(id)arg2 skipValidation:(BOOL)arg3 skipBindHierarchy:(BOOL)arg4 validationErrors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithIntegrationID:(id)arg1 integrationNumber:(unsigned long long)arg2 targets:(id)arg3 devices:(id)arg4 validationErrors:(id *)arg5;

@end

