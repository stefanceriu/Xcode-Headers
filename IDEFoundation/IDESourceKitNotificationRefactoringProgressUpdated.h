//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceKitVariantDictionaryWrapper.h>

@class IDESourceKitResponseArray, NSString;

@interface IDESourceKitNotificationRefactoringProgressUpdated : IDESourceKitVariantDictionaryWrapper
{
}

@property(readonly) IDESourceKitResponseArray *diagnostics;
@property(readonly) IDESourceKitResponseArray *edits;
@property(readonly) double percentCompleted;
@property(readonly) NSString *message;

@end

