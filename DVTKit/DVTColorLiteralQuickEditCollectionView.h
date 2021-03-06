//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionView.h>

@protocol DVTColorLiteralQuickEditCollectionViewDelegate;

@interface DVTColorLiteralQuickEditCollectionView : NSCollectionView
{
    BOOL _keyboardHighlight;
    id <DVTColorLiteralQuickEditCollectionViewDelegate> _colorEditDelegate;
}

@property __weak id <DVTColorLiteralQuickEditCollectionViewDelegate> colorEditDelegate; // @synthesize colorEditDelegate=_colorEditDelegate;
@property(getter=isKeyboardHighlight) BOOL keyboardHighlight; // @synthesize keyboardHighlight=_keyboardHighlight;
- (void).cxx_destruct;
- (void)scrollWheel:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;

@end

