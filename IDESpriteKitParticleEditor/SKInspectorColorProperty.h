//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSColor, NSColorWell;

@interface SKInspectorColorProperty : IDEInspectorProperty
{
    NSColorWell *bgColorWell;
    IDEInspectorKeyPath *_valueKeyPath;
    NSColor *_defaultColor;
}

- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (void)setupRefreshTriggersAndConfigure;
- (double)baseline;

@end

