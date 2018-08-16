//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogMessage.h>

@class DVTDispatchLock, DVTWeakInterposer, NSArray, NSMutableArray, NSString;
@protocol IDEDiagnosticItemDelegate;

@interface IDEDiagnosticActivityLogMessage : IDEActivityLogMessage
{
    DVTDispatchLock *_diagnosticFixItItemsLock;
    NSMutableArray *_diagnosticFixItItems;
    DVTWeakInterposer *_delegate_dvtWeakInterposer;
    DVTWeakInterposer *_representedObject_dvtWeakInterposer;
    int _diagnosticSeverity;
}

+ (id)keyPathsForValuesAffectingFixableDiagnosticItems;
+ (id)diagnosticMessageType;
@property(copy, nonatomic) NSArray *diagnosticFixItItems; // @synthesize diagnosticFixItItems=_diagnosticFixItItems;
- (void).cxx_destruct;
- (void)updateFixItInfoWithLocationEncodingConverter:(id)arg1;
@property __weak id representedObject;
@property __weak id <IDEDiagnosticItemDelegate> delegate;
@property(readonly) NSArray *fixableDiagnosticItems;
@property(readonly, copy) NSArray *diagnosticFixItItemsSnapshot;
- (void)removeObjectFromDiagnosticFixItItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inDiagnosticFixItItemsAtIndex:(unsigned long long)arg2;
@property(readonly) NSMutableArray *mutableDiagnosticFixItItems;
@property(readonly) NSString *severityString;
@property(readonly) int diagnosticSeverity;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDiagnosticItem:(id)arg1;
- (BOOL)isEqualDisregardingTimestampToDiagnosticItem:(id)arg1;
- (BOOL)_isEqualToDiagnosticItem:(id)arg1 disregardingTimestamp:(BOOL)arg2;
- (BOOL)_array:(id)arg1 isEqualToArray:(id)arg2;
- (id)init;
- (id)initWithSeverity:(int)arg1 title:(id)arg2 location:(id)arg3;

@end

