//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEDiagnosticActivityLogMessage.h>

@interface IDESwiftDiagnosticActivityLogMessage : IDEDiagnosticActivityLogMessage
{
    unsigned long long _diagnosticLevel;
}

@property(readonly) unsigned long long diagnosticLevel; // @synthesize diagnosticLevel=_diagnosticLevel;
- (id)description;
- (id)initWithDiagnostic:(CDStruct_4c46f3f5)arg1 documentURL:(id)arg2;

@end

