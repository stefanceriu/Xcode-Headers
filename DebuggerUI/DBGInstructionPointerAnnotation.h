//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTMessageBubbleAnnotation.h>

@class DVTObservingToken, DVTTextAnnotationTheme, DVTTextDocumentLocation, IDEDebugSession, IDEStackFrame, NSImage;

@interface DBGInstructionPointerAnnotation : DVTMessageBubbleAnnotation
{
    IDEDebugSession *_debugSession;
    IDEStackFrame *_stackFrame;
    DVTTextAnnotationTheme *_previousTheme;
    NSImage *_icon;
    DVTObservingToken *_theadNameObserverToken;
    DVTObservingToken *_uniqueIDObserverToken;
    DVTObservingToken *_lastReasonStoppedObserverToken;
    unsigned long long _perfMeasurementCounter;
    DVTTextDocumentLocation *_preDragAnnotationLocation;
}

+ (id)dvt_instructionPointerPathWithSize:(struct CGSize)arg1 tipWidth:(double)arg2;
+ (id)dvt_instructionPointerPathWithSize:(struct CGSize)arg1;
+ (id)_dvt_instructionPointerImageForSize:(struct CGSize)arg1 fillColor:(id)arg2;
@property(retain) DVTTextDocumentLocation *preDragAnnotationLocation; // @synthesize preDragAnnotationLocation=_preDragAnnotationLocation;
- (void).cxx_destruct;
- (id)annotationDisplayDescription;
- (id)annotationDisplayName;
- (void)moveInstructionPointerToParagraphLocation;
- (void)willDrawInTextSidebarView:(id)arg1;
- (id)_themeBasedOnCurrentThreadState;
- (id)_iconForRect:(struct CGRect)arg1;
- (id)sidebarMarkerImage;
- (void)drawSidebarMarkerIconInRect:(struct CGRect)arg1 textView:(id)arg2;
- (struct CGRect)sidebarMarkerRectForFirstLineRect:(struct CGRect)arg1;
- (void)fontAndColorThemeChanged:(id)arg1;
- (void)_updateMessageBubbleText;
- (void)setRepresentedObject:(id)arg1;
- (void)annotationWillUninstall;
- (id)initWithDocumentLocation:(id)arg1 stackFrame:(id)arg2;
- (id)init;

@end

