//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface IDEPseudoTerminal : NSObject
{
    int _masterFD;
    int _slaveFD;
    NSFileHandle *_masterFileHandle;
    NSString *_slaveName;
}

+ (void)initialize;
@property(readonly) int slaveFD; // @synthesize slaveFD=_slaveFD;
@property(readonly) NSString *slaveName; // @synthesize slaveName=_slaveName;
@property(readonly) NSFileHandle *masterFileHandle; // @synthesize masterFileHandle=_masterFileHandle;
- (void).cxx_destruct;
@property(readonly) NSFileHandle *slaveFileHandle;
- (int)_openSlaveCounterpart:(int)arg1 error:(id *)arg2;
- (BOOL)_openFirstAvailableMasterWithAccessMode:(int)arg1 error:(id *)arg2;
- (void)_closeMasterFD;
- (id)description;
- (id)initWithAccessMode:(int)arg1 error:(id *)arg2;
- (id)initWithAccessMode:(int)arg1 ownsSlaveFileDescriptor:(BOOL)arg2 error:(id *)arg3;

@end

