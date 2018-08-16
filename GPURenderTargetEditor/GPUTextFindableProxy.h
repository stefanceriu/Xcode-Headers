//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GPURenderTargetEditor/DVTTextFindable-Protocol.h>
#import <GPURenderTargetEditor/NSObject-Protocol.h>

@class NSString;
@protocol NSObject><DVTTextFindable;

__attribute__((visibility("hidden")))
@interface GPUTextFindableProxy : NSObject <NSObject, DVTTextFindable>
{
    id <NSObject><DVTTextFindable> _findable;
}

- (void).cxx_destruct;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (id)initWithFindable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end

