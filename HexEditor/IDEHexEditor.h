//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <HexEditor/DVTFindBarFindable-Protocol.h>
#import <HexEditor/DVTTextFindable-Protocol.h>

@class DVTReplacementView, IDEHexEditorViewController, NSString;

@interface IDEHexEditor : IDEEditor <DVTTextFindable, DVTFindBarFindable>
{
    IDEHexEditorViewController *_hexEditorViewController;
    DVTReplacementView *_hexEditorReplacementView;
}

@property(retain) DVTReplacementView *hexEditorReplacementView; // @synthesize hexEditorReplacementView=_hexEditorReplacementView;
@property(retain) IDEHexEditorViewController *hexEditorViewController; // @synthesize hexEditorViewController=_hexEditorViewController;
- (void).cxx_destruct;
- (void)setStateToken:(id)arg1;
- (void)byteGrouping32:(id)arg1;
- (void)byteGrouping16:(id)arg1;
- (void)byteGrouping8:(id)arg1;
- (void)byteGrouping4:(id)arg1;
- (void)byteGrouping2:(id)arg1;
- (void)byteGroupingNone:(id)arg1;
- (void)plainText:(id)arg1;
- (void)hexadecimal:(id)arg1;
- (void)lineNumbers:(id)arg1;
- (void)extendSelection:(id)arg1;
- (void)moveSelection:(id)arg1;
- (void)toggleOverwriteMode:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end

