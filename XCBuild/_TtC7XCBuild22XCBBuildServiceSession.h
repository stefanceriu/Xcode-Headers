//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC7XCBuild22XCBBuildServiceSession : NSObject
{
    // Error parsing type: , name: service
    // Error parsing type: , name: handlerQueue
    // Error parsing type: , name: name
    // Error parsing type: , name: uid
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)setUserInfoForUser:(id)arg1 group:(id)arg2 uid:(int)arg3 gid:(int)arg4 home:(id)arg5 processEnvironment:(id)arg6 buildSystemEnvironment:(id)arg7 usePerConfigurationBuildDirectories:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)setSystemInfoForOSXVersion:(id)arg1 productBuildVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSystemInfoForOSXVersion:(id)arg1 productBuildVersion:(id)arg2 nativeArchitecture:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)sendPIFWithWorkspaceSignature:(id)arg1 auditPIF:(id)arg2 lookupObject:(CDUnknownBlockType)arg3;
- (id)sendPIFWithWorkspaceSignature:(id)arg1 lookupObject:(CDUnknownBlockType)arg2;
- (void)sendPIF:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSpecsDumpWithCompletion:(CDUnknownBlockType)arg1;
- (void)discardMacroEvaluationScope:(id)arg1;
- (void)createMacroEvaluationScopeWithTargetGUID:(id)arg1 buildParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createMacroEvaluationScopeWithProjectGUID:(id)arg1 buildParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateIndexingInfoFor:(id)arg1 targetID:(id)arg2 delegate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)close;
- (id)initWithName:(id)arg1 uid:(id)arg2 service:(id)arg3;
@property(nonatomic, readonly) NSString *uid; // @synthesize uid;
@property(nonatomic, readonly) NSString *name; // @synthesize name;

@end
