//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct GPUTimelineGraphDataPlaneCell {
    long long _field1;
    struct GPUTimelineGraphReferencePlaneCell *_field2;
    unsigned long long _field3;
};

struct GPUTimelineGraphReferencePlaneCell {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    id _field4;
    unsigned long long _field5;
};

struct GPUValueRange {
    float min;
    float max;
};

struct NSArray {
    Class _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

