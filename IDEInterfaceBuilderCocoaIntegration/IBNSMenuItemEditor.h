//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBEditor.h>

@interface IBNSMenuItemEditor : IBEditor
{
}

- (BOOL)effectiveDrawsActivationDarkening;
- (BOOL)forbidsShowingSelectionIndicators;
- (BOOL)interceptEvent:(id)arg1;
- (BOOL)shouldCloseWithEvent:(id)arg1;
- (BOOL)isEditingSubmenu;
- (void)beginEditingTitle;
- (id)fontForTitleEditing;
- (id)nextItemToEditWithTextMovement:(long long)arg1;
- (void)willEditChild:(id)arg1 inFrameController:(id)arg2;
- (void)positionChildEditorFrames;
- (id)editedMenuItem;
- (id)menuView;

@end

