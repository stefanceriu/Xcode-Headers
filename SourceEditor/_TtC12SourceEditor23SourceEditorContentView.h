//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <SourceEditor/CALayerDelegate-Protocol.h>

@class NSString;

@interface _TtC12SourceEditor23SourceEditorContentView : NSView <CALayerDelegate>
{
    // Error parsing type: , name: contentLayer
    // Error parsing type: , name: underlayLayer
    // Error parsing type: , name: overlayLayer
    // Error parsing type: , name: visibleLineRange
    // Error parsing type: , name: layoutManager
    // Error parsing type: , name: fullBleedFrame
    // Error parsing type: , name: accessoryMargins
    // Error parsing type: , name: contentMargins
    // Error parsing type: , name: printScale
    // Error parsing type: , name: responderProxy
    // Error parsing type: , name: axAnnotations
    // Error parsing type: , name: needAnnotationAccessibilityUpdate
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
- (CDUnknownBlockType).cxx_destruct;
- (BOOL)becomeFirstResponder;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
- (void)layoutIfNeeded;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewDidChangeBackingProperties;
- (BOOL)isFlipped;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (long long)accessibilityInsertionPointLineNumber;
- (void)setAccessibilityVisibleCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (long long)accessibilityNumberOfCharacters;
- (struct _NSRange)accessibilitySharedCharacterRange;
- (id)accessibilitySharedTextUIElements;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (void)setAccessibilitySelectedText:(id)arg1;
- (id)accessibilitySelectedText;
- (id)accessibilitySelectedTextRanges;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilitySelectedTextRange;
- (void)setAccessibilityValue:(id)arg1;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
@property(nonatomic, readonly) NSString *debugDescription;
@property(nonatomic, readonly) NSString *description;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end
