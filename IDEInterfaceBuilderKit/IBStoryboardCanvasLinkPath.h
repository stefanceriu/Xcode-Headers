//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBezierPath, NSImage, NSValue;
@protocol IBStoryboardCanvasLink, IBStoryboardCanvasLinkPathDelegate;

@interface IBStoryboardCanvasLinkPath : NSObject
{
    struct CGPoint _startingPoint;
    struct CGPoint _endingPoint;
    long long _packIndex;
    long long _packCount;
    NSImage *_badge;
    NSImage *_selectedBadge;
    BOOL _selected;
    struct CGPoint _startDirection;
    struct CGPoint _endDirection;
    NSBezierPath *_cachedPath;
    NSBezierPath *_cachedPathForHitTesting;
    NSBezierPath *_cachedBadgePath;
    NSBezierPath *_cachedBadgeDashedRingPath;
    NSBezierPath *_cachedArrowheadPath;
    NSBezierPath *_cachedPathForBandSelecting;
    NSValue *_cachedBadgeRectValue;
    double _opacity;
    BOOL _pathShouldBeDashed;
    BOOL _badgeShouldBeRinged;
    id <IBStoryboardCanvasLink> _canvasLink;
    id <IBStoryboardCanvasLinkPathDelegate> _delegate;
}

+ (struct CGPoint)pointDirectionForEdge:(unsigned long long)arg1;
@property __weak id <IBStoryboardCanvasLinkPathDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL badgeShouldBeRinged; // @synthesize badgeShouldBeRinged=_badgeShouldBeRinged;
@property(nonatomic) BOOL pathShouldBeDashed; // @synthesize pathShouldBeDashed=_pathShouldBeDashed;
@property(retain, nonatomic) NSImage *badge; // @synthesize badge=_badge;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) id <IBStoryboardCanvasLink> canvasLink; // @synthesize canvasLink=_canvasLink;
@property(readonly) long long packCount; // @synthesize packCount=_packCount;
@property(readonly) long long packIndex; // @synthesize packIndex=_packIndex;
@property(readonly) struct CGPoint endingPoint; // @synthesize endingPoint=_endingPoint;
@property(readonly) struct CGPoint startingPoint; // @synthesize startingPoint=_startingPoint;
- (void).cxx_destruct;
- (void)updateBadgeLayer:(id)arg1;
- (void)updateArrowLayer:(id)arg1;
- (id)createBadgeLayer;
- (id)createArrowLayer;
- (struct CGRect)conservativeBadgeDrawingBounds;
- (struct CGRect)conservativePathDrawingBounds;
- (struct CGRect)conservativeDrawingBounds;
- (id)effectiveBadgeFillColor;
- (id)effectivePathStrokeColor;
- (BOOL)intersectsRect:(struct CGRect)arg1;
- (BOOL)isPathHitByPoint:(struct CGPoint)arg1;
- (BOOL)isBadgeHitByPoint:(struct CGPoint)arg1;
- (id)pathForBandSelecting;
- (id)pathForHitTesting;
- (id)dashedRingPath;
- (id)badgePath;
- (struct CGRect)dashedRingRect;
- (struct CGRect)badgeImageRect;
- (struct CGRect)badgeRect;
- (struct CGPoint)badgeCenter;
- (id)path;
- (struct CGPoint)arrowheadStartPoint;
- (struct CGPoint)originationPoint;
- (id)initWithStartingPoint:(struct CGPoint)arg1 atStartEdge:(unsigned long long)arg2 endingPoint:(struct CGPoint)arg3 atEndEdge:(unsigned long long)arg4 packIndex:(long long)arg5 packCount:(long long)arg6 canvasLink:(id)arg7;

@end

