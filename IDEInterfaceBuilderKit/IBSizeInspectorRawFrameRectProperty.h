//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSTextField, NSView;

@interface IBSizeInspectorRawFrameRectProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSTextField *_xTextField;
    NSTextField *_yTextField;
    NSTextField *_widthTextField;
    NSTextField *_heightTextField;
    NSView *_nonIntegralFrameWarningView;
}

- (void).cxx_destruct;
- (void)updateTextField:(id)arg1 withValueUsingTransformer:(CDUnknownBlockType)arg2;
- (double)effectiveFrameScale;
- (void)refresh;
- (void)setupRefreshTriggersAndConfigure;
- (id)nibBundle;

@end

