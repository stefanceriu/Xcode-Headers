//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTInvalidation_NSObject.h>

#import <IDEPegasusPlaygroundEditor/IDEWorkspaceRunGroupFunctionBarOverride-Protocol.h>
#import <IDEPegasusPlaygroundEditor/NSTouchBarDelegate-Protocol.h>

@interface _TtC26IDEPegasusPlaygroundEditor23PlaygroundDFRController : DVTInvalidation_NSObject <NSTouchBarDelegate, IDEWorkspaceRunGroupFunctionBarOverride>
{
    // Error parsing type: , name: editor
    // Error parsing type: , name: toggleInlineQuickLookButton
    // Error parsing type: , name: toyboxObserver
    // Error parsing type: , name: didSelectToyNotificationToken
    // Error parsing type: , name: didToggleInlineResultNotificationToken
    // Error parsing type: , name: textViewDidChangeSelectionNotificationToken
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)dfr_didChangeSelection:(id)arg1;
- (void)didSelectToy:(id)arg1;
- (void)changeDisplayRepresentation:(id)arg1;
- (void)toggleExecutionState:(id)arg1;
- (void)toggleQuickLookInline:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (BOOL)shouldSuppressWorkspaceDebugControlTouchBarItem;
- (id)identifierForWorkspaceRunGroupFunctionBarOverride;
- (void)primitiveInvalidate;

@end
