//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>
{
    struct _opaque_pthread_mutex_t _storageLock;
    NSMutableArray *_storage;
}

- (void).cxx_destruct;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNSMapTable:(id)arg1;

@end

