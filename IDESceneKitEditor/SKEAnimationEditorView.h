//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CAKeyframeAnimation, NSBezierPath, NSString;

@interface SKEAnimationEditorView : NSView
{
    CAKeyframeAnimation *_animation;
    NSBezierPath *_bezierPath;
    unsigned long long _mode;
    struct CGColor *_primaryColor;
    struct CGColor *_primaryColorHighlighted;
    struct CGColor *_secondaryColor;
    struct CGColor *_secondaryColorHighlighted;
    struct CGPath *_cachedPath;
    double _scale;
    struct CGPoint _origin;
    struct CGSize _canvasSize;
    long long _selectedPointIndex;
    id <SKEAnimationEditorViewDelegate> _delegate;
    NSString *_placeholderString;
}

@property(copy) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
@property __weak id <SKEAnimationEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)clearDrawInfo;
- (void)computeDrawInfoIfNeeded;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)setFrame:(struct CGRect)arg1;
@property(copy) NSBezierPath *bezierPath;
@property(copy) CAKeyframeAnimation *animation;
- (BOOL)hasContents;
- (void)awakeFromNib;

@end

