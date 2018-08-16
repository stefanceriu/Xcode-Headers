//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBObjectiveCValidator : NSObject
{
}

+ (id)validateKeyPath:(id)arg1;
+ (BOOL)isValidDecimalInteger:(id)arg1 error:(id *)arg2;
+ (BOOL)isValidOutletName:(id)arg1 error:(id *)arg2;
+ (id)actionSelectorByCorrectingCommonMistakes:(id)arg1;
+ (BOOL)isValidActionSelector:(id)arg1 error:(id *)arg2;
+ (BOOL)isValidSelectorName:(id)arg1 error:(id *)arg2;
+ (BOOL)isValidKeyPath:(id)arg1 error:(id *)arg2;
+ (BOOL)isValidClassName:(id)arg1 error:(id *)arg2;
+ (BOOL)isValidObjcIdentifier:(id)arg1 error:(id *)arg2;
+ (id)invalidKeyPathCharactersSet;
+ (id)invalidSelectorCharactersSet;
+ (id)invalidOutletNameCharactersSet;
+ (id)objcInvalidIdentifierCharacterSet;
+ (void)setObjectiveCValidatorClass:(Class)arg1 forTargetRuntime:(id)arg2;
+ (Class)objectiveCValidatorClassForTargetRuntime:(id)arg1;

@end

