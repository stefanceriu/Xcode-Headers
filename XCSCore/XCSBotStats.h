//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSDate, NSNumber, NSString;

@interface XCSBotStats : XCSObject
{
    NSDate *_requestedDate;
    unsigned long long _requestedDateType;
    NSString *_lastCleanIntegrationID;
    NSDate *_lastCleanIntegrationDate;
    NSString *_bestSuccessStreakIntegrationID;
    NSNumber *_bestSuccessStreakCounter;
    NSDate *_bestSuccessStreakIntegrationDate;
    NSNumber *_numberOfSuccessfulIntegrations;
    NSNumber *_numberOfIntegrations;
    NSNumber *_numberOfCommits;
    NSNumber *_integrationTimeAverage;
    NSNumber *_integrationTimeCount;
    NSNumber *_integrationTimeMaximum;
    NSNumber *_integrationTimeMinimum;
    NSNumber *_integrationTimeStdDev;
    NSNumber *_testAdditionRate;
    NSNumber *_analysisWarningAverage;
    NSNumber *_analysisWarningCount;
    NSNumber *_analysisWarningMaximum;
    NSNumber *_analysisWarningMinimum;
    NSNumber *_analysisWarningStdDev;
    NSNumber *_testFailureAverage;
    NSNumber *_testFailureCount;
    NSNumber *_testFailureMaximum;
    NSNumber *_testFailureMinimum;
    NSNumber *_testFailureStdDev;
    NSNumber *_errorAverage;
    NSNumber *_errorCount;
    NSNumber *_errorMaximum;
    NSNumber *_errorMinimum;
    NSNumber *_errorStdDev;
    NSNumber *_regressedPerfTestAverage;
    NSNumber *_regressedPerfTestCount;
    NSNumber *_regressedPerfTestMaximum;
    NSNumber *_regressedPerfTestMinimum;
    NSNumber *_regressedPerfTestStdDev;
    NSNumber *_warningAverage;
    NSNumber *_warningCount;
    NSNumber *_warningMaximum;
    NSNumber *_warningMinimum;
    NSNumber *_warningStdDev;
    NSNumber *_improvedPerfTestAverage;
    NSNumber *_improvedPerfTestCount;
    NSNumber *_improvedPerfTestMaximum;
    NSNumber *_improvedPerfTestMinimum;
    NSNumber *_improvedPerfTestStdDev;
    NSNumber *_testsAverage;
    NSNumber *_testsCount;
    NSNumber *_testsMaximum;
    NSNumber *_testsMinimum;
    NSNumber *_testsStdDev;
    NSNumber *_codeCoveragePercentageDelta;
}

