//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEPegasusSourceEditor/IDELocalAnnotationHostingEditor-Protocol.h>

@class DVTTextDocumentLocation, IDEActivityLogAnalyzerResultMessage, IDEAnalyzerResultsExplorer, IDEAnalyzerResultsVisualization, NSArray, NSColor, NSView;

@protocol IDEAnalyzerResultsHostingEditor <IDELocalAnnotationHostingEditor>
- (void)hideAnalyzerExplorerAnimate:(BOOL)arg1;
- (void)showAnalyzerExplorerForMessage:(IDEActivityLogAnalyzerResultMessage *)arg1 animate:(BOOL)arg2;
@property(nonatomic, readonly) IDEAnalyzerResultsExplorer *analyzerResultsExplorer;
- (void)hideAllMessageBubbleAnnotations;
- (void)showAllMessageBubbleAnnotationsIfNotExplicitlyHidden;
- (void)refreshAnalyzerVisualization:(IDEAnalyzerResultsVisualization *)arg1;
- (void)removeAnalyzerVisualization:(IDEAnalyzerResultsVisualization *)arg1 fadeOut:(BOOL)arg2 completionBlock:(void (^)(void))arg3;
- (void)addAnalyzerVisualization:(IDEAnalyzerResultsVisualization *)arg1 fadeIn:(BOOL)arg2 completionBlock:(void (^)(void))arg3;
- (struct _NSRange)characterRangeFromDocumentLocation:(DVTTextDocumentLocation *)arg1;
@property(nonatomic, readonly) long long textIndentWidth;
@property(nonatomic, readonly) NSColor *backgroundColor;
- (NSArray *)rectArrayForCharacterRange:(struct _NSRange)arg1;
@property(nonatomic, readonly) NSView *textView;
@end
