//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBBinaryArchiver, IBBinaryUnarchiver;

@protocol IBBinaryArchiving <NSObject>

@optional
+ (id)decodeWithBinaryUnarchiver:(IBBinaryUnarchiver *)arg1;
- (const char *)cStringClassNameForBinaryArchiver:(IBBinaryArchiver *)arg1;
- (void)encodeWithBinaryArchiver:(IBBinaryArchiver *)arg1;
- (id)initWithBinaryUnarchiver:(IBBinaryUnarchiver *)arg1;
@end
