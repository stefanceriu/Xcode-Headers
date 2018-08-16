//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol DYPShaderSourceDocument, GPUTraceShaderDataProviderDelegate;

@protocol GPUTraceShaderDataProvider <NSObject>
@property(nonatomic) __weak id <GPUTraceShaderDataProviderDelegate> delegate;
- (void)shaderSourceChanged:(id <DYPShaderSourceDocument>)arg1;
- (NSString *)alertInfoKey;
- (NSString *)alertMessageKey;
- (NSArray *)shaderAnnotations;
- (BOOL)editable;
- (NSString *)languageIdentifier;
- (long long)lineNumber;
- (NSURL *)sourceURL;
- (NSString *)sourceCode;
@end

