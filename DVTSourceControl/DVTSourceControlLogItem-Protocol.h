//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTSourceControl/NSObject-Protocol.h>

@class DVTSourceControlAuthor, DVTSourceControlRevision, NSDate, NSString;

@protocol DVTSourceControlLogItem <NSObject>
@property(readonly, nonatomic) unsigned long long revisionType;
@property(readonly, nonatomic) BOOL isMerge;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) DVTSourceControlRevision *revision;
@property(readonly, nonatomic) DVTSourceControlAuthor *author;
@end

