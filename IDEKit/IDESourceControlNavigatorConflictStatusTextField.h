//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSNumber;

@interface IDESourceControlNavigatorConflictStatusTextField : NSTextField
{
}

+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingConflictStateForUpdateOrMerge;
- (void)setHidden:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
@property(copy, nonatomic) NSNumber *conflictStateForUpdateOrMerge;
- (BOOL)allowsVibrancy;
- (id)init;

@end

