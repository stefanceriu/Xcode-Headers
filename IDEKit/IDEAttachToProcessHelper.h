//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEAttachToProcessSheetDelegate-Protocol.h>

@class IDEWorkspace;
@protocol IDEAttachToProcessErrorHandler;

@interface IDEAttachToProcessHelper : NSObject <IDEAttachToProcessSheetDelegate>
{
    IDEWorkspace *_workspace;
    id <IDEAttachToProcessErrorHandler> _errorHandler;
}

+ (id)_archNameForExecutableArchitecture:(int)arg1;
+ (id)_archtiectureForTarget:(id)arg1;
+ (void)askUserForProcessIdentifierAndAttachFromWorkspace:(id)arg1 withTabController:(id)arg2;
+ (id)attachToProcess:(id)arg1 fromWorkspaceTabController:(id)arg2 usingRunDestination:(id)arg3 explicitActivityViewTitle:(id)arg4;
+ (id)attachToProcess:(id)arg1 fromWorkspace:(id)arg2 withErrorHandler:(id)arg3 usingRunDestination:(id)arg4 explicitActivityViewTitle:(id)arg5;
+ (id)attachToProcess:(id)arg1 fromWorkspace:(id)arg2 withErrorHandler:(id)arg3 usingRunDestination:(id)arg4;
+ (id)attachToProcess:(id)arg1 fromWorkspace:(id)arg2 withErrorHandler:(id)arg3;
- (void).cxx_destruct;
- (void)processIDEntered:(int)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 toolchain:(id)arg4;
- (void)processNameEntered:(id)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 toolchain:(id)arg4;
- (void)processInformationSelected:(id)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 toolchain:(id)arg4;
- (id)_attachToPID:(int)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 displayName:(id)arg4 processPath:(id)arg5 targetArchitecture:(id)arg6 launchStyle:(int)arg7 usingRunDestination:(id)arg8 toolchain:(id)arg9 explicitActivityViewTitle:(id)arg10;
- (void)_attachToProcessName:(id)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 usingRunDestination:(id)arg4 toolchain:(id)arg5;
- (id)_attachToProcess:(id)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 usingRunDestination:(id)arg4 toolchain:(id)arg5 explicitActivityViewTitle:(id)arg6;
- (BOOL)_isValidToRespondToAttachToProcessErrorHandlerProtocol;
- (id)_initWithWorkspace:(id)arg1 errorHandler:(id)arg2;

@end

