//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTAnalyticsClient/DVTAnalyticsData.h>

@class NSArray, NSNumber, NSString;

@interface _TtC18DVTAnalyticsClient35AnalyticsProcessorUsagePointLogData : DVTAnalyticsData
{
    // Error parsing type: , name: command
    // Error parsing type: , name: betaIdentifier
    // Error parsing type: , name: osBuild
    // Error parsing type: , name: osPlatform
    // Error parsing type: , name: osVersion
    // Error parsing type: , name: parent
    // Error parsing type: , name: buildVersion
    // Error parsing type: , name: appVersion
    // Error parsing type: , name: hardwareModel
    // Error parsing type: , name: dateTime
    // Error parsing type: , name: activeCPUs
    // Error parsing type: , name: reportVersion
    // Error parsing type: , name: endTime
    // Error parsing type: , name: microstackshots
    // Error parsing type: , name: primaryState
    // Error parsing type: , name: event
    // Error parsing type: , name: architecture
    // Error parsing type: , name: pid
    // Error parsing type: , name: startTime
    // Error parsing type: , name: powerSource
    // Error parsing type: , name: powerStatsFor
    // Error parsing type: , name: energyDetail
    // Error parsing type: , name: steps
    // Error parsing type: , name: actionTaken
    // Error parsing type: , name: userActivity
    // Error parsing type: , name: duration
    // Error parsing type: , name: cpuUsed
    // Error parsing type: , name: cpuLimit
    // Error parsing type: , name: limitDuration
    // Error parsing type: , name: uuid
    // Error parsing type: , name: executionPath
    // Error parsing type: , name: sampledExecutionTree
    // Error parsing type: , name: binaryImageList
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSArray *binaryImageList; // @synthesize binaryImageList;
@property(nonatomic, copy) NSArray *sampledExecutionTree; // @synthesize sampledExecutionTree;
@property(nonatomic, copy) NSString *executionPath; // @synthesize executionPath;
@property(nonatomic, copy) NSString *uuid; // @synthesize uuid;
@property(nonatomic, copy) NSString *limitDuration; // @synthesize limitDuration;
@property(nonatomic, copy) NSString *cpuLimit; // @synthesize cpuLimit;
@property(nonatomic, copy) NSString *cpuUsed; // @synthesize cpuUsed;
@property(nonatomic, copy) NSString *duration; // @synthesize duration;
@property(nonatomic, copy) NSString *userActivity; // @synthesize userActivity;
@property(nonatomic, copy) NSString *actionTaken; // @synthesize actionTaken;
@property(nonatomic, retain) NSNumber *steps; // @synthesize steps;
@property(nonatomic, copy) NSString *energyDetail; // @synthesize energyDetail;
@property(nonatomic, copy) NSString *powerStatsFor; // @synthesize powerStatsFor;
@property(nonatomic, copy) NSString *powerSource; // @synthesize powerSource;
@property(nonatomic, copy) NSString *startTime; // @synthesize startTime;
@property(nonatomic, retain) NSNumber *pid; // @synthesize pid;
@property(nonatomic, copy) NSString *architecture; // @synthesize architecture;
@property(nonatomic, copy) NSString *event; // @synthesize event;
@property(nonatomic, copy) NSString *primaryState; // @synthesize primaryState;
@property(nonatomic, copy) NSString *microstackshots; // @synthesize microstackshots;
@property(nonatomic, copy) NSString *endTime; // @synthesize endTime;
@property(nonatomic, copy) NSString *reportVersion; // @synthesize reportVersion;
@property(nonatomic, retain) NSNumber *activeCPUs; // @synthesize activeCPUs;
@property(nonatomic, copy) NSString *dateTime; // @synthesize dateTime;
@property(nonatomic, copy) NSString *hardwareModel; // @synthesize hardwareModel;
@property(nonatomic, copy) NSString *appVersion; // @synthesize appVersion;
@property(nonatomic, copy) NSString *buildVersion; // @synthesize buildVersion;
@property(nonatomic, copy) NSString *parent; // @synthesize parent;
@property(nonatomic, copy) NSString *osVersion; // @synthesize osVersion;
@property(nonatomic, copy) NSString *osPlatform; // @synthesize osPlatform;
@property(nonatomic, copy) NSString *osBuild; // @synthesize osBuild;
@property(nonatomic, copy) NSString *betaIdentifier; // @synthesize betaIdentifier;
@property(nonatomic, copy) NSString *command; // @synthesize command;

@end

