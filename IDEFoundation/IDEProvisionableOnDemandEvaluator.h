//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEProvisioningManagerRepairObserver.h"

@class DVTSemaphore, DVTStackBacktrace, IDEProvisionableStatusEvaluation, IDEProvisionableStatusEvaluator, IDEProvisionableStatusEvalutorInputs, IDEProvisioningManager, IDEProvisioningUserAction, NSError, NSString;

@interface IDEProvisionableOnDemandEvaluator : NSObject <IDEProvisioningManagerRepairObserver, DVTInvalidation>
{
    BOOL _shouldRepair;
    IDEProvisionableStatusEvalutorInputs *_evaluationInputs;
    NSString *_configuration;
    IDEProvisioningManager *_provisioningManager;
    CDUnknownBlockType _updateEvaluationInputsBlock;
    IDEProvisionableStatusEvaluator *_statusEvaluator;
    DVTSemaphore *_semaphore;
    IDEProvisionableStatusEvaluation *_evaluation;
    NSError *_repairError;
    IDEProvisioningUserAction *_repairUserAction;
}

+ (id)evaluatorWithEvaluationInputs:(id)arg1 configuration:(id)arg2 shouldRepair:(BOOL)arg3 provisioningManager:(id)arg4 updateEvaluationInputsBlock:(CDUnknownBlockType)arg5;
+ (void)initialize;
@property(retain) IDEProvisioningUserAction *repairUserAction; // @synthesize repairUserAction=_repairUserAction;
@property(retain) NSError *repairError; // @synthesize repairError=_repairError;
@property(retain) IDEProvisionableStatusEvaluation *evaluation; // @synthesize evaluation=_evaluation;
@property(retain) DVTSemaphore *semaphore; // @synthesize semaphore=_semaphore;
@property(retain) IDEProvisionableStatusEvaluator *statusEvaluator; // @synthesize statusEvaluator=_statusEvaluator;
@property(copy) CDUnknownBlockType updateEvaluationInputsBlock; // @synthesize updateEvaluationInputsBlock=_updateEvaluationInputsBlock;
@property(retain) IDEProvisioningManager *provisioningManager; // @synthesize provisioningManager=_provisioningManager;
@property BOOL shouldRepair; // @synthesize shouldRepair=_shouldRepair;
@property(retain) NSString *configuration; // @synthesize configuration=_configuration;
@property(retain) IDEProvisionableStatusEvalutorInputs *evaluationInputs; // @synthesize evaluationInputs=_evaluationInputs;
- (void).cxx_destruct;
@property(readonly) BOOL requiresImmediateUserActionResolution;
- (BOOL)_actuallyShouldRepair;
- (void)_waitForEvaluation;
- (id)evaluate;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

