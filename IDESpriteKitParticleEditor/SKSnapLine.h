//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKSnapLine : NSObject
{
    unsigned long long _plane;
    double _value;
}

+ (id)snapLineOnPlane:(unsigned long long)arg1 withValue:(double)arg2;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) unsigned long long plane; // @synthesize plane=_plane;
- (id)initOnPlane:(unsigned long long)arg1 withValue:(double)arg2;

@end
