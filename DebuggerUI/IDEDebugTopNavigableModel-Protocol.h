//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DVTInvalidation-Protocol.h>
#import <DebuggerUI/IDEDebugNavigableModel-Protocol.h>

@class IDEDebugSession, NSString;

@protocol IDEDebugTopNavigableModel <IDEDebugNavigableModel, DVTInvalidation>
@property(copy, nonatomic) NSString *name;
- (NSString *)contentDelegateUIExtensionIdentifier;

@optional
@property(readonly, nonatomic) IDEDebugSession *parentDebugSession;
@end

