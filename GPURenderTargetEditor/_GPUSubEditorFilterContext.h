//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GPUFilterCompletionsEngine, GPUFilterTokenHelper, GPUFilterTokenPredicate, NSString;

__attribute__((visibility("hidden")))
@interface _GPUSubEditorFilterContext : NSObject
{
    NSString *_storageID;
    GPUFilterTokenHelper *_tokenHelper;
    GPUFilterCompletionsEngine *_tokenCompletionsEngine;
    GPUFilterTokenPredicate *_filterPredicate;
}

@property(retain, nonatomic) GPUFilterTokenPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) GPUFilterCompletionsEngine *tokenCompletionsEngine; // @synthesize tokenCompletionsEngine=_tokenCompletionsEngine;
@property(readonly, nonatomic) GPUFilterTokenHelper *tokenHelper; // @synthesize tokenHelper=_tokenHelper;
@property(copy, nonatomic) NSString *storageID; // @synthesize storageID=_storageID;
- (void).cxx_destruct;
- (id)initWithStorageID:(id)arg1 helper:(id)arg2;

@end