@property(retain, nonatomic) NSNumber *codeCoveragePercentageDelta; // @synthesize codeCoveragePercentageDelta=_codeCoveragePercentageDelta;
@property(retain, nonatomic) NSNumber *testsStdDev; // @synthesize testsStdDev=_testsStdDev;
@property(retain, nonatomic) NSNumber *testsMinimum; // @synthesize testsMinimum=_testsMinimum;
@property(retain, nonatomic) NSNumber *testsMaximum; // @synthesize testsMaximum=_testsMaximum;
@property(retain, nonatomic) NSNumber *testsCount; // @synthesize testsCount=_testsCount;
@property(retain, nonatomic) NSNumber *testsAverage; // @synthesize testsAverage=_testsAverage;
@property(retain, nonatomic) NSNumber *improvedPerfTestStdDev; // @synthesize improvedPerfTestStdDev=_improvedPerfTestStdDev;
@property(retain, nonatomic) NSNumber *improvedPerfTestMinimum; // @synthesize improvedPerfTestMinimum=_improvedPerfTestMinimum;
@property(retain, nonatomic) NSNumber *improvedPerfTestMaximum; // @synthesize improvedPerfTestMaximum=_improvedPerfTestMaximum;
@property(retain, nonatomic) NSNumber *improvedPerfTestCount; // @synthesize improvedPerfTestCount=_improvedPerfTestCount;
@property(retain, nonatomic) NSNumber *improvedPerfTestAverage; // @synthesize improvedPerfTestAverage=_improvedPerfTestAverage;
@property(retain, nonatomic) NSNumber *warningStdDev; // @synthesize warningStdDev=_warningStdDev;
@property(retain, nonatomic) NSNumber *warningMinimum; // @synthesize warningMinimum=_warningMinimum;
@property(retain, nonatomic) NSNumber *warningMaximum; // @synthesize warningMaximum=_warningMaximum;
@property(retain, nonatomic) NSNumber *warningCount; // @synthesize warningCount=_warningCount;
@property(retain, nonatomic) NSNumber *warningAverage; // @synthesize warningAverage=_warningAverage;
@property(retain, nonatomic) NSNumber *regressedPerfTestStdDev; // @synthesize regressedPerfTestStdDev=_regressedPerfTestStdDev;
@property(retain, nonatomic) NSNumber *regressedPerfTestMinimum; // @synthesize regressedPerfTestMinimum=_regressedPerfTestMinimum;
@property(retain, nonatomic) NSNumber *regressedPerfTestMaximum; // @synthesize regressedPerfTestMaximum=_regressedPerfTestMaximum;
@property(retain, nonatomic) NSNumber *regressedPerfTestCount; // @synthesize regressedPerfTestCount=_regressedPerfTestCount;
@property(retain, nonatomic) NSNumber *regressedPerfTestAverage; // @synthesize regressedPerfTestAverage=_regressedPerfTestAverage;
@property(retain, nonatomic) NSNumber *errorStdDev; // @synthesize errorStdDev=_errorStdDev;
@property(retain, nonatomic) NSNumber *errorMinimum; // @synthesize errorMinimum=_errorMinimum;
@property(retain, nonatomic) NSNumber *errorMaximum; // @synthesize errorMaximum=_errorMaximum;
@property(retain, nonatomic) NSNumber *errorCount; // @synthesize errorCount=_errorCount;
@property(retain, nonatomic) NSNumber *errorAverage; // @synthesize errorAverage=_errorAverage;
@property(retain, nonatomic) NSNumber *testFailureStdDev; // @synthesize testFailureStdDev=_testFailureStdDev;
@property(retain, nonatomic) NSNumber *testFailureMinimum; // @synthesize testFailureMinimum=_testFailureMinimum;
@property(retain, nonatomic) NSNumber *testFailureMaximum; // @synthesize testFailureMaximum=_testFailureMaximum;
@property(retain, nonatomic) NSNumber *testFailureCount; // @synthesize testFailureCount=_testFailureCount;
@property(retain, nonatomic) NSNumber *testFailureAverage; // @synthesize testFailureAverage=_testFailureAverage;
@property(retain, nonatomic) NSNumber *analysisWarningStdDev; // @synthesize analysisWarningStdDev=_analysisWarningStdDev;
@property(retain, nonatomic) NSNumber *analysisWarningMinimum; // @synthesize analysisWarningMinimum=_analysisWarningMinimum;
@property(retain, nonatomic) NSNumber *analysisWarningMaximum; // @synthesize analysisWarningMaximum=_analysisWarningMaximum;
@property(retain, nonatomic) NSNumber *analysisWarningCount; // @synthesize analysisWarningCount=_analysisWarningCount;
@property(retain, nonatomic) NSNumber *analysisWarningAverage; // @synthesize analysisWarningAverage=_analysisWarningAverage;
@property(retain, nonatomic) NSNumber *testAdditionRate; // @synthesize testAdditionRate=_testAdditionRate;
@property(retain, nonatomic) NSNumber *integrationTimeStdDev; // @synthesize integrationTimeStdDev=_integrationTimeStdDev;
@property(retain, nonatomic) NSNumber *integrationTimeMinimum; // @synthesize integrationTimeMinimum=_integrationTimeMinimum;
@property(retain, nonatomic) NSNumber *integrationTimeMaximum; // @synthesize integrationTimeMaximum=_integrationTimeMaximum;
@property(retain, nonatomic) NSNumber *integrationTimeCount; // @synthesize integrationTimeCount=_integrationTimeCount;
@property(retain, nonatomic) NSNumber *integrationTimeAverage; // @synthesize integrationTimeAverage=_integrationTimeAverage;
@property(retain, nonatomic) NSNumber *numberOfCommits; // @synthesize numberOfCommits=_numberOfCommits;
@property(retain, nonatomic) NSNumber *numberOfIntegrations; // @synthesize numberOfIntegrations=_numberOfIntegrations;
@property(retain, nonatomic) NSNumber *numberOfSuccessfulIntegrations; // @synthesize numberOfSuccessfulIntegrations=_numberOfSuccessfulIntegrations;
@property(retain, nonatomic) NSDate *bestSuccessStreakIntegrationDate; // @synthesize bestSuccessStreakIntegrationDate=_bestSuccessStreakIntegrationDate;
@property(retain, nonatomic) NSNumber *bestSuccessStreakCounter; // @synthesize bestSuccessStreakCounter=_bestSuccessStreakCounter;
@property(retain, nonatomic) NSString *bestSuccessStreakIntegrationID; // @synthesize bestSuccessStreakIntegrationID=_bestSuccessStreakIntegrationID;
@property(retain, nonatomic) NSDate *lastCleanIntegrationDate; // @synthesize lastCleanIntegrationDate=_lastCleanIntegrationDate;
@property(retain, nonatomic) NSString *lastCleanIntegrationID; // @synthesize lastCleanIntegrationID=_lastCleanIntegrationID;
@property(nonatomic) unsigned long long requestedDateType; // @synthesize requestedDateType=_requestedDateType;
@property(retain, nonatomic) NSDate *requestedDate; // @synthesize requestedDate=_requestedDate;
- (void).cxx_destruct;
- (BOOL)_validateWithContents:(id)arg1 validationErrors:(id *)arg2;
- (id)description;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end

