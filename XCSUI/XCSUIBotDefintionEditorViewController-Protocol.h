//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSUI/DVTInvalidation-Protocol.h>
#import <XCSUI/NSObject-Protocol.h>

@class NSString, XCSUIBotDefinitionContext;

@protocol XCSUIBotDefintionEditorViewController <NSObject, DVTInvalidation>
+ (NSString *)title;
@property(retain, nonatomic) XCSUIBotDefinitionContext *definitionContext;

@optional
- (void)commitChanges;
@end
