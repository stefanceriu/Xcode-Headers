//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEiPhoneSupport/DVTiPhoneSubController.h>

@class NSMutableDictionary;

@interface DVTiPhoneScreenshotController : DVTiPhoneSubController
{
    NSMutableDictionary *_requestDict;
    void *_connection;
    BOOL transferSuccess;
}

+ (id)keyPathsForValuesAffectingScreenshots;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;
- (void)addCapturedScreenshot:(id)arg1;
- (void)sendFileError:(id)arg1;
- (void)sendFileDone:(id)arg1;
- (void)connectionLost:(id)arg1;
- (void)connectionFailed:(id)arg1;
- (void)requestScreenshot;
- (_Bool)canTakeScreenshot;
- (void)_connectToDevice;
- (void *)getDefaultConnection;
- (struct __CFDictionary *)requestDict;
- (void)primitiveInvalidate;
- (void)closeConnection;
- (void)setStatusText:(id)arg1;
- (void)setScreenshotPending:(BOOL)arg1;
- (id)screenshots;
- (id)globalController;

@end

