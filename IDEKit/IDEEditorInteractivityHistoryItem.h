//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSSecureCoding-Protocol.h>

@class NSDate, NSURL;

@interface IDEEditorInteractivityHistoryItem : NSObject <NSSecureCoding>
{
    NSDate *_mostRecentActivity;
    NSDate *_startOfActivity;
    NSURL *_documentURL;
    long long _numberOfInteractions;
    long long _numberOfEdits;
}

+ (id)initialHistoryItemForDocumentURL:(id)arg1 withInteractivity:(long long)arg2 onDate:(id)arg3;
+ (BOOL)supportsSecureCoding;
@property(readonly) long long numberOfEdits; // @synthesize numberOfEdits=_numberOfEdits;
@property(readonly) long long numberOfInteractions; // @synthesize numberOfInteractions=_numberOfInteractions;
@property(readonly) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(readonly) NSDate *startOfActivity; // @synthesize startOfActivity=_startOfActivity;
@property(readonly) NSDate *mostRecentActivity; // @synthesize mostRecentActivity=_mostRecentActivity;
- (void).cxx_destruct;
- (id)description;
- (id)updatedItemAfterCountingInteractivity:(long long)arg1 onDate:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 startOfActivity:(id)arg2 mostRecentActivity:(id)arg3 numberOfInteractions:(long long)arg4 numberOfEdits:(long long)arg5;

@end

