//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface DVTModelGraphTransactionScope : NSObject
{
    unsigned long long _transactionCount;
    DVTModelGraphTransactionScope *_parentScope;
    NSMapTable *_subTransactionScopesByWeakOwner;
    NSMapTable *_pendedBlocks;
    BOOL _performingTransaction;
}

+ (id)transactionScopeForOwner:(id)arg1;
+ (id)_globalTransactionScope;
@property(nonatomic) BOOL performingTransaction; // @synthesize performingTransaction=_performingTransaction;
- (void).cxx_destruct;
- (void)dispatchAfterScopeCloseForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_dispatchPendedBlocks;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (void)_endTransactionUpward;
- (void)_beginTransactionUpward;
- (void)_endTransactionDownward;
- (void)_beginTransactionDownward;
- (void)_decrementTransactionCount;
- (void)_incrementTransactionCount;
- (id)subTransactionScopeForOwner:(id)arg1;
- (id)_initWithParentScope:(id)arg1;

@end

