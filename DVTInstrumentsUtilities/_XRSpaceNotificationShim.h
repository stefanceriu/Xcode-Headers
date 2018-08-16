//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XRSpace;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface _XRSpaceNotificationShim : NSObject
{
    BOOL _targetIsSet;
    id <NSObject> _observer;
    id <NSObject> _target;
    id <NSObject> _token;
    XRSpace *_space;
}

@property(nonatomic) __weak XRSpace *space; // @synthesize space=_space;
@property(retain, nonatomic) id <NSObject> token; // @synthesize token=_token;
@property(nonatomic) BOOL targetIsSet; // @synthesize targetIsSet=_targetIsSet;
@property(nonatomic) __weak id <NSObject> target; // @synthesize target=_target;
@property(nonatomic) __weak id <NSObject> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)dealloc;

@end

