//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTTimelineRulerBackgroundDecorator.h>

@class GPUTimelineGraphDataSource, NSDictionary, NSNumberFormatter;
@protocol GPUTimelineGraphTheme;

@interface GPUTimelineGraphTimelineDecorator : DTTimelineRulerBackgroundDecorator
{
    NSDictionary *_attributes;
    NSNumberFormatter *_formatter;
    _Bool _decoratingAtGroupLevel;
    _Bool _allowDecoratingAtGroupLevel;
    id <GPUTimelineGraphTheme> _theme;
    GPUTimelineGraphDataSource *_dataSource;
    unsigned long long _nanosecondPerPoint;
    unsigned long long _decorationInterval;
}

@property(readonly, nonatomic) unsigned long long decorationInterval; // @synthesize decorationInterval=_decorationInterval;
@property(nonatomic) unsigned long long nanosecondPerPoint; // @synthesize nanosecondPerPoint=_nanosecondPerPoint;
@property(retain, nonatomic) GPUTimelineGraphDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id <GPUTimelineGraphTheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)_decorateUsingTimestamp:(struct DTTimelineDecorationContainer *)arg1;
- (void)_decorateUsingLabel:(struct DTTimelineDecorationContainer *)arg1;
- (void)decorateContainer:(struct DTTimelineDecorationContainer *)arg1 qualityOfService:(unsigned int)arg2 priority:(int)arg3 group:(id)arg4;
- (unsigned long long)duration;

@end

