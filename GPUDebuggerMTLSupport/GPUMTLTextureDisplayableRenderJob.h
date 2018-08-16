//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPURenderTargetEditor/GPURenderJob.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GPUMTLTextureDisplayableRenderJob : GPURenderJob
{
    unsigned long long _elementIndex;
    NSString *_displayElementName;
}

- (void).cxx_destruct;
- (id)displayElementName;
- (BOOL)isStencilDisplayElement;
- (BOOL)isDepthDisplayElement;
- (void)resolveWithTraceResourceItem:(id)arg1;
- (id)initWithResource:(id)arg1 modelFactory:(id)arg2 displayableItem:(id)arg3 elementIndex:(unsigned long long)arg4 level:(unsigned long long)arg5 slice:(unsigned long long)arg6;

@end

