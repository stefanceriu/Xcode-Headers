//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (DVTInvalidation_Private)
+ (BOOL)__classIsDVTInvalidation;
+ (void)_dvt_synthesizeInvalidationWithDeallocAssertion:(BOOL)arg1 multipleInvalidationAssertion:(BOOL)arg2;
+ (void)_dvt_synthesizeInvalidationWithoutDeallocAssertion;
+ (id)_dvt_invalidatableClasses;
- (BOOL)__isKVOInvalidationZombie;
- (BOOL)__isInvalidationZombie;
- (BOOL)__isDVTInvalidation;
@end

