//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTObservingToken, IDEActivityReport;

@interface _IDEPlaygroundActivityReportEntry : NSObject
{
    IDEActivityReport *_activityReport;
    DVTObservingToken *_executionObserver;
    DVTObservingToken *_documentCloseObserver;
}

@property(retain) DVTObservingToken *documentCloseObserver; // @synthesize documentCloseObserver=_documentCloseObserver;
@property(retain) DVTObservingToken *executionObserver; // @synthesize executionObserver=_executionObserver;
@property(retain) IDEActivityReport *activityReport; // @synthesize activityReport=_activityReport;
- (void).cxx_destruct;

@end

