//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface IDESourceCodeGenerationCompositeResult : NSObject
{
    NSDictionary *_resultsByCounterpart;
}

@property(readonly) NSDictionary *resultsByCounterpart; // @synthesize resultsByCounterpart=_resultsByCounterpart;
- (void).cxx_destruct;
- (id)compositeResultByMergingWithCompositeResult:(id)arg1;
- (id)description;
- (id)firstCounterpartWithInsertionError;
- (id)resultForCounterpart:(id)arg1;
- (id)resultsForCounterparts:(id)arg1;
@property(readonly) NSSet *counterpartsWithoutErrors;
@property(readonly) NSSet *counterparts;
- (id)initWithResultsByCounterpart:(id)arg1;

@end

