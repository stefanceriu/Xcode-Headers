//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray;

@interface XCSBotIssueStreak : XCSObject
{
    BOOL _open;
    NSArray *_records;
}

+ (id)issueStreakWithRecords:(id)arg1 open:(BOOL)arg2 validationErrors:(id *)arg3;
@property(readonly, nonatomic) NSArray *records; // @synthesize records=_records;
@property(readonly, nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
- (void).cxx_destruct;
- (BOOL)_validateRecords:(id)arg1 validationErrors:(id *)arg2;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithRecords:(id)arg1 open:(BOOL)arg2 validationErrors:(id *)arg3;

@end

