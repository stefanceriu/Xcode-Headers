//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSError, NSMutableDictionary;

@interface XCSBlueprintOperationResult : XCSObject
{
    NSError *_globalError;
    NSMutableDictionary *_repositoryErrorsDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *repositoryErrorsDictionary; // @synthesize repositoryErrorsDictionary=_repositoryErrorsDictionary;
@property(retain, nonatomic) NSError *globalError; // @synthesize globalError=_globalError;
- (void).cxx_destruct;
- (void)addRepositoryErrors:(id)arg1;
- (void)addError:(id)arg1 forRepositoryID:(id)arg2;
- (void)addRepositoryError:(id)arg1;
- (id)mutableRepositoryErrorsForRepositoryID:(id)arg1;
- (id)repositoryErrorsExcludingRepositoryIDs:(id)arg1;
- (id)repositoryErrorsForRepositoryID:(id)arg1;
@property(readonly) NSArray *repositoryErrors;
- (id)dictionaryRepresentation;
- (BOOL)_validateGlobalError:(id)arg1 repositoryErrors:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithGlobalError:(id)arg1 repositoryErrors:(id)arg2 validationErrors:(id *)arg3;
- (id)init;

@end

