//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, XCElementSnapshot;

@interface XCTDaemonRecordingEvent : NSObject
{
    NSArray *_eventNames;
    double _timestamp;
    double _duration;
    NSDictionary *_startLocation;
    XCElementSnapshot *_startElementSnapshot;
    XCElementSnapshot *_startApplicationSnapshot;
    NSDictionary *_endLocation;
    XCElementSnapshot *_endElementSnapshot;
    XCElementSnapshot *_endApplicationSnapshot;
}

@property(readonly) XCElementSnapshot *endApplicationSnapshot; // @synthesize endApplicationSnapshot=_endApplicationSnapshot;
@property(readonly) XCElementSnapshot *endElementSnapshot; // @synthesize endElementSnapshot=_endElementSnapshot;
@property(readonly) NSDictionary *endLocation; // @synthesize endLocation=_endLocation;
@property(readonly) XCElementSnapshot *startApplicationSnapshot; // @synthesize startApplicationSnapshot=_startApplicationSnapshot;
@property(readonly) XCElementSnapshot *startElementSnapshot; // @synthesize startElementSnapshot=_startElementSnapshot;
@property(readonly) NSDictionary *startLocation; // @synthesize startLocation=_startLocation;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSArray *eventNames; // @synthesize eventNames=_eventNames;
- (void).cxx_destruct;
- (id)initWithEventNames:(id)arg1 timestamp:(double)arg2 duration:(double)arg3 startLocation:(id)arg4 startElementSnapshot:(id)arg5 startApplicationSnapshot:(id)arg6 endLocation:(id)arg7 endElementSnapshot:(id)arg8 endApplicationSnapshot:(id)arg9;

@end

