//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class DVTCrashLog;

@interface IDECrashReportDocument : IDEEditorDocument
{
    DVTCrashLog *_crashLog;
}

+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
@property(readonly) DVTCrashLog *crashLog; // @synthesize crashLog=_crashLog;
- (void).cxx_destruct;
- (void)printDocument:(id)arg1;
- (int)readOnlyStatus;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

@end

