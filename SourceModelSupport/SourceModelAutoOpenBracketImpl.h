//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceModel, NSString;

@interface SourceModelAutoOpenBracketImpl : NSObject
{
    NSString *_string;
    DVTSourceModel *_sourceModel;
}

- (void).cxx_destruct;
- (BOOL)_isExpressionItemLikeFunction:(id)arg1;
- (BOOL)_isExpressionItemLikelyTarget:(id)arg1;
- (BOOL)_isItemExpression:(id)arg1;
- (unsigned long long)_reverseParseExpressionFromIndex:(unsigned long long)arg1 ofParent:(id)arg2;
- (unsigned long long)_startLocationForObjCMethodCallAtLocation:(unsigned long long)arg1 withArgs:(char *)arg2;
- (unsigned long long)locationForOpeningBracketForClosingBracket:(unsigned long long)arg1 withArgs:(char *)arg2;
- (BOOL)isAtFirstArgumentInMethodCallAtLocation:(unsigned long long)arg1 inCall:(char *)arg2;
- (BOOL)_isTextEmptyInBetweenItem:(id)arg1 prevItem:(id)arg2;
- (id)_textInBetweenItem:(id)arg1 prevItem:(id)arg2;
- (id)_parenLikeItemAtLocation:(unsigned long long)arg1;
- (BOOL)_isItemParenExpression:(id)arg1;
- (BOOL)_isItemBlockExpression:(id)arg1;
- (BOOL)_isItemBracketLikeExpression:(id)arg1;
- (BOOL)_isItemBracketExpression:(id)arg1;
- (id)stringForItem:(id)arg1;
- (id)initWithSourceModel:(id)arg1 string:(id)arg2;

@end

