//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBCanvasOverlay.h>

@class DVTDelayedInvocation, IBViewEditorCanvasFrameController, NSArray, NSMutableDictionary, NSObject<IBAutolayoutItem>;

@interface IBLayoutGuideCanvasOverlay : IBCanvasOverlay
{
    NSMutableDictionary *_userGuideSublayers;
    NSMutableDictionary *_systemGuideSublayers;
    DVTDelayedInvocation *_updateLiveGuidesInvocation;
    NSMutableDictionary *_liveGuideHorizontalSublayers;
    NSMutableDictionary *_liveGuideVerticalSublayers;
    BOOL _showingGuides;
    IBViewEditorCanvasFrameController *_frameController;
    NSObject<IBAutolayoutItem> *_coordinateSpaceView;
    NSArray *_drawableUserLayoutGuides;
    NSArray *_liveLayoutGuides;
    NSArray *_systemLayoutGuides;
}

@property(getter=isShowingGuides) BOOL showingGuides; // @synthesize showingGuides=_showingGuides;
@property(copy, nonatomic) NSArray *systemLayoutGuides; // @synthesize systemLayoutGuides=_systemLayoutGuides;
@property(copy, nonatomic) NSArray *liveLayoutGuides; // @synthesize liveLayoutGuides=_liveLayoutGuides;
@property(copy, nonatomic) NSArray *drawableUserLayoutGuides; // @synthesize drawableUserLayoutGuides=_drawableUserLayoutGuides;
@property(retain, nonatomic) NSObject<IBAutolayoutItem> *coordinateSpaceView; // @synthesize coordinateSpaceView=_coordinateSpaceView;
@property(readonly, nonatomic) __weak IBViewEditorCanvasFrameController *frameController; // @synthesize frameController=_frameController;
- (void).cxx_destruct;
- (void)updateLiveLayoutGuides;
- (void)layoutLabelGroupLayer:(id)arg1 forGuideLayer:(struct CAShapeLayer *)arg2;
- (void)layoutGuideLayer:(struct CAShapeLayer *)arg1 forGuide:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)makeLabelGroupLayerForUserGuide:(id)arg1;
- (struct CAShapeLayer *)makeLayerForGuide:(id)arg1;
- (id)makeBackingLayer;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrameController:(id)arg1;

@end

