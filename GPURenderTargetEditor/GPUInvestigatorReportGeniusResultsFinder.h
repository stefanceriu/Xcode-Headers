//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEGeniusResultsFinder.h>

@class DVTObservingToken, GPUTraceSession;

__attribute__((visibility("hidden")))
@interface GPUInvestigatorReportGeniusResultsFinder : IDEGeniusResultsFinder
{
    GPUTraceSession *_traceSession;
    DVTObservingToken *_reportSelectionObserver;
}

+ (Class)editorDocumentClass;
- (void).cxx_destruct;
- (void)_updateGeniusResults;
- (void)primitiveInvalidate;

@end
