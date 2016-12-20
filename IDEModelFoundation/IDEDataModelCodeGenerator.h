//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDECodeGenerator.h"

@class CDMCodeGenerator, CDMModel;

@interface IDEDataModelCodeGenerator : IDECodeGenerator
{
    CDMCodeGenerator *_codeGenerator;
    CDMModel *_model;
}

- (void).cxx_destruct;
- (void)generateCodeForInputFile:(id)arg1 outputFilePath:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)generatedFilePathsForInputFilePath:(id)arg1 outputFilePath:(id)arg2 error:(id *)arg3;
- (BOOL)_loadModelFromInputFilePath:(id)arg1 error:(id *)arg2;
- (void)primitiveInvalidate;
- (id)init;

@end

