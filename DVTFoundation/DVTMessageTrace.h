//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DVTMessageTrace : NSObject
{
}

+ (void)reportRadarProblemOccurance:(unsigned long long)arg1;
+ (void)reportDetail:(char *)arg1 collecting:(CDUnknownBlockType)arg2;
+ (void)report:(char *)arg1 success:(BOOL)arg2 reason:(id)arg3;
+ (void)report:(char *)arg1 timeResult:(double)arg2 deresolver:(CDUnknownBlockType)arg3;
+ (void)report:(char *)arg1 number:(long long)arg2 deresolver:(CDUnknownBlockType)arg3;
+ (void)reportSummarized:(char *)arg1 ID:(id)arg2 category:(id)arg3 collecting:(CDUnknownBlockType)arg4;
+ (void)reportSummarized:(char *)arg1 collecting:(CDUnknownBlockType)arg2;
+ (void)reportSummarized:(char *)arg1 ID:(id)arg2 number:(long long)arg3 deresolver:(CDUnknownBlockType)arg4;
+ (void)reportSummarized:(char *)arg1 number:(long long)arg2 deresolver:(CDUnknownBlockType)arg3;
+ (void)reportSummarized:(char *)arg1 ID:(id)arg2;
+ (void)report:(char *)arg1 ID:(id)arg2;
+ (void)reportSummarized:(char *)arg1;
+ (void)reportHit:(char *)arg1;
+ (void)reportForDomain:(char *)arg1 summarize:(BOOL)arg2 collecting:(CDUnknownBlockType)arg3;
+ (double)delay:(double)arg1;
+ (void)initialize;

@end

