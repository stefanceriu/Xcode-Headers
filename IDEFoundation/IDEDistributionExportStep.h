//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager;

@interface IDEDistributionExportStep : NSObject
{
    NSFileManager *_fileManager;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)_exportPath:(id)arg1 toPath:(id)arg2 context:(id)arg3 error:(id *)arg4;
- (BOOL)_exportToDirectory:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (BOOL)exportToDirectory:(id)arg1 removeTemporaryFiles:(BOOL)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)fileManager;

@end

