//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBDateTokenizer.h>

@class NSArray;

@interface IBSTRFTimeTokenizer : IBDateTokenizer
{
    NSArray *_dayYearOptions;
    NSArray *_percentOptions;
    NSArray *_weekdayOptions;
    NSArray *_minutesOptions;
    NSArray *_secondsOptions;
    NSArray *_monthsOptions;
    NSArray *_periodOptions;
    NSArray *_yearsOptions;
    NSArray *_hoursOptions;
    NSArray *_stampOptions;
    NSArray *_daysOptions;
    NSArray *_zoneOptions;
}

@property(retain) NSArray *zoneOptions; // @synthesize zoneOptions=_zoneOptions;
@property(retain) NSArray *daysOptions; // @synthesize daysOptions=_daysOptions;
@property(retain) NSArray *stampOptions; // @synthesize stampOptions=_stampOptions;
@property(retain) NSArray *hoursOptions; // @synthesize hoursOptions=_hoursOptions;
@property(retain) NSArray *yearsOptions; // @synthesize yearsOptions=_yearsOptions;
@property(retain) NSArray *periodOptions; // @synthesize periodOptions=_periodOptions;
@property(retain) NSArray *monthsOptions; // @synthesize monthsOptions=_monthsOptions;
@property(retain) NSArray *secondsOptions; // @synthesize secondsOptions=_secondsOptions;
@property(retain) NSArray *minutesOptions; // @synthesize minutesOptions=_minutesOptions;
@property(retain) NSArray *weekdayOptions; // @synthesize weekdayOptions=_weekdayOptions;
@property(retain) NSArray *percentOptions; // @synthesize percentOptions=_percentOptions;
@property(retain) NSArray *dayYearOptions; // @synthesize dayYearOptions=_dayYearOptions;
- (void).cxx_destruct;
- (long long)fieldTypeForString:(id)arg1;
- (id)strftimeTokens;
- (void)_regenerateTokenOptions;
- (void)setDelegate:(id)arg1;
- (id)tokenizeString:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

