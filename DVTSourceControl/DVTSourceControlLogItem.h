//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/DVTSourceControlLogItem-Protocol.h>
#import <DVTSourceControl/NSCopying-Protocol.h>
#import <DVTSourceControl/NSSecureCoding-Protocol.h>

@class DVTSourceControlAuthor, DVTSourceControlRevision, DVTSourceControlWorkingCopy, NSArray, NSDate, NSString;

@interface DVTSourceControlLogItem : NSObject <NSSecureCoding, NSCopying, DVTSourceControlLogItem>
{
    BOOL _complete;
    DVTSourceControlWorkingCopy *_workingCopy;
    NSArray *_fileStatuses;
    DVTSourceControlAuthor *_author;
    DVTSourceControlRevision *_revision;
    NSDate *_date;
    NSString *_message;
    unsigned long long _revisionType;
}

+ (id)sharedUnversionedLogItem;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long revisionType; // @synthesize revisionType=_revisionType;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) DVTSourceControlRevision *revision; // @synthesize revision=_revision;
@property(retain, nonatomic) DVTSourceControlAuthor *author; // @synthesize author=_author;
@property(getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property(retain, nonatomic) NSArray *fileStatuses; // @synthesize fileStatuses=_fileStatuses;
@property(retain, nonatomic) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isMerge;
- (long long)compareToLogItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSString *identifier;
@property(readonly, nonatomic) BOOL hasLoadedFilesWithStatus;
@property(readonly, copy) NSString *description;
- (id)loadCompleteLogItem:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)loadCompleteLogItemWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, getter=isUnversionedLogItem) BOOL unversionedLogItem;
- (id)initWithAuthor:(id)arg1 revision:(id)arg2 date:(id)arg3 message:(id)arg4 fileStatuses:(id)arg5 workingCopy:(id)arg6;
- (id)initWithAuthor:(id)arg1 revision:(id)arg2 date:(id)arg3 message:(id)arg4 revisionType:(unsigned long long)arg5 workingCopy:(id)arg6;
- (id)initWithAuthor:(id)arg1 revision:(id)arg2 date:(id)arg3 message:(id)arg4 workingCopy:(id)arg5;
- (id)initWithAuthor:(id)arg1 revision:(id)arg2 date:(id)arg3 message:(id)arg4 fileStatuses:(id)arg5 revisionType:(unsigned long long)arg6 workingCopy:(id)arg7;
- (id)initIncompleteLogItemWithAuthor:(id)arg1 revision:(id)arg2 date:(id)arg3 workingCopy:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

