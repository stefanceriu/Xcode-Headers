//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface _TtC10Foundation21NSKeyValueObservation : NSObject
{
    // Error parsing type: , name: object
    // Error parsing type: , name: callback
    // Error parsing type: , name: path
}

+ (void)setSwizzler:(id)arg1;
+ (id)swizzler;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_swizzle_me_observeValueForKeyPath:(id)arg1 of:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)invalidate;
@property(nonatomic, readonly) NSString *path; // @synthesize path;
@property(nonatomic) __weak NSObject *object; // @synthesize object;

@end
