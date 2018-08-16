//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionItemProcessingStep.h>

@class DVTLogAspect;

@interface IDEDistributionCodeSlimmingStep : IDEDistributionItemProcessingStep
{
    DVTLogAspect *_logAspect;
}

+ (id)machODestinationFilePathForDistributionItem:(id)arg1 distributionItemDestinationParent:(id)arg2;
+ (id)requiresBitcodeAppStoreSubmission:(id)arg1 platformsWithRequiredBitcode:(id)arg2 error:(id *)arg3;
+ (id)wantsBitcodeAskForItem:(id)arg1 platformsWithOptionalBitcode:(id)arg2 archive:(id)arg3 error:(id *)arg4;
+ (BOOL)stripMachOAtPath:(id)arg1 strippingOptions:(unsigned long long)arg2 logAspect:(id)arg3 error:(id *)arg4;
@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
- (void).cxx_destruct;
- (_Bool)runWithError:(id *)arg1;
- (id)strippingOptionsWithContext:(id)arg1 andError:(id *)arg2;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (id)name;

@end

