//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTSourceControlAuthor.h"

@class ABPerson, NSArray, NSImage, NSString;

@interface DVTSourceControlAuthor (IDEKitAdditions)
@property(readonly, copy) NSImage *image;
- (id)_imageFromContact:(id)arg1;
- (id)defaultImage;

// Remaining properties
@property(readonly, copy) NSString *displayName;
@property(readonly) NSArray *emails;
@property(readonly, copy) NSString *name;
@property(retain) ABPerson *pairedPerson;
@end

