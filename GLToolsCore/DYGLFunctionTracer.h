//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsCore/DYFunctionTracer.h>

@interface DYGLFunctionTracer : DYFunctionTracer
{
    struct unordered_set<unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<unsigned int>> _programNames;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)variableForPixelFormatIDNumber:(id)arg1;
- (id)variableForPixelFormatID:(unsigned long long)arg1;
- (id)variableForPBufferIDNumber:(id)arg1;
- (id)variableForPBufferID:(unsigned long long)arg1;
- (id)variableForGLSyncIDNumber:(id)arg1;
- (id)variableForGLSyncID:(unsigned long long)arg1;
- (id)variableForReceiverIDNumber:(id)arg1;
- (id)variableForReceiverID:(unsigned long long)arg1;
- (unsigned int)_objectNameFromVariable:(const char *)arg1;
- (void)_emitErrors:(id)arg1 function:(const struct Function *)arg2;
- (void)_appendTraceLine:(id)arg1 withFunction:(const struct Function *)arg2 iterArgument:(array_iterator_bff672d3)arg3 argumentStrings:(id)arg4 returnVariable:(id)arg5;
- (BOOL)_skipFirstArgumentForFunction:(const struct Function *)arg1;
- (void)_prependReceiver:(id)arg1 function:(const struct Function *)arg2;
- (void)_setCurrentReceiver:(const struct Function *)arg1;
- (id)typeStringForArgument:(const struct Argument *)arg1;
- (id)_stringForScalar1DArrayArgument:(const struct Argument *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_valueStringForPixelFormatAttributesArgument:(const struct Argument *)arg1;
- (id)_stringWithNumber:(id)arg1 argument:(const struct Argument *)arg2;
- (id)init;

@end

