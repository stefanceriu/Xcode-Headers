//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@class MDLMatrix4x4Array, NSArray, NSString;

@interface MDLSkeleton : MDLObject <NSCopying>
{
    NSString *_name;
    NSArray *_jointPaths;
    MDLMatrix4x4Array *_jointBindTransforms;
}

@property(readonly, nonatomic) MDLMatrix4x4Array *jointBindTransforms; // @synthesize jointBindTransforms=_jointBindTransforms;
@property(readonly, nonatomic) NSArray *jointPaths; // @synthesize jointPaths=_jointPaths;
- (void)setName:(id)arg1;
- (id)name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

