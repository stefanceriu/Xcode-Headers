//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

#import "SKColorRampControlDelegate.h"

@class DVTDelayedInvocation, IDEInspectorKeyPath, NSArray, NSString, SKColorRampControl;

@interface SKInspectorColorRampProperty : IDEInspectorProperty <SKColorRampControlDelegate>
{
    SKColorRampControl *colorRampControl;
    IDEInspectorKeyPath *_valueKeyPath;
    DVTDelayedInvocation *_delayedSetter;
    NSArray *_representedObjs;
}

- (void).cxx_destruct;
- (void)colorRampEndedInput:(id)arg1;
- (void)colorRampBeganInput:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (double)baseline;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

