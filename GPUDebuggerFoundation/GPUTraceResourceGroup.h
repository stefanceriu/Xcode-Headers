//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

#import <GPUDebuggerFoundation/DYPResourceGroup-Protocol.h>

@class NSMutableArray, NSString;

@interface GPUTraceResourceGroup : GPUTraceOutlineItem <DYPResourceGroup>
{
}

- (id)APIItem;
@property(readonly, nonatomic) struct Function *decodedFunction;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *children;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

