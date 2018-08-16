//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class DVTLozengeTextField, NSArray, NSTrackingArea, XCSUIBotSummaryStackedBarGraphColumn, XCSUIBotSummaryStackedBarGraphController;

@interface XCSUIBotSummaryStackedBarGraph : NSView
{
    CDUnknownBlockType _resizeHandler;
    NSArray *_graphData;
    NSArray *_issuesSeriesData;
    XCSUIBotSummaryStackedBarGraphController *_controller;
    unsigned long long _largestBarValue;
    NSTrackingArea *_tracker;
    XCSUIBotSummaryStackedBarGraphColumn *_columnInMouseHoverEvent;
    XCSUIBotSummaryStackedBarGraphColumn *_columnInMouseDownEvent;
    DVTLozengeTextField *_noIntegrationsLozenge;
}

@property(retain) DVTLozengeTextField *noIntegrationsLozenge; // @synthesize noIntegrationsLozenge=_noIntegrationsLozenge;
@property(retain) XCSUIBotSummaryStackedBarGraphColumn *columnInMouseDownEvent; // @synthesize columnInMouseDownEvent=_columnInMouseDownEvent;
@property(retain) XCSUIBotSummaryStackedBarGraphColumn *columnInMouseHoverEvent; // @synthesize columnInMouseHoverEvent=_columnInMouseHoverEvent;
@property(retain) NSTrackingArea *tracker; // @synthesize tracker=_tracker;
@property unsigned long long largestBarValue; // @synthesize largestBarValue=_largestBarValue;
@property __weak XCSUIBotSummaryStackedBarGraphController *controller; // @synthesize controller=_controller;
@property(copy) NSArray *issuesSeriesData; // @synthesize issuesSeriesData=_issuesSeriesData;
@property(copy, nonatomic) NSArray *graphData; // @synthesize graphData=_graphData;
@property(copy) CDUnknownBlockType resizeHandler; // @synthesize resizeHandler=_resizeHandler;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)graphTypeString;
- (id)accessibilityContents;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)drawGraphData;
- (void)drawXAxisLabels;
- (void)drawYAxisLabels;
- (void)drawRect:(struct CGRect)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)_columnInEvent:(id)arg1;
- (void)updateTrackingAreas;
- (id)initWithFrame:(struct CGRect)arg1;

@end

