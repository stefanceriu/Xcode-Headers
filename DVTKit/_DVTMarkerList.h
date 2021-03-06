//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _DVTMarkerList : NSObject
{
    struct CGRect _markRect;
    NSMutableArray *_marks;
    NSMutableArray *_markLineNumbers;
    NSMutableArray *_markRects;
}

- (void).cxx_destruct;
- (long long)_closestLineForMarkAround:(double)arg1 within:(double)arg2;
- (id)markRectList;
- (unsigned long long)numMarkRects;
- (struct CGRect)addMark:(double)arg1 onLine:(long long)arg2;
- (void)clearMarks;
- (struct CGRect)markRect;
- (void)setMarkRect:(struct CGRect)arg1;
- (void)_recomputeMarkRects;
- (void)_mergeMarkRect:(struct CGRect)arg1;
- (struct CGRect)_rectForMark:(double)arg1;
- (id)initWithSlotRect:(struct CGRect)arg1;

@end

