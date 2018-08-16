//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface DVTCrashLogSection : NSObject
{
    NSData *_rawData;
    struct _NSRange _labelRange;
    struct _NSRange _contentRange;
}

+ (id)sectionsFromData:(id)arg1 error:(id *)arg2;
@property(readonly) NSData *rawData; // @synthesize rawData=_rawData;
- (void).cxx_destruct;
- (id)description;
@property(readonly) NSArray *contentLines;
@property(readonly) NSString *contents;
@property(readonly) NSString *label;
- (id)initWithData:(id)arg1 labelStart:(const char *)arg2 labelEnd:(const char *)arg3 contentsStart:(const char *)arg4 contentsEnd:(const char *)arg5;

@end

