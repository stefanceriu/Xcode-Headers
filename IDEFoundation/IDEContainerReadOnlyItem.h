//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEReadOnlyItem-Protocol.h>

@class DVTFilePath, IDEContainer, NSString, NSURL;

@interface IDEContainerReadOnlyItem : NSObject <IDEReadOnlyItem>
{
    int _readOnlyStatus;
    IDEContainer *_container;
    DVTFilePath *_filePath;
}

@property int readOnlyStatus; // @synthesize readOnlyStatus=_readOnlyStatus;
@property(readonly) IDEContainer *container; // @synthesize container=_container;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (BOOL)makeWritableWithError:(id *)arg1;
- (void)updateReadOnlyStatus;
@property(readonly) NSURL *readOnlyItemURL;
@property(readonly, copy) NSString *description;
- (id)initWithFilePath:(id)arg1 container:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

