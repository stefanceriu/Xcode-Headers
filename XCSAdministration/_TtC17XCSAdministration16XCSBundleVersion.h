//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC17XCSAdministration16XCSBundleVersion : NSObject
{
    // Error parsing type: , name: major
    // Error parsing type: , name: minor
}

- (id)init;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithExtendedGraphemeClusterLiteral:(id)arg1;
- (id)initWithUnicodeScalarLiteral:(id)arg1;
- (id)initWithStringLiteral:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithMajor:(long long)arg1 minor:(long long)arg2;
@property(nonatomic, readonly) long long minor; // @synthesize minor;
@property(nonatomic, readonly) long long major; // @synthesize major;

@end
