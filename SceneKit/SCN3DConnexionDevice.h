//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCN3DConnexionDevice : NSObject
{
    struct __IOHIDDevice *deviceRef;
}

- (void)open;
- (void)handleReport:(unsigned int)arg1 data:(id)arg2;
- (id)initWithDeviceRef:(struct __IOHIDDevice *)arg1;

@end

