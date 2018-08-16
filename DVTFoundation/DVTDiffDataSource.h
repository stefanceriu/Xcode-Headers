//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class NSString;

@interface DVTDiffDataSource : NSObject <NSCopying>
{
    id _content;
    NSString *_label;
    unsigned long long _timestamp;
    struct _DVTDiffContextFlags _dcFlags;
}

+ (id)diffDataSourceWithContent:(id)arg1;
@property struct _DVTDiffContextFlags dcFlags; // @synthesize dcFlags=_dcFlags;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)tokenStringWithTokenRange:(struct _NSRange)arg1;
- (id)tokenStringWithPrefix:(id)arg1 tokenRange:(struct _NSRange)arg2;
- (void)appendTokenStringToString:(id)arg1 tokenRange:(struct _NSRange)arg2;
- (void)appendTokenStringToString:(id)arg1 prefix:(id)arg2 tokenRange:(struct _NSRange)arg3;
- (void)appendLabelToString:(id)arg1 prefix:(id)arg2;
- (unsigned long long)diffTokenHashWithRange:(struct _NSRange)arg1;
- (unsigned long long)diffTokenHashInDiffDescriptor:(id)arg1 range:(struct _NSRange)arg2;
- (long long)numberOfDiffTokens;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (CDStruct_3dd9eb72)diffTokenAtIndex:(long long)arg1;
- (void)getDiffTokens:(CDStruct_3dd9eb72 *)arg1 inDiffDescriptor:(id)arg2 inRange:(struct _NSRange)arg3;
- (CDStruct_3dd9eb72)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDiffDataSource:(id)arg1;
@property(retain) NSString *label; // @synthesize label=_label;
- (id)THREAD_arrangedContent;
- (id)arrangedContent;
@property(readonly) id THREAD_content;
@property(retain) id content; // @synthesize content=_content;
- (BOOL)_setContent:(id)arg1;
- (void)didChangeContent;
- (void)willChangeContent;
- (void)didChange;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithContent:(id)arg1;

@end

