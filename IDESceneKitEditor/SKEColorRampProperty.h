//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, SKEColorRampView;

@interface SKEColorRampProperty : IDEInspectorProperty
{
    SKEColorRampView *_colorRamp;
    IDEInspectorKeyPath *_valueKeyPath;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (double)baseline;

@end

