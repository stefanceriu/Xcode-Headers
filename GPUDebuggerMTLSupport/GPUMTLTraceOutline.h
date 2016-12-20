//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUTraceOutline.h"

#import "DYPMTLLabelProvider.h"
#import "DYPTraceOutlineDelegate.h"

@class DYFunctionStream, NSString;

__attribute__((visibility("hidden")))
@interface GPUMTLTraceOutline : GPUTraceOutline <DYPTraceOutlineDelegate, DYPMTLLabelProvider>
{
    int _devicePlatform;
    DYFunctionStream *_captureStream;
    id <DYPMTLStateMirror> _stateMirror;
}

- (void).cxx_destruct;
- (id)resourceDictionaryForDeviceID:(unsigned long long)arg1;
- (void)outlineVisitor:(id)arg1 addPipelineStateToCurrentDisplayable:(unsigned long long)arg2;
- (void)outlineVisitor:(id)arg1 createDisplayableOfType:(long long)arg2 fromFunction:(struct Function *)arg3 filterItems:(id)arg4 disclosureHandler:(CDUnknownBlockType)arg5;
- (void)outlineVisitor:(id)arg1 createDisplayableOfType:(long long)arg2 fromFunction:(struct Function *)arg3 filterStrings:(id)arg4 disclosureHandler:(CDUnknownBlockType)arg5;
- (void)outlineVisitor:(id)arg1 createDisplayableOfType:(long long)arg2 fromFunction:(struct Function *)arg3 disclosureHandler:(CDUnknownBlockType)arg4;
- (Class)outlineVisitorFilterItemClass:(id)arg1;
- (void)outlineVisitor:(id)arg1 createAPIItemFromFunction:(struct Function *)arg2 disclosureHandler:(CDUnknownBlockType)arg3;
- (void)outlineVisitorPopDisclosureLevel:(id)arg1;
- (void)outlineVisitor:(id)arg1 pushDisclosureLevelForObjectID:(unsigned long long)arg2 ofType:(unsigned int)arg3;
- (void)outlineVisitor:(id)arg1 pushDisclosureLevelWithLabel:(id)arg2;
- (id)labelForArgument:(const struct Argument *)arg1 functionIndex:(unsigned int)arg2;
- (id)labelForReceiver:(const struct Function *)arg1 functionIndex:(unsigned int)arg2 hideCommandBuffersAndEncoders:(BOOL)arg3;
- (id)labelForObjectID:(unsigned long long)arg1;
- (void)visitFunctionStreamFile:(id)arg1;
- (id)stateMirrorForTraceItem:(id)arg1;
- (id)_derivedStateMirrorFromStateMirror:(id)arg1 forFunctionIndex:(unsigned int)arg2 fromFunctionIndex:(unsigned int)arg3;
- (id)initWithTraceSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

