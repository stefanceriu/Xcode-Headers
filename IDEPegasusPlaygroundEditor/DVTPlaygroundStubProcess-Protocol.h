//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol DVTPlaygroundStubProcess
- (void)setSocketPath:(NSString *)arg1 slaveFileName:(NSString *)arg2 resourceDirectoryPath:(NSString *)arg3 completion:(void (^)(int, NSError *))arg4;
- (void)ensureEnvironmentForLibraryPaths:(NSArray *)arg1 frameworkPaths:(NSArray *)arg2 completion:(void (^)(BOOL))arg3;
- (void)reset;
- (void)execute;
@end

