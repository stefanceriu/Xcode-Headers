//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSUI/XCSBotSupportingDocument.h>

@class DVTObservingToken, XCSBot;

@interface XCSBotEditorDocument : XCSBotSupportingDocument
{
    XCSBot *_fetchedBot;
    DVTObservingToken *_maintenanceTasksObserver;
}

- (void).cxx_destruct;
- (id)displayName;
- (id)botIntegration;
- (id)bot;
- (void)editorDocumentWillClose;
- (void)setFileURL:(id)arg1;

@end

