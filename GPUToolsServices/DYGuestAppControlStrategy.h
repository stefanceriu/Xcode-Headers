//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYGuestAppSession;

@interface DYGuestAppControlStrategy : NSObject
{
    DYGuestAppSession *_session;
}

+ (Class)symbolicatorClass;
- (void).cxx_destruct;
- (void)bringToForeground;
- (void)terminate;
- (void)resume;
- (void)createSymbolicator:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

