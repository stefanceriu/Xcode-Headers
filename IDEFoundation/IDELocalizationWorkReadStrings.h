//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import "IDELocalizationWorkProvider.h"

@class NSDictionary;

@interface IDELocalizationWorkReadStrings : IDELocalizationWorkContext <IDELocalizationWorkProvider>
{
}

+ (id)contextWithParent:(id)arg1 path:(id)arg2;
- (id)work;
@property(readonly) NSDictionary *comments;
@property(readonly) NSDictionary *strings;
- (id)path;

@end

