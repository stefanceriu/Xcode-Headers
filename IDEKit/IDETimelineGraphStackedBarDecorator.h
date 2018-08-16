//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTTimelineDecorator.h>

@class NSArray, NSMutableArray;

@interface IDETimelineGraphStackedBarDecorator : DTTimelineDecorator
{
    unsigned long long _stackCount;
    NSMutableArray *_tickPositions;
    NSMutableArray *_stackData;
    NSArray *_stackTitles;
    NSArray *_stackColors;
    unsigned long long _duration;
}

@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)decorateContainer:(struct DTTimelineDecorationContainer *)arg1;
- (id)stackDataAtTime:(unsigned long long)arg1;
- (void)addStackData:(id)arg1 atTime:(unsigned long long)arg2;
- (void)setDefaultsForPlane:(id)arg1;
@property(readonly, nonatomic) unsigned long long currentDataIndex;
- (id)initWithDuration:(unsigned long long)arg1 stackTitles:(id)arg2 stackColors:(id)arg3;
- (id)init;

@end

