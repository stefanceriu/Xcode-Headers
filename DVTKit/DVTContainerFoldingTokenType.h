//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTFoldingTokenType.h>

@class NSString;

@interface DVTContainerFoldingTokenType : DVTFoldingTokenType
{
    NSString *_tokenStart;
    NSString *_tokenEnd;
}

@property(copy) NSString *tokenEnd; // @synthesize tokenEnd=_tokenEnd;
@property(copy) NSString *tokenStart; // @synthesize tokenStart=_tokenStart;
- (void).cxx_destruct;
- (id)stringByStrippingTokens:(id)arg1;
- (struct _NSRange)rangeOfTokenMatchingInString:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithTokenStart:(id)arg1 end:(id)arg2;

@end

