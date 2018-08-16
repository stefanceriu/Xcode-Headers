//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESceneKitEditor/SKECurveViewController.h>

#import <IDESceneKitEditor/SKEAnimationEditorViewDelegate-Protocol.h>

@class NSMenuItem, NSMutableDictionary, NSPopUpButton, NSString, SCNParticlePropertyController, SKEAnimationEditorView;
@protocol SKEParticlePropertyControllerViewControllerDelegate;

@interface SKEParticlePropertyControllerViewController : SKECurveViewController <SKEAnimationEditorViewDelegate>
{
    SKEAnimationEditorView *_animationEditorView;
    NSPopUpButton *_curveTypePopUpButton;
    NSPopUpButton *_timingFunctionPopUpButton;
    NSPopUpButton *_presetPopUpButton;
    NSMutableDictionary *_presetAnimations;
    NSMenuItem *_customAnimationMenuItem;
    SCNParticlePropertyController *_particlePropertyController;
    id <SKEParticlePropertyControllerViewControllerDelegate> _delegate;
}

+ (id)emptyParticlePropertyController;
@property __weak id <SKEParticlePropertyControllerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectPreset:(id)arg1;
- (void)curveTypeDidChange:(id)arg1;
- (void)timingFunctionDidChange:(id)arg1;
@property(readonly) NSString *animationDisplayName;
- (id)displayNameForPresetName:(unsigned long long)arg1 inMenu:(BOOL)arg2;
@property(retain) SCNParticlePropertyController *particlePropertyController;
- (BOOL)isAnimation:(id)arg1 equalToAnimation:(id)arg2;
- (id)animationWithPresetName:(unsigned long long)arg1;
- (unsigned long long)currentAnimationName;
- (void)refresh;
- (void)animationEditorViewAnimationDidChange:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

