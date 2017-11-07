//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSString;

@interface IDENavigatorSCMStatusTextField : NSTextField
{
    long long _backgroundStyle;
}

+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingHideLocalStatus;
+ (id)keyPathsForValuesAffectingServerStatus;
+ (id)keyPathsForValuesAffectingLocalStatus;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (void)setHidden:(BOOL)arg1;
@property BOOL hideLocalStatus;
@property(copy, nonatomic) NSString *serverStatus;
@property(copy, nonatomic) NSString *localStatus;
- (BOOL)allowsVibrancy;
- (id)init;

@end
