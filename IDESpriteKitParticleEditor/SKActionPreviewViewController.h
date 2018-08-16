//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class GTFActionEditor, GTFActionLibrary, NSArray, NSURL, SKActionDocument, SKScene;
@protocol SKActionPreviewViewControllerDelegate;

@interface SKActionPreviewViewController : DVTViewController
{
    id <SKActionPreviewViewControllerDelegate> _delegate;
    NSURL *_previewURL;
    SKActionDocument *_actionDocument;
    GTFActionEditor *_actionEditor;
    GTFActionLibrary *_actionLibrary;
    double _playbackSpeed;
}

@property(nonatomic) double playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(retain, nonatomic) GTFActionLibrary *actionLibrary; // @synthesize actionLibrary=_actionLibrary;
@property(nonatomic) __weak GTFActionEditor *actionEditor; // @synthesize actionEditor=_actionEditor;
@property(retain, nonatomic) SKActionDocument *actionDocument; // @synthesize actionDocument=_actionDocument;
@property(retain, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(nonatomic) __weak id <SKActionPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(retain, nonatomic) SKScene *previewScene;
- (void)clearSelection;
- (void)setIsInitialLayout;
- (id)restoreCachedNodeAssignmentsForEditorURL:(id)arg1;
- (void)cacheNodeAssignmentsForEditorURL:(id)arg1;
- (BOOL)canLiveReloadPreview;
- (void)forceStartSimulate;
- (void)updateActionPreview;
- (void)togglePausePlay;
- (void)togglePlayStop;
@property(retain, nonatomic) NSArray *selectedObjects;
@property(readonly, nonatomic) id topLevelNavigablePreviewSceneObject;
- (void)primitiveInvalidate;

@end

