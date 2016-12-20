//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAbstractDocumentEditor.h"

@interface IBAbstractDocumentEditor (DFRSupport)
- (void)zoomToIdentityLevel:(id)arg1;
- (void)zoomToFitSelection:(id)arg1;
- (id)_makeZoomToIdentityLevelButton;
- (id)_makeZoomToFitSelectionButton;
- (void)updateFramesForDFR:(id)arg1;
- (id)_makeUpdateFramesButton;
- (void)updateConstraintsFromDFR:(id)arg1;
- (id)_makeUpdateConstraintsButton;
- (void)embedInView:(id)arg1;
- (id)_makeEmbedInViewButton;
- (void)_updateZoomToIdentityLevelButtonsState;
- (void)scheduleUpdateTouchBarInvocation;
- (void)scheduleUpdateZoomToIdentityLevelButtonStateInvocation;
- (void)_updateConstraintButtonStateForStatus:(id)arg1;
- (id)_dfrItemsForMisplacement:(id)arg1;
- (void)_updateConstraintButtonStateExcluding:(id)arg1;
- (id)_functionBarForIBCanvas;
- (id)_selectedObjectWithHardwarePreviewMapping;
- (id)_functionBarForHardwarePreview;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (BOOL)wantsToSuppressEditorAreaFunctionBar;
- (void)updateTouchBar;
- (id)ibAbstractDocumentEditorDFRSupport;
@end

