//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEExplorationContext.h>

@class IDEDiagnosticActivityLogMessage;

@interface IDEDiagnosticExplorationContext : IDEExplorationContext
{
    IDEDiagnosticActivityLogMessage *_diagnosticMessage;
    BOOL _fixIt;
}

@property BOOL shouldFixIt; // @synthesize shouldFixIt=_fixIt;
@property(readonly) IDEDiagnosticActivityLogMessage *diagnosticMessage; // @synthesize diagnosticMessage=_diagnosticMessage;
- (void).cxx_destruct;
- (int)explorationType;
- (id)initWithDiagnosticMessage:(id)arg1 shouldFixIt:(BOOL)arg2;

@end

