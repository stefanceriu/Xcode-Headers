//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTNotificationToken, DVTObservingToken, NSFont, NSPopover, _TtC17IDESceneKitEditor15SKEShaderSource;

__attribute__((visibility("hidden")))
@interface _TtC17IDESceneKitEditor21SKEShaderSourceEditor : NSObject
{
    // Error parsing type: , name: sourceEditorView
    // Error parsing type: , name: isValid
    // Error parsing type: , name: isHidden
    // Error parsing type: , name: annotationsChangeNotificationToken
    // Error parsing type: , name: warningAnnotationCategory
    // Error parsing type: , name: errorAnnotationCategory
    // Error parsing type: , name: shaderSource
    // Error parsing type: , name: helpPopover
    // Error parsing type: , name: themeChangeNotificationToken
    // Error parsing type: , name: activeLineHighlightOverrideProvider
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)recreateAnnotations;
- (BOOL)__isDVTInvalidation;
- (void)disableActiveLineHighlight;
- (void)enableActiveLineHighlight;
- (void)updateActiveLineVisualization;
- (void)primitiveInvalidate;
- (void)updateLineNumbers;
@property(nonatomic, readonly) NSFont *lineNumberFont;
- (void)updateFontAndColorTheme;
@property(nonatomic, retain) DVTNotificationToken *themeChangeNotificationToken; // @synthesize themeChangeNotificationToken;
- (id)initWithParentView:(id)arg1;
- (void)askForHelp;
@property(nonatomic, retain) NSPopover *helpPopover; // @synthesize helpPopover;
@property(nonatomic, retain) _TtC17IDESceneKitEditor15SKEShaderSource *shaderSource; // @synthesize shaderSource;
@property(nonatomic, retain) DVTObservingToken *annotationsChangeNotificationToken; // @synthesize annotationsChangeNotificationToken;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden;
@property(nonatomic) BOOL valid; // @synthesize valid=isValid;
- (BOOL)isValid;

@end

