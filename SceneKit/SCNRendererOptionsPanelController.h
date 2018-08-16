//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObjectController.h>

@class NSButton, NSComboBox, NSOutlineView, NSPopUpButton, NSSlider, NSStepper, NSTextField, SCNRendererOptionsPanel, SCNUIDynamicInspector, SCNView;

__attribute__((visibility("hidden")))
@interface SCNRendererOptionsPanelController : NSObjectController
{
    SCNView *_3dView;
    SCNRendererOptionsPanel *_panel;
    NSPopUpButton *antialiasingLevels;
    NSPopUpButton *displayOptions;
    NSTextField *benchResult;
    NSSlider *seekSlider;
    NSStepper *seekStepper;
    NSButton *isolate;
    NSButton *freezeButton;
    NSOutlineView *_sceneGraph;
    SCNUIDynamicInspector *_inspector;
    NSComboBox *pointOfViewComboBox;
    NSComboBox *pointOfCullingComboBox;
    BOOL _viewLocked;
    unsigned int _currentSeekStep;
}

- (void).cxx_destruct;
- (id)selectedNode;
- (id)selection;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)showManipulators;
- (void)inspectCamera:(id)arg1;
- (void)_expandItem:(id)arg1;
- (void)selectAuthoringDisplayMask:(id)arg1;
- (void)exportAs:(id)arg1;
- (void)isolate:(id)arg1;
- (void)close:(id)arg1;
- (void)setSeekStep:(unsigned long long)arg1;
- (unsigned long long)seekStep;
- (void)updateSeek;
- (void)capture:(id)arg1;
- (void)runBench:(id)arg1;
- (void)setAntialiasingLevel:(id)arg1;
- (void)setSuperSampling:(id)arg1;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (void)selectPointOfCulling:(id)arg1;
- (void)selectCamera:(id)arg1;
- (void)disablePassesToggle:(id)arg1;
- (void)hideSpriteKitOverlaysToggled:(id)arg1;
- (void)toggleRetina:(id)arg1;
- (void)enableVBL:(id)arg1;
- (void)archiveToDesktop:(id)arg1;
- (void)recompilePasses;
@property(retain, nonatomic) SCNView *view;
- (id)panel;
-     // Error parsing type: ^{__C3DRendererContext={__CFRuntimeBase=QAQ}iIIIIfI^{__C3DTexture}^{__C3DStack}^vBBBBBB^{__CFDictionary}I^{__CFDictionary}^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vq^{__C3DFXProgramObject}{__C3DEngineStats=IIIIIIIIIIIIIIIIIIIIIIIIddddddddddddddIIIIIIIIIIIIIIIIddd[60d]Idd}{Cache=[16I]Ii^{__C3DBlendStates}I^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}IIiI^viii}{?=[5I][5i][12{?=iII}][12I]^?^?^?^?^?^?^?^?^?^?}[2{VolatileObject=^{__C3DArray}II^{__CFArray}}]^{__C3DArray}I^{__CFDictionary}}16@0:8, name: rendererContext
- (struct __C3DEngineContext *)context;
- (void)sceneDidChange;
- (id)init;

@end

