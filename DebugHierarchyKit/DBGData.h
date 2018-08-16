//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGValue-Protocol.h>
#import <DebugHierarchyKit/DBGValueJSONSerialization-Protocol.h>

@class NSData, NSString;

@interface DBGData : NSObject <DBGValueJSONSerialization, DBGValue>
{
    NSData *_data;
}

+ (id)withData:(id)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
@property(retain) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)objectValue;
- (id)initWithData:(id)arg1;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

