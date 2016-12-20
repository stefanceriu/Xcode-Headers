//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTLogAspect, IDECodesignParameterSnapshot, IDEProfileQualification, IDEProvisionableSnapshot, IDEProvisionableStatusEvalutorInputs, IDEProvisioningCommandInputs, IDEProvisioningRepairInfo, NSArray, NSDictionary, NSString;

@interface IDEProvisionableStatusEvaluation : NSObject
{
    long long _signingStyle;
    NSArray *_errors;
    IDEProfileQualification *_profileQualification;
    id <IDEProvisioningBasicProfile> _profileForDisplay;
    NSDictionary *_entitlements;
    IDEProvisioningCommandInputs *_provisioningCommandInputs;
    NSString *_configuration;
    IDECodesignParameterSnapshot *_codesignParameterSnapshot;
    IDEProvisioningRepairInfo *_repairInfo;
    IDEProvisionableStatusEvalutorInputs *_evaluationInputs;
    DVTLogAspect *_logAspect;
    NSDictionary *_rawEntitlements;
    NSArray *_rawErrors;
}

@property(readonly) NSArray *rawErrors; // @synthesize rawErrors=_rawErrors;
@property(readonly) NSDictionary *rawEntitlements; // @synthesize rawEntitlements=_rawEntitlements;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly) IDEProvisionableStatusEvalutorInputs *evaluationInputs; // @synthesize evaluationInputs=_evaluationInputs;
@property(readonly, nonatomic) IDEProvisioningRepairInfo *repairInfo; // @synthesize repairInfo=_repairInfo;
@property(readonly, nonatomic) IDECodesignParameterSnapshot *codesignParameterSnapshot; // @synthesize codesignParameterSnapshot=_codesignParameterSnapshot;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
@property(readonly, nonatomic) IDEProvisioningCommandInputs *provisioningCommandInputs; // @synthesize provisioningCommandInputs=_provisioningCommandInputs;
- (id)mergedEntitlementsWithWarnings:(id *)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *appIdentifierPrefix;
@property(readonly, nonatomic) NSString *teamIdentifierPrefix;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) id <IDEProvisioningBasicProfile> profileForDisplay; // @synthesize profileForDisplay=_profileForDisplay;
- (void)locateEligibleProfiles:(id *)arg1 ineligibleProfiles:(id *)arg2;
@property(readonly, nonatomic) IDEProfileQualification *profileQualification; // @synthesize profileQualification=_profileQualification;
@property(readonly, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) long long signingStyle; // @synthesize signingStyle=_signingStyle;
@property(readonly, nonatomic) IDEProvisionableSnapshot *provisionableSnapshot;
- (id)evaluationByInjectingError:(id)arg1;
- (id)initWithEvaluationInputs:(id)arg1 configuration:(id)arg2 codesignParameterSnapshot:(id)arg3 entitlements:(id)arg4 repairInfo:(id)arg5 logAspect:(id)arg6 errors:(id)arg7;

@end

