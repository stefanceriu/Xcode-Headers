//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSArrayController, NSPopUpButton;

@interface SKInspectorNodeFileProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSPopUpButton *_popUpButton;
    NSArrayController *_availableNodeFilenames;
}

+ (id)scannedSceneFiles;
@property(retain) NSArrayController *availableNodeFilenames; // @synthesize availableNodeFilenames=_availableNodeFilenames;
@property(retain) NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (double)baseline;
- (void)viewDidLoad;

@end

