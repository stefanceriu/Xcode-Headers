//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface XRGroupFollowUpBlock : NSObject
{
    CDUnknownBlockType _block;
    NSArray *_ops;
    XRGroupFollowUpBlock *_myselfOrNil;
    // Error parsing type: Ai, name: _shouldntExecuteBlock
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)go;
- (id)initWithBlock:(CDUnknownBlockType)arg1 operations:(id)arg2;

@end

