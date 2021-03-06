//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESourceCodeComparisonEditor/NSObject-Protocol.h>

@class DVTSourceControlRevision, IDESourceCodeBlameController, NSError;

@protocol IDESourceCodeBlameControllerDelegate <NSObject>
- (void)blameController:(IDESourceCodeBlameController *)arg1 showRevision:(DVTSourceControlRevision *)arg2;
- (void)blameController:(IDESourceCodeBlameController *)arg1 diffAgainstRevision:(DVTSourceControlRevision *)arg2;
- (void)blameController:(IDESourceCodeBlameController *)arg1 compareToRevision:(DVTSourceControlRevision *)arg2;
- (void)blameController:(IDESourceCodeBlameController *)arg1 compareRevisionToPreviousRevision:(DVTSourceControlRevision *)arg2;

@optional
- (void)blameController:(IDESourceCodeBlameController *)arg1 didEncounterError:(NSError *)arg2;
@end

