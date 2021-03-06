//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBObjCActionSourceCodeConnectionContext.h>

@class NSDictionary;

@interface IBObjCCocoaTouchEventConnectionContext : IBObjCActionSourceCodeConnectionContext
{
    long long _argumentType;
    unsigned long long _eventType;
}

+ (id)eventType;
+ (id)floatType;
+ (id)integerType;
+ (id)boolType;
@property unsigned long long eventType; // @synthesize eventType=_eventType;
@property(nonatomic) long long argumentType; // @synthesize argumentType=_argumentType;
- (id)sourceCodeInsertionOptions;
- (id)sourceCodeInsertionArguments;
- (id)_effectiveNameForFirstArgument:(id)arg1;
- (id)counterpartsForInsertion;
- (void)setConnectionPrototypeToComplete:(id)arg1;
- (Class)userConfigurableOptionsViewControllerClass;
- (id)labelForCompletingConnectionPrototypeForInsertion;
@property(readonly) NSDictionary *applicableArgumentTypes;
- (long long)effectiveArgumentType;
- (BOOL)userCanConfigureType;
- (id)init;

@end

