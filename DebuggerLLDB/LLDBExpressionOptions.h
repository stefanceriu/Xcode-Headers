//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGSBExpressionOptions.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface LLDBExpressionOptions : NSObject <DBGSBExpressionOptions>
{
    struct SBExpressionOptions {
        struct unique_ptr<lldb_private::EvaluateExpressionOptions, std::__1::default_delete<lldb_private::EvaluateExpressionOptions>> m_opaque_ap;
    } _expressionOptions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)SetTrapExceptions:(_Bool)arg1;
- (void)SetFetchDynamicValue:(int)arg1;
- (void)SetLanguage:(int)arg1;
- (void)SetTimeoutInMicroSeconds:(unsigned int)arg1;
- (void)SetUnwindOnError:(_Bool)arg1;
- (void)SetTryAllThreads:(_Bool)arg1;
- (void)SetIgnoreBreakpoints:(_Bool)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

